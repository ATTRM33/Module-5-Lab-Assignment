//Zach Brown
//CS2 8/11/2024
//Module 5 Lab Assignment

#include <iostream>
#include "Color.h"
#include "ColorExceptions.h"
#include "Picture.h"

int main() {
    try {
        std::string filename = "colors.txt";
        std::ifstream file(filename);

        if (!file.is_open()) {
            throw ColorExceptions::fileNotFound(filename);
        }

        int width, height;
        if (!(file >> width >> height)) {
            throw ColorExceptions::colorFileFormat("Width and height not found at the beginning of the file.");
        }

        int x = -5, y = 10;
        if (x < 0 || y < 0) {
            throw ColorExceptions::coordinateOutOfRange(x, y);
        }

        int r = 300, g = 50, b = -20;

        if (r < 0 || r > 255) {
            ColorExceptions ex = ColorExceptions::colorOutOfRange(x, y, "Red", r);
            std::cout << ex.getMessage() << std::endl;
            r = std::max(0, std::min(255, r));
        }


    }
    catch (const ColorExceptions& e) {
        std::cout << e.getMessage() << std::endl;
    }

}