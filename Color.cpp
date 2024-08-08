#include "Color.h"



Color Color::red = Color(255, 0, 0);
Color Color::green = Color(255, 0, 0);
Color Color::blue = Color(255, 0, 0);
Color Color::yellow = Color(255, 0, 0);
Color Color::purple = Color(255, 0, 0);
Color Color::orange = Color(255, 0, 0);
Color Color::white = Color(255, 0, 0);
Color Color::black = Color(255, 0, 0);
Color Color::Gray = Color(255, 0, 0);

std::ostream& operator<<(std::ostream& strm, Color& obj) {
	if (obj.getRed() > obj.getGreen() && obj.getRed() > obj.getBlue()) {
		return strm << 'R';
	}
	else if (obj.getBlue() > obj.getGreen() && obj.getBlue() > obj.getRed()) {
		return strm << 'B';
	}
	else if (obj.getBlue() < obj.getGreen() && obj.getGreen() > obj.getRed()) {
		return strm << 'V';
	}
	else if (obj.getBlue() > obj.getGreen() && obj.getRed() > obj.getGreen()) {
		return strm << 'P';
	}
	else if (obj.getBlue() < obj.getGreen() && obj.getBlue() < obj.getRed()) {
		return strm << 'Y';
	}
	else if (obj.getBlue() > obj.getRed() && obj.getGreen() > obj.getRed()) {
		return strm << 'T';
	}
	else if (obj.getBlue() == obj.getGreen() && obj.getBlue() == obj.getRed() && obj.getBlue(),obj.getGreen(), obj.getRed()  > 250){
		return strm << 'W';
	}
	else if (obj.getBlue() == obj.getGreen() && obj.getBlue() == obj.getRed() && obj.getBlue(), obj.getGreen(), obj.getRed() <  50) {
		return strm << 'D';
	}
	else if (obj.getBlue() == obj.getGreen() && obj.getBlue() == obj.getRed() && obj.getBlue(), obj.getGreen(), obj.getRed() > 50 && obj.getBlue(), obj.getGreen(), obj.getRed() < 250) {
		return strm << 'G';
	}
}