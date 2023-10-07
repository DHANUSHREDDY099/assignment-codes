//check whether an array is sorted or not.
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", n);
    int arr[n];
for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i+1]>arr[i]){
        printf("the array is sorted");
    }
    else{
        printf("the array is unsorted");
    }
}
    return 0;
}
