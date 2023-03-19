## BSQ: find the biggest square

EPITECH subject: Elementary programming in C

### Project description: 
You must find the largest possible square on a board while avoiding obstacles.

The board can be generated two ways. The first one is by reading a file passed as the program’s argument. The file is valid if it is respecting those constraints:
- its first line contains the number of lines on the board (and only that),
- “.” (representing an empty place) and “o” (representing an obstacle) are the only two characters for the
other lines,
- all of the lines are of the same length (except the first one),
- it contains at least one line,
- each line is terminated by ‘\n’.

You program must print the board, with some “.” replaced by “x” to represent the largest square you found.

### Solution:
- dynamic programming algorithm to solve the task, description [here](https://stackoverflow.com/questions/20335427/most-efficient-algorithm-to-find-the-biggest-square-in-a-two-dimension-map)
- using SOLID principles to structurise my project
- creating map_structure to parse input, store map chracteristics, find biggest square and print it
