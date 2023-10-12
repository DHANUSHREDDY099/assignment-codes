// Pranjal Upadhyay
// Roll - 523EC0012
// Email - 523ec0012@iiitk.ac.in
// ECE (Dual Degree)
// IIITDM Kurnool


// Question : 1 - Print weather the 3 digit number that was taken
// as input by the user is an armstrong number or not ?

# include <stdio.h>
# include <math.h>



int main() {
    int number,a,b,c,cube;
    printf("enter number (three digit): ");
    scanf("%d",&number);

    a=number/100;
    b=(number/10)-10*a;
    c=number-100*a-10*b;

    cube=(a*a*a)+(b*b*b)+(c*c*c);
    if (cube == number){
        printf("%d is a armstrong number",cube);
    }
    else {
        printf("%d is not a armstrong number",number);
    }

    return 0;

}

// Thank You