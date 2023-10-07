// write a programme to find whether you are eligible of scholarship or not
#include<stdio.h>
int main(){
    int totalmarks;
//imagine you have 5 subjects and grand total is 500
printf("enter totalmarks");
scanf("%d",&totalmarks);
if(totalmarks>=450){
    printf("you are eligible for full scholarship");
}
else if(totalmarks>=400){
    printf("you are eligible for 50 percent scholarship");
}
else if(totalmarks>=350){
    printf("you are eligible for 10 percent scholarship");
}
else{
printf("you are not eligible for scolarship");
}


}
