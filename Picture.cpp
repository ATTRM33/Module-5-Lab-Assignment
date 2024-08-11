#include "Picture.h"
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

void Picture::readFile(Picture& picture) {
    std::string f;
    
    std::fstream file;
    file.open("colors.txt", std::ios::in);
    if (!file) {
        std::cout << "File does not exist." << std::endl;
    }
    else {
        while (true) {
            int x;
            int y;
            int r;
            int g;
            int b;
            file >> x >> y >> r >> g >> b;
        }
    }


    file.close();
}