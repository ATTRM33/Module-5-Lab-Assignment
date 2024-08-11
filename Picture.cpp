#include "Picture.h"
#include "ColorExceptions.h"
#include "Color.h"
#include <fstream>
#include <iostream>


std::ostream& operator<<(std::ostream& strm, Picture& obj) {
    for (auto& row : obj.colors) {
        for (auto& color : row) {
            strm << color << " ";
        }
        strm << std::endl;
    }
    return strm;
}

Picture::Picture(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) {
        throw ColorExceptions::fileNotFound(filename);
    }

    if (!(file >> width >> height)) {
        throw ColorExceptions::colorFileFormat("Width and height not found at the beginning of the file.");
    }

    colors.resize(height, std::vector<Color>(width, Color()));

    int x, y, r, g, b;
    while (file >> x >> y >> r >> g >> b) {
        if (x < 0 || y < 0) {
            std::cout << ColorExceptions::coordinateOutOfRange(x, y).getMessage() << std::endl;
            continue;  
        }

        if (r < 0 || r > 255) {
            std::cout << ColorExceptions::colorOutOfRange(x, y, "Red", r).getMessage() << std::endl;
            r = std::max(0, std::min(255, r));
        }
        if (g < 0 || g > 255) {
            std::cout << ColorExceptions::colorOutOfRange(x, y, "Green", g).getMessage() << std::endl;
            g = std::max(0, std::min(255, g));
        }
        if (b < 0 || b > 255) {
            std::cout << ColorExceptions::colorOutOfRange(x, y, "Blue", b).getMessage() << std::endl;
            b = std::max(0, std::min(255, b));
        }

        if (x < width && y < height) {
            colors[y][x] = Color(r, g, b);
        }
    }
}

