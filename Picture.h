#pragma once

#include <vector>
#include <ostream>
#include "Color.h"

class Picture
{private:
	int width;
	int height;
	std::vector<std::vector<Color>> colors;

public:
	Picture(const std::string& filename);
	void setPixel(int x, int y, Color& c) {
		colors[y][x] = c;}
	int getHeight() { return height; }
	int getWidth() { return width; }
	friend std::ostream& operator<<(std::ostream& strm, Picture& obj);
};

