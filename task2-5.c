#include "harness.h"
#include <stdlib.h>
#define MAX_PACKET 10
#define PACKET_SIZE 2

char multi_array[MAX_PACKET][PACKET_SIZE];

char ** decode_packets(char *buffer) {
  int i, j;
  for (i=0; i<MAX_PACKET; i++)
    for (j=0; j<PACKET_SIZE; j++)
      multi_array[i][j] = 0;
  int number_of_packets;
  int packet_id;
  
  number_of_packets = (int)buffer[0];
  if ((number_of_packets > MAX_PACKET) || (number_of_packets < 0)) return NULL;
  for (i=0; i<number_of_packets; i++) {
    packet_id = (int) buffer[(i*(PACKET_SIZE+1))+1];
    if ((packet_id > number_of_packets) || (packet_id < 0)) return NULL;
    for (j=0; j<PACKET_SIZE; j++)
      multi_array[packet_id][j] = buffer[(i*(PACKET_SIZE+1)) +j+2];
  }
  
  if ((number_of_packets<MAX_PACKET) && (multi_array[number_of_packets][0] != 0))
    assert(0);
  
  return multi_array;
}

int main() {
    /* This is an example of valid packet buffer can be successfully decoded and returned by function decode_packets.
     * A valid packet buffer has a fixed length of 31, and contains at most 10 (MAX_PACKET) packets. And this example
     * contains 5 packets, which is indicated by first char valid_buffer[0].
     * The following chars are messages of packets: packet 0 is "AB", packet 1 is "CD", packet 2 is "EF", packet 3 is
     * "GH", packet 4 is "IJ". Each packet has fixed size of 2 (PACKET_SIZE), and the number before each packet message
     * is the id of this packet.*/

    //char valid_buffer[31] = {5, 0, 'A', 'B', 1, 'C', 'D', 2, 'E', 'F', 3, 'G', 'H', 4, 'I', 'J'};
    //decode_packets(valid_buffer);


    /* Now we generate a random packet buffer, and check whether or not it can trigger the reach_error statement wrapped
     * by the assertion.
     * Note that the the number_of_packets is ensured to be an integer in [1, MAX_PACKET], but id and message of each
     * packet are unsigned chars. And you SHOULD CORRECTLY model these variables to get the CORRECT answer. */
    char buffer[31];
    buffer[0] = __random_uchar() % MAX_PACKET + 1; // 1 <= buffer[0] <= MAX_PACKET
    for (int i = 1; i < 31; i++) buffer[i] = __random_uchar();
    decode_packets(buffer);
    
    return 0;
}
