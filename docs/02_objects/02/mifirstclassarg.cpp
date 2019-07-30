/*
 * =====================================================================================
 *
 *       Filename:  mifirstclassarg.cpp
 *
 *    Description:  Define class GradeBook with a member function that
 *                  takes a parameter, create a GradeBook object and call its
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
#include <string>

// GradeBook class definition
class GradeBook {
 public:
    void displayMessage(const std::string &courseName) {
        std::cout << "Welcome to the grade book for\n"
                  << courseName << "!" << std::endl;
    }
};

// function main begins program execution
int main(int argc, const char *argv[]) {
    std::string nameOfCourse;
    GradeBook myGradeBook;

    // prompt for and input course name
    std::cout << "Please enter the course name: ";
    std::getline(std::cin, nameOfCourse);  // read a course name with blanks
    std::cout << std::endl;

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage(nameOfCourse);
    return 0;
}