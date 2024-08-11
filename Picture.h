#pragma once

#include <vector>
#include <ostream>
#include "Color.h"

class Picture
{private:
	int height;
	int width;
	std::vector<Color> colors;

public:
	Picture(int width, int height) : width(width), height(height) {}
	void setPixel(int x, int y, Color c);
	int getHeight() { return height; }
	int getWidth() { return width; }
	void readFile(Picture& picture);
	friend std::ostream& operator<<(std::ostream& strm, Picture& obj);
};

