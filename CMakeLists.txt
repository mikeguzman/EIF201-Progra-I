cmake_minimum_required(VERSION 3.14)
project(EIF201_Progra_I)

set(CMAKE_CXX_STANDARD 14)

set(Sources examples/03_class/04/GradeBook.cpp examples/03_class/04/MainAppInterface.cpp)
set(Headers examples/03_class/04/GradeBook.h)

add_executable(example_01 examples/01_intro/01/example_01.cpp)
add_executable(example_02 examples/01_intro/02/example_02.cpp)
add_executable(example_03 examples/01_intro/03/example_03.cpp)
add_executable(example_04 examples/01_intro/04/example_04.cpp)
add_executable(myfirstclass examples/02_intro_objects/01/myfirstclass.cpp)
add_executable(mifirstclassarg examples/02_intro_objects/02/mifirstclassarg.cpp)
add_executable(example_getset examples/03_class/01/example_getset.cpp)
add_executable(exa_constructor examples/03_class/02/exa_constructor.cpp)
add_executable(MainAppInterface ${Sources} ${Headers})
