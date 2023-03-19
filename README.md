
# BSQ: Find the Biggest Square
EPITECH subject: Elementary programming in C
### Project Description:
You must find the largest possible square on a board while avoiding obstacles.

The board can be generated in two ways. The first one is by reading a file passed as the program’s argument. The file is valid if it is respecting those constraints:

- Its first line contains the number of lines on the board (and only that),
- “.” (representing an empty place) and “o” (representing an obstacle) are the only two characters for the other lines,
- All of the lines are of the same length (except the first one),
- It contains at least one line,
- Each line is terminated by ‘\n’.

Your program must print the board, with some “.” replaced by “x” to represent the largest square you found.

There are two ways to run the program:
1. Read map from the file `./bsq file_name_with_map`
2. Generate map from number of lines and pattern to repeat `./bsq <number_of_lines> <pattern_to_repeat>`

### Solution:
- Dynamic programming algorithm to solve the task, description [here](https://stackoverflow.com/questions/20335427/most-efficient-algorithm-to-find-the-biggest-square-in-a-two-dimension-map)
- Using SOLID principles to structure my project
- Creating map_structure to parse input, store map characteristics, find biggest square, and print it

  

### Compilation and Testing
- Compile using Makefile:  `make all`
- Then run generated script with `./bsq file_name_with_map` or `./bsq <number_of_lines> <pattern_to_repeat>`
- Alternatively, it is possible to run all tests on different size maps using `make tests_run`

### Quality
- 95% of tests pass (in EPITECH testing system)
- Largest maps like 10000x10000 take too long to be processed, that's why 5% of tests fail due to timeout

### What to Improve in the Future:
Parsing process can be improved:
- Now I read/generate the map to the structure as a 2-dimensional array of chars
- Then I go through the array of chars and fill a new array of integers of the same shape using main dynamic programming algorithm
- It is not efficient: we can avoid generating two arrays of the same shape corresponding to the initial map.
