//main.cpp

#include "fibonacci.h"
#include <iostream>

int inputInt() {
/*
Used to take user input for the requested fibonacci number
*/
    std::cout << "Please enter your desired Fibonacci number..." << std::endl;
    std::cout << "(Must be an Integer of value 0 or greater)" << std::endl;

    int x;
    std::cin >> x; //Take an initial input
    
    while (x < 0 || std::cin.fail()) { // If the most recent input is invalid, loop until we have a valid input.
        std::cout << "(Invalid input, please try again...)" << std::endl;
        std::cin.clear();
        std::cin.ignore();
        std::cin >> x;
    }

    std::cin.ignore(); //Empties the buffer of other characters
    
    return x;
}

int main() { 
    /*
    Main - Uses the calculator from a external (public) class
    */
    int n = inputInt();
    fibonacciSequence::Fibonacci::compare(n);
    return 0;
}