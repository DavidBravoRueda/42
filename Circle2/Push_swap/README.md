*This project has been created as part of the 42 curriculum by anbravo-*

# Push_swap

## Description

**Push_swap** is a highly efficient algorithmic project that challenges students to sorta stack of integers using a limited set of operations and a secondary stack. The goal is to produce the shortest possible sequence of instruction to transform an unordered stack into a sorted one.

The project implements a **Cost-Optimized Strategy** (a variation of the Turk Algorithm). It works by:

1. **Pre-sorting:** Pushing elements to Stack B while maintaining a basic relative order.

2. **Calculation:** Analyzing the "cost" (number of operations) for each element in Stack B to reach its correct position in Stack A.

3. **Execution:** Moving the "cheapest" element using optimized double rotation (`rr`, `rrr`) whenever possible.

## Instructions

### Compilation

The project includes a Makefile with the standard rules. To compile the executable, run:

```bash
make
```

### Execution

Run the program by passing a list of integers as arguments. The program will output the list of instructions to sort them:

```bash
./push_swap 3 2 5 1 4
```

You can also use a single string with numbers:

```bash
./push_swap "3 2 5 1 4"
```

### Running with a Checker

To verify that the instructions actually sort the stack, pipe the output to a checker:

```bash
ARG="3 2 5 1 4"; ./push_swap $ARG | ./checker_linux $ARG
```

## Resources

### References

* **The Turk Algorithm:** An optimized approach for the Push_swap project that focuses on greedy cost calculation.

* **42 Docs:** Internal documentation regarding the rules and constraints of the `push_swap` operations.

* **Linux Man Pages:** Documentation for `write`, `malloc`, `free`, and `exit`.

### AI Usage Disclosure

Artificial Intelligence was used during this project for the following tasks:

* **Refactoring ang Cleanup:** Assistance in ensuring that the logic in `do_moves.c` and `cost.c` was consistent and followed the `t_stack` structure.

* **Debugging:** Identifying potential edge cases in the `get_index` fuction within `start.c` to handle the `INT_MIN` value correctly.

## Technical Choices

* **Indexing:** Instead of comparing raw integers, the program assigns an index to each value. This simplifies the logic for finding targets and calculating costs.

* **Linked List:** A circular-like management of a doubly linked list structure was implemented to handle rotation (`ra`, `rra`) efficiently without moving actual data in memory, only pointers.
