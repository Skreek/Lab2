#include <stdio.h>
#include <math.h>
_Bool isInArea(double x, double y)
{
	if (-x <= y && x <= y && y = 1)
		return(1);
	else if (-x >= y && x >= y && y = -1) 
		return(1);
	else 
		return(0); 
}