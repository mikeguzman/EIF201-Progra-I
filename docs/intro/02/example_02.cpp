/*
 * =====================================================================================
 *
 *       Filename:  example_02.cpp
 *
 *    Description:  Printing a line of text with multiple statements.
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
    std::cout << "Welcome ";
    std::cout << "to the UNA" << std::endl;

    std::cout << "Welcome\nto\n\nUNA!\n";

    return 0;
}
