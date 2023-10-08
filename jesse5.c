//question:check the given 3 points are satisfying collinearity or not
#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;

    printf("Enter the coordinates of three points (x1 y1 x2 y2 x3 y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    // Calculate slopes for the line segments (x1, y1) to (x2, y2) and (x1, y1) to (x3, y3)
    float slope1 = (float)(y2 - y1) / (x2 - x1);
    float slope2 = (float)(y3 - y1) / (x3 - x1);

    // Check if the slopes are equal (approximately) to determine collinearity
    if (slope1 == slope2) {
        printf("The three points are collinear.\n");
    } else {
        printf("The three points are not collinear.\n");
    }

    return 0;
}