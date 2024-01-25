// fibonacci.cpp

#include "fibonacci.h"
#include <iostream>
#include <chrono>
#include <vector>

namespace fibonacciSequence
{
    void Fibonacci::compare(int n) {
        /*
        Prints a comparison of the two implemented methods when calculating a given number in the sequence.
        */
        std::chrono::duration<double> elapsedRecursion, elapsedLoop;
        std::chrono::steady_clock::time_point start, end;
        long recursionResult, loopResult;

        std::cout << "=================================" << std::endl;
        std::cout << "RUNNING THE FIBONACCI CALCULATOR!" << std::endl;
        std::cout << "=================================" << std::endl;
        
        std::cout << "Beginning method comparison for " << n;
        switch(n%10) {
            case 1:
                std::cout << "st ";
                break;
            case 2:
                std::cout << "nd ";
                break;
            case 3:
                std::cout << "rd ";
                break;
            default:
                std::cout << "th ";
            }
        std::cout << "Fibonacci number..." << std::endl;

        //Performing the 'loop' test first, as it is usually faster and has an error for exceeding the value limit inbuilt
        start = std::chrono::steady_clock::now();
        loopResult = loop(n);
        end = std::chrono::steady_clock::now();
        elapsedLoop = end - start;
        std::cout << "Loop test completed..." << std::endl;


        //Performing the 'recursion' test
        start = std::chrono::steady_clock::now();
        recursionResult = recursion(n);
        end = std::chrono::steady_clock::now();
        elapsedRecursion = end - start;
        std::cout << "Recursion test completed..." << std::endl;

        if (recursionResult != loopResult) { // Checking that both calculations have returned the same value
            std::cout << "ERROR: Methods returned different values, calculation has failed..." << std::endl;
            std::cout << "Recursion return: " << recursionResult << std::endl;
            std::cout << "Loop return:      " << loopResult << std::endl;
            std::cout << "Exiting..." << std::endl;
            return;
        }

        std::cout << "=====================" << std::endl;
        std::cout << "CALCULATIONS COMPLETE" << std::endl;
        std::cout << "=====================" << std::endl;
        std::cout << "RESULT: "  << recursionResult << std::endl;
        std::cout << "---------------------" << std::endl;
        std::cout << "TIME ELAPSED" << std::endl;
        std::cout << "Recursion:    " << elapsedRecursion.count() << " second(s)" << std::endl;
        std::cout << "Loop:         " << elapsedLoop.count()      << " second(s)" << std::endl;
        std::cout << "---------------------" << std::endl;
    }

    long Fibonacci::recursion(int n) {
        /*
        Returns the provided number in the Fibonacci Sequence, calculated using recursion
        */
        if (n < 0) {
            throw std::logic_error("Invalid attempt, no such Fibonacci number exists...");
        }
        switch(n) {
            case 0:
                return 0;
            case 1:
                return 1;
            default:
                return recursion(n-1) + recursion(n-2);
        }
    }

    long Fibonacci::loop(int n) {
        /*
        Returns the provided number in the Fibonacci Sequence, calculated using a loop
        */
        long left, right, result;
        bool flip;
        if (n < 0) {
            throw std::logic_error("Invalid attempt, no such Fibonacci number exists...");
        } else if (n == 0 || n == 1) {
            return n;
        }
    
        flip = true; // 'Flip Flop' style calculation, where flip is left & flop is right. One is updated at a time by combining it's own old value and the value of the opposite 'side'
        left = 0;
        right = 1;

        for (int nCurrent = 2; nCurrent < n; nCurrent++) {
            if (flip) {
                left = left + right;
                flip = false;
            } else {
                right = left + right;
                flip = true;
            }
            if ((result = left + right) < 0) {
                throw std::length_error("Calculation has exceeded datatype's limitation, exiting...");
            }
        }
        return result;
    }
}