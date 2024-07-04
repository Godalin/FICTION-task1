# FICTION-task1

For each task file (`task<i>-<j>`), check the reachability of `reach_error()` statements, which is called by `assert(<condition>)`. In other word, you have to check whether the conjunction (c) of path constraints to the assertion statement and assertion condition is satisfiabled. You should model the constraints in SMT-LIB language and pick any SMT solver (Z3 is recommended) to get the answer. If the answer is SAT, then give at least one input case for the task.
