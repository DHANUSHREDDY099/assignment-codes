//reversing an array
#include<stdio.h>
int main()
{
    //declaring the size of array
    int n;
    scanf("%d", &n);
//inputting the array;
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d", &arr[i]);
}

//outputting reversed array
for(int j = n-1;j>=0;j--){
    printf("%d\t", arr[j]);
}
return 0;
}
