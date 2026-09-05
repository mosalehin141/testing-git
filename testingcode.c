// A small C demo: calculate and print the area of a rectangle.
#include <stdio.h>

double rectangle_area(double width, double height)
{
	return width * height;
}

int main(void)
{
	const double width = 5.0;
	const double height = 3.0;
	const double area = rectangle_area(width, height);

	printf("Rectangle demo\n");
	printf("Width: %.1f\n", width);
	printf("Height: %.1f\n", height);
	printf("Area: %.1f square units\n", area);

	return 0;
}
