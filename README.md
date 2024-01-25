# fibonacci_sequence
**About the project:**

This is a quick C++ demo, with two separate implementations that can calculate a given number in the Fibonacci Sequence. One implementation utilises recursion, the other utilises a loop.

Both functions operate under the logic that the sequence begins as follows: 0, 1, 1, 2, 3, 5, ...

Therefore the fourth value is 3, the fifth value is 5 etc.

All of the original source code is located within src, these files were all compiled together to create "fibonacci_sequence.exe".

**Running the program:**

To execute the program on a windows machine; Double click "fibonacci_sequence.exe" | Within a terminal you might run .\fibonacci_sequence.exe

Upon successful execution you will be prompted to enter a valid Integer of a value greater than 0. Having done this the program should run and describe both methods performance and result.

Note: Any input above 46: An error will occur due to the native data type limitations used (The answer becomes too large).

**Usage / Instructions:**

•	Upon execution, an input will be taken to determine what number in the fibonacci sequence you wish to determine. 

•	After a short delay two values should be displayed and timed, one listed as "Recursion", the other as "Loop".

**Proposed improvements / revisions:**

•	Implementing an error for exceeding the datatype size for exceedingly large calculations (Note, this has been implemented for the "loop" method, but not the "recursive" method as it is challenging to implement a check without a large performance impact on an already suboptimal method).

•	Addition of a loading / progress bar would be helpful for exceedingly large calculations (Primarily for the recursive method as it can take excessive amounts of time).

**Note:**

If you have any advice on how I might have approached this differently or improved the design please feel free to reach out, I welcome constructive criticism.
