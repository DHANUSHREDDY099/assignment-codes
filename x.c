//sorting odd and even numbers in an array
#include <stdio.h>
int main()
{
	int arr[8]= {1,2,3,4,5,6,7,8};
	int even_arr[4];
	int odd_arr[4];
	for(int i=0;i<8;i++){
		if(arr[i]%2==1){
			printf("%d\t", arr[i]);
			printf(" \n");
		}
		else{
			printf("%d\t", arr[i]);
		}
	
	}
	return 0;
}

