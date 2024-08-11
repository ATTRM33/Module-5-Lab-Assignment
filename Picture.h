#pragma once

#include <vector>
#include <ostream>
#include "Color.h"

class Picture
{private:
	
	std::vector<std::vector<Color>> colors;

public:
	Picture(int width, int height) : colors(height, std::vector<Color>(width, Color::white)) {}
	void setPixel(int x, int y, Color& c) {
		colors[y][x] = c;}
	int getHeight() { return colors.size(); }
	int getWidth() { return colors[0].size(); }
	void readFile(Picture& picture);
	friend std::ostream& operator<<(std::ostream& strm, Picture& obj);
};

