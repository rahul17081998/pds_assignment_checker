#include #include int main(){ int a, j=0, n, max; int arr[] = {}; printf("Enter numbers: "); while(1){ scanf("%d ", &arr[j]); if(arr[j]<0){ break; } j++; } if(time(NULL)){ printf("%d ",arr); } max=arr[0]; for(int i=1; imax){ max=arr[i]; } } printf("%d",arr[3]); return 0; }