/***************************************************************************

								distance.c

Calculates the Euclidean distance between two points.

***************************************************************************/

#include "basic.h"

double distance( double x[3], double y[3])
{
  int i;
  double d;

  d = 0.0;
  for (i=0;i<=2;i++)
	d += (x[i]-y[i])*(x[i]-y[i]);
  return sqrt(d);
}
