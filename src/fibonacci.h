// fibonacci.h

#pragma once

namespace fibonacciSequence
{
    class Fibonacci
    {
    public:
        static void compare(int);    //Prints a comparison of the two implemented methods when calculating a given number in the sequence.
        static long recursion(int);   //Returns the provided number in the Fibonacci Sequence, calculated using recursion
        static long loop(int);        //Returns the provided number in the Fibonacci Sequence, calculated using a loop
    };
}