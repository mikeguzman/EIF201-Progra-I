/*
 * =====================================================================================
 *
 *       Filename:  myfirstclass.cpp
 *
 *    Description:  Define class GradeBook with a member function
 *                  displayMessage, create a GradeBook object, and call its
 *                  displayMessage function.
 *
 *        Created:  29/07/2019
 *
 *         Author:  Maikol Guzmán mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */

#include <iostream>

// GradeBook class definition
class GradeBook {
 public:
    // function that displays a welcome message to the Gradebook user
    void displayMessage() {
        std::cout << "Welcome to the Progra I with C++!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    GradeBook myGradeBook;  // create a GradeBook object named myGradeBook

    myGradeBook.displayMessage();

    return 0;
}