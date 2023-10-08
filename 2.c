/* take inputs from the user of three different age group i.e. children , young and old in which there are x ,y and
z peoples in respective age group and write a program to find the average age of children , young people and old people
individually and also find the total average of the all people.  */
#include <stdio.h>
void main()
{
    int x, y, z;
    printf(" enter the number of children\n");
    scanf("%d", &x);
    printf(" enter the number of  young age people\n");
    scanf("%d", &y);
    printf(" enter the number of old aged people \n");
    scanf("%d", &z);
    int child[x], young[y], old[z];
    int a = 1, b = 1, c = 1, d = 0, e = 0, f = 0, j = 1, k = 1, l = 1;
    float yavg, cavg, oavg, tavg;

    while (a <= x)
    {

        printf("enter the age of childern's\n");
        scanf("%d", &child[a]);
        a++;
    }
    while (b <= y)
    {

        printf("enter the age of young people\n");
        scanf("%d", &young[b]);
        b++;
    }
    while (c <= z)
    {

        printf("enter the age of old people\n");
        scanf("%d", &old[c]);
        c++;
    }

    while (j <= x)

    {
        d = d + child[j];
        j++;
    }
    while (k <= y)

    {
        e = e + young[k];
        k++;
    }
    while (l <= z)

    {
        f = f + old[l];
        l++;
    }
    cavg = d / x;
    oavg = f / z;
    yavg = e / y;
    tavg = (d + e + f) / (x + y + z);
    printf("the average of children ages is: %.2f\n", cavg);
    printf("the average of young people ages is: %.2f\n", yavg);
    printf("the average of old people ages is: %.2f\n", oavg);
    printf("the average of all people ages is: %.2f\n", tavg);
}
