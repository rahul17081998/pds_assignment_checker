#include #include int main(){ int num, N, rem, digit=0, sum=0, i, count=0; printf("Enter a number: "); scanf("%d",&N); if(N<=0){ printf("Invalid Input"); } else{ for(i=1; i<=N; i++){ while(i!=0){ rem=i%10; digit++; i=i/10; } while(i){ rem=i%10; i=i/10; sum= sum + pow(rem,digit) } if (sum==i){ printf("%d ",i); } } }