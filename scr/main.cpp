#include <LaborkaConfig.h>
#ifdef USE_TRIGONOMETRY_DEGREE
#include <trygonometria.h>
#else
#include <cmath>
#endif
int main()
{ 

#ifdef USE_TRIGONOMETRY_DEGREE
double degree = 34;
double result = degreemath::cos_degree(degree);
double result1 = degreemath::sin_degree(degree);
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