#pragma once

#include <ostream>
#include <fstream>

class Color
{
private:
	int red;
	int green;
	int blue;

public:
	Color() {}
	Color(int r, int g, int b) : red(r), green(g), blue(b) {}
	static Color red;
	static Color green;
	static Color blue;
	static Color yellow;
	static Color purple;
	static Color orange;
	static Color white;
	static Color black;
	static Color Gray;
	int getRed() { return red; }
	int getGreen() { return green; }
	int getBlue() { return blue; }
	friend std::ostream& operator<<(std::ostream& strm, Color& obj);

};

