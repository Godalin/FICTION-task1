# FICTION-task1

For each task file (`task<i>-<j>`), check the reachability of `reach_error()` statements, which is called by `assert(<condition>)`. In other words, you have to check whether the conjunction of path constraints to the assertion statement and assertion condition is satisfiabled. You should model the constraints in SMT-LIB language and pick any SMT solver (Z3 is recommended) to get the answer. If the answer is SAT, then give at least one input case for the task.

+ Basic level: `task1-<j>.c` (j=1,2,3)
+ Advanced level: `task<i>-<j>.c` (i=2,3; j=1,2,3,4,5)
+ Top level: to be released

### References
+ [Constraints Solving Courses in Bilibili](https://www.bilibili.com/video/BV1gP411h7dp/?share_source=copy_web&vd_source=76cf306df78e2f439a7a8e9668546689)
+ Cadar C, Sen K. Symbolic execution for software testing: three decades later[J]. Communications of the ACM, 2013, 56(2): 82-90.
+ Roberto Baldoni, Emilio Coppa, Daniele Cono D’elia, Camil Demetrescu, and Irene Finocchi. 2018. A Survey of Symbolic Execution Techniques. ACM Comput. Surv. 51, 3, Article 50 (May 2019), 39 pages. https://doi.org/10.1145/3182657
+ D. Kroening and O. Strichman. Decision Procedures.
+ Dennis Yurichev. SAT/SMT by Example.
+ [Documents of all plugins.](https://frama-c.com/html/documentation.html)
