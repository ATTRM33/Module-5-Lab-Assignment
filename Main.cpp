//Zach Brown
//CS2 8/11/2024
//Module 5 Lab Assignment

#include <iostream>
#include "Color.h"
#include "ColorExceptions.h"
#include "Picture.h"

int main() {

    //problem 1.
    try {
        Picture pic("colors.txt");
        std::cout << pic;

    }
    catch (const ColorExceptions& e) {
        std::cout << e.getMessage() << std::endl;
        
    }

}