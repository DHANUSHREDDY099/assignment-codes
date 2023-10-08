/*Q1)Program a health care program using if and switch statement and give atleast 6 health
 problems and solutions to the user*/
#include<stdio.h>
int main(){
    int a,b;
    printf("welcome to the Care Health App\n");
    printf("please press 1 for continue and 2 to leave\n");
    scanf("%d",&a);
    if(a==1){
        printf("Thanks for choosing\n");
        printf("please press 1-cough\n 2-fever\n 3-stomache\n 4-headache\n 5-minor injury\n 6-critical\n");
        scanf("%d",&b);
        switch(b){
            case 1:
            printf("take medicine from med shop\n");
            break;
            case 2:
            printf("take fever medicine from the med shop and take 1 day rest\n");
            break;
            case 3:
            printf("eat khicdi and banana dont eat spicy food\n");
            break;
            case 4:
            printf("take saridon and apply vicks\n");
            break;
            case 5:
            printf("nurse help required for bandage\n");
            break;
            case 6:
            printf("concer doctor ASAP or call 108\n");
            break;
            default:
            printf("invalid input\n");
            


        }

    }
    else if(a==2) printf("Hope to serve you nest time\n");
    else printf("invalid response\n");
    printf("thank you for choosing us hope to serve you next time :)\n");
    return 0;
}