#include <stdio.h>
int main()
{
int i, begin, end, mid, n, key, array[100];
printf("Enter number of elements ");
scanf("%d",&n);
printf("Enter %d integers", n);
for(i = 0; i < n; i++){
	scanf("%d",&array[i]);
}
printf("Enter value to find ");
scanf("%d", &key);
begin = 0;
end = n - 1;
mid = (begin+end)/2;
while (begin <= end) {
if(array[mid] < key)
begin = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d ", key, mid+1);
break;
}
else{
 end = mid - 1;
mid = (begin + end)/2;

}
if(begin > end)
printf("%d isn't present in the list ", key);
return 0;
}}
