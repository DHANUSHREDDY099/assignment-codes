//123EC0001
// 3. Given the coordinates (x, y) of a center of a circle and it’s radius,
//    write a program which will determine whether a point lies inside
//    the circle, on the circle or outside the circle.   
#include <stdio.h>
#include <math.h>

int main() {
  float x_center, y_center, radius, x_point, y_point, distance;

  printf("Enter the coordinates of the center of the circle: ");
  scanf("%f %f", &x_center, &y_center);

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  printf("Enter the coordinates of the point: ");
  scanf("%f %f", &x_point, &y_point);

  // Calculate the distance between the point and the center of the circle.
  distance = sqrt((x_point - x_center) * (x_point - x_center) + (y_point - y_center) * (y_point - y_center));

  // Determine whether the point is inside, on, or outside the circle.
  if (distance < radius) {
    printf("The point is inside the circle.\n");
  } else if (distance == radius) {
    printf("The point is on the circle.\n");
  } else {
    printf("The point is outside the circle.\n");
  }

  return 0;
}