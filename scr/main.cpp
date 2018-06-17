#include <LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <cmath>
#endif
#include <iostream>
int main(int degree)
{
#ifdef USE_TRIGONOMETRY_DEGREE
double results = degreemath ::cos_degree(degree);
double result1 = degreemath::sin_degree(degree);
std::cout << result1;
double result2 = degreemath::tg_degree(degree);
double result3 = degreemath::ctg_degree(degree);
#else
double rad = 4.0;
double pi = 3.14;
double result = cos(pi/rad);
double result1 = sin(pi/rad);
double result2 = tan(pi/rad);
double result3 = 1/tan(pi/rad);
#endif
 return 0;
}