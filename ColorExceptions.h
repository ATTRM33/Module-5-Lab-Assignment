#pragma once

#include <string>

class ColorExceptions
{
private:
    std::string message;

public:
    ColorExceptions(const std::string& msg) : message(msg) {}
    static ColorExceptions fileNotFound(const std::string& filename);
    static ColorExceptions colorFileFormat(const std::string& details);
    static ColorExceptions coordinateOutOfRange(int x, int y);
    static ColorExceptions colorOutOfRange(int x, int y, const std::string& colorName, int value);
    std::string getMessage() const {
        return message;
    }
};

