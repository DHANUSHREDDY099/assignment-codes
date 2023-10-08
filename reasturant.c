/*Q2) A reasturant is taking review through APP take review from the customer on the basis of different
parameters, after that average the ratings and after averaging the ratings seek the feedback of customer
on what to improve if poor or average rating is giving and how to improve further*/
#include <stdio.h>
int main(){
    float a,b,c,d;
    printf("Thank you for choosing our reasturant\n");
    printf("Please provide rating on below these out of 5 star\n");
    printf("For service enter your ratings\n");
    scanf("%f",&a);
    printf("For quality of food enter your ratings\n");
    scanf("%f",&b);
    printf("For quantity of food enter your ratings\n");
    scanf("%f",&c);
    d=(a+b+c)/3;
    printf("Thank you for your feedback\n");
    printf("your avergage rating is %f\n",d);
    if(d<3){
        int e,f,g;
        printf("we are extremely sorry for this experience\n");
        printf("please select which you you deslike the most:\n");
        printf("1)Service provided to you\n 2)Food quality dissastifaction\n");
        scanf("%d",&e);
        switch(e){
            case 1:
            printf("We are really sorry for our service\n");
            printf("please explain further what you don't like regarding our service\n");
            printf("1)staff behaviour\n 2)Waiting time\n 3)Hygine\n");
            scanf("%d",&f);
            printf("you have chose option %d\n",f);
            if(f==1){printf("Deeply Sorry for our staff behaviour\n");
            printf("we will look into the matter urgently\n");
        } 
       else if(f==2){printf("We are sorry for long waiting time\n");
        printf("it doesnt happen until there is rush but we will try to Improve in your next experience\n");
        }
    else if(f==3){printf("We are sorry for the clealiness\n");
    printf("Please inform the staff earlier for clealiness issue on table\n");}
    else printf("invalid input");
        break;
        case 2:
        printf("we are sorry for the Quality issue\n");
        printf("please brief more about it by selecting below options\n");
        printf("1)Hair found Or FOUL SMELL\n 2)spice level\n 3)Quantity\n");
        scanf("%d",&g);
        printf("you have chosen option %d\n",g);
        if(g==1){printf("immediately contact Manager\n");}
        else if(g==2){printf("please specify the spicey level to staff before ordering\n");}
        else if(g==3){printf("Sorry for this try to improve more quantity\n");}
        else printf("invalid input\n");
        break;
        default: printf("wrong input\n");
        }
    }
        else if(d<5){
            int h,i,j;
            printf("Thank you for your rating\n");
            printf("please specify what to improve\n");
            printf("1)Service\n 2)food Quality\n");
            scanf("%d",&h);
            printf("you have chosen %d\n",h);
            if(h==1){
                printf("please specify what to improve in our service\n");
                printf("please choose\n 1)staff behaviour\n 2)waiting time\n 3)Hygine\n");
                scanf("%d",&i);
                switch(i){
                    case 1:
                    printf("We will improve our interaction with customers next time\n");
                    break;
                    case 2:
                    printf("Due to rush you have faced this we will try to improve our service in rush hour\n");
                    break;
                    case 3:
                    printf(" sorry try to please inform the staff earlier if table is not clean\n");
                    break;
                    default: printf("invalid input\n");}
            }
                    else if(h==2){
                        printf("please specify what to improve in our food quality\n");
                        printf("please choose which option to improve\n");
                        printf("1)unidentified subsatnce 2)spice level 3)food quantity");
                        scanf("%d",&j);
                        switch(j){
                            case 1:
                            printf("immediately contact manager near reception\n");
                            break;
                            case 2:
                            printf("please inform staff earlier before preparation\n");
                            break;
                            case 3:
                            printf("We provide generally sufficient quantity if less please inform staff\n");
                            break;
                            default: printf("invalid input\n");
                        }
                    }
                    else printf("invalid input\n");
                        
                    }
         else if(d==5)printf("THank you for twinkling 5 star Hope to serve you next time\n");
        else printf("wrong data given\n");
        printf("Thank you For choosing our reasturant hope you visit us again :)\n");
            return 0;
        }