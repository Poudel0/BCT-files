#include<stdio.h>
  
int main()
{
    int a[20],i,x,n;
    printf("Enter no of elements: ");
    scanf("%d",&n);
     
    printf("Enter array elements: \n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\nEnter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i){
		if(a[i]==x){
		printf("Element found at index %d",i+1);
        return 0;
    } 
	}
	printf("Element not found");
        
    return 0;
}
