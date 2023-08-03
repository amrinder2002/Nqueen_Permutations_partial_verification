# Nqueen_Permutations_partial_verification
This repository contains a C++ implementation of a permutation algorithm with certain constraints. The algorithm generates permutations of a given set of numbers while adhering to specific conditions, and measures the time taken to complete the process. This README provides an overview of the code and instructions for running the program.

Table of Contents
Introduction
Algorithm
Usage
Performance
Contributing
License
Introduction
Permutations are a common problem in computer science and mathematics. This code implements a permutation algorithm that generates permutations of a set of numbers, subject to certain constraints. The constraints in this case involve the relative differences between elements in the permutation.

Algorithm
The algorithm generates permutations using a recursive approach. It swaps elements in the array and checks whether the constraints are satisfied at each step. The specific constraints involve ensuring that the absolute difference between an element and any previously placed element is not equal to the difference in their indices.

Usage
Follow the steps below to compile and run the code:

Clone this repository to your local machine.

Ensure you have a C++ compiler installed.

Navigate to the cloned directory using the terminal.

Compile the code using the following command:

bash
Copy code
g++ -o permutation permutation.cpp
Run the compiled executable:

bash
Copy code
./permutation
Follow the on-screen prompts to enter the value of n (the number of elements in the set).

The program will generate permutations based on the specified constraints and display the permutations that satisfy the conditions.

Performance
The code measures the time taken to generate permutations using the high_resolution_clock from the <chrono> library. After generating permutations, it outputs the count of valid permutations and the time taken in microseconds.

Contributing
Contributions to this repository are welcome. If you find any issues or would like to enhance the algorithm or documentation, feel free to open a pull request.

Please feel free to enhance the README with additional sections or information that you find relevant.
