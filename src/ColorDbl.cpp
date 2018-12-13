#include "ColorDbl.h"
#include <iostream>
#include <algorithm>

ColorDbl::ColorDbl(){
  r = 0.0;
  g = 0.0;
  b = 0.0;
}
ColorDbl::ColorDbl(double R, double G, double B){

  r= std::min(R, 1.0);
  g= std::min(G, 1.0);
  b= std::min(B, 1.0);
}
ColorDbl::ColorDbl(std::string col) {
	if (col == "red") {
		r = 1;
		g = 0;
		b = 0;
	}
	else if (col == "green") {
		r = 0;
		g = 1;
		b = 0;
	}
	else if (col == "blue") {
		r = 0;
		g = 0;
		b = 1;
	}
	else if (col == "yellow") {
		r = 1;
		g = 1;
		b = 0;
	}
	else if (col == "cyan") {
		r = 0;
		g = 1;
		b = 1;
	}
	else if (col == "magenta") {
		r = 1;
		g = 0;
		b = 1;
	}
	else if (col == "white") {
		r = 1;
		g = 1;
		b = 1;
	}
}
double ColorDbl::getHighestIntesity(){
    return std::max(std::max(r,g),b);
}
double ColorDbl::getAverageIntesity(){
    return (r + g +b /3);
}
double ColorDbl::getR(){
  return r;
}
double ColorDbl::getG(){
  return g;
}
double ColorDbl::getB(){
  return b;
}
std::ostream& operator<< (std::ostream &out, const ColorDbl &c)
{
    // Since operator<< is a friend of the Point class, we can access Point's members directly.
    out << "ColorDbl(" << c.r << ", " << c.g << ", " << c.b << ")";

    return out;
}
