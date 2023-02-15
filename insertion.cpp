
#include <stdio.h>

int main()
{
	int arr[100];
	int i, x,n, pos, num;
	printf("Enter the number of elements");
	scanf("%d",&n);

	printf("Enter the elements");
	for (i = 0; i < n; i++){
	
	
	scanf("%d", &arr[i]);
	}
	printf("\n");

	for (i = 0; i < n; i++){
	
		printf("%d \n", arr[i]);
}


printf("\nEnter the value to update");
scanf("%d",&x);

printf("Enter the position to update");
scanf("%d",&pos);




	n++;


	for (i = n - 1; i >= pos; i--){
	
		arr[i] = arr[i - 1];
}

	arr[pos - 1] = x;


	for (i = 0; i < n; i++){
	
		printf("%d ", arr[i]);
	printf("\n");
}
	return 0;
}

