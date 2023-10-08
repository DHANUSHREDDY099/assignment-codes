/*Q5)write a C program asking voters who will they choose to vote in the upcoming Loksabha election between 
Modi and Rahul and also print how much vote they get to win using simple nested if and for loop*/
#include <stdio.h>
int main(){
    int a,m=0,r=0;
    printf("enter the number of voters who will vote\n");
    scanf("%d",&a);
    if(a<=0){
        printf("invalid input\n");}
        for(int i=1;i<=a;i++){
            int v;
            printf("voter %d,who will you choose to vote\n 1)Modi\n or 2)rahul\n",i);
            scanf("%d",&v);
            if(v==1){
                m++;}
                else if(v==2){
                    r++;}
                    else{
                        printf("invalid choice\n");
                    }
                }
                if(m>r){
                    printf("Modi wins with %d votes\n",m);
                }
                else if(r>m){
                    printf("rahul wins with %d votes\n",r);
                }
                else printf("tie\n");
                printf("thank you for taking the survey");
                return 0;
            }
        
    

