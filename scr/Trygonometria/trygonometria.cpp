#include "trygonometria.h"
#include <cmath>
double degreemath::sin_degree(double degree) {
//zamiana stopni na radiany: pi radianów = 180 stopni
//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radians = degree / 180;
	return std::sin(radians);
}
double degreemath::cos_degree(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radians = degree / 180;
	return std::sin(radians);
}
double degreemath::tg_degree(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radians = degree / 180;
	return std::tan(radians);
}
double degreemath::ctg_degree(double degree) {
	//zamiana stopni na radiany: pi radianów = 180 stopni
	//return std::sin(radian); //funkcja biblioteczna z piku <cmath>
	double radians = degree / 180;
	return 1/std::tan(radians);
}

