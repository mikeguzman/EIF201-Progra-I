/*
 * =====================================================================================
 *
 *       Filename:  example_03.cpp
 *
 *    Description:  Working with Integers
 *
 *        Created:  29/07/2019
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include <iostream>

int main(int argc, const char *argv[]) {
    // variable declarations
    int number1;  // first integer to add
    int number2;  // second integer to add
    int sum;      // sum of number1 and number2

    std::cout << "Enter first integer: ";  // prompt user for data
    std::cin >> number1;  // read the first integer from user into number1

    std::cout << "Enter second integer: ";  // prompt user for data
    std::cin >> number2;  // read the second integer from user into number2

    sum = number1 + number2;

    std::cout << "Sum is " << sum << std::endl;

    return 0;
}