#include "ColorExceptions.h"


ColorExceptions ColorExceptions::fileNotFound(const std::string& filename) {
	return ColorExceptions("Error: File '" + filename + "' not found.");
}
ColorExceptions ColorExceptions::colorFileFormat(const std::string& details) {
	return ColorExceptions("Error: File format is incorrect - " + details);

}
ColorExceptions ColorExceptions::coordinateOutOfRange(int x, int y) {
	return ColorExceptions("Error: Coordinate out of range. X: " + std::to_string(x) + ", Y: " + std::to_string(y));
}
ColorExceptions ColorExceptions::colorOutOfRange(int x, int y, const std::string& colorName, int value) {
	return ColorExceptions("Error! X: " + std::to_string(x) + " Y: " + std::to_string(y) + " " + colorName + " value too " + (value < 0 ? "low" : "high") + ": " + std::to_string(value));
}