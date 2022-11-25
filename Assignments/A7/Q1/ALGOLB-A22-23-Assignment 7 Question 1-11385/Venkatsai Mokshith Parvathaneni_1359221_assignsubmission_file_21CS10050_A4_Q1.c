/*
Name: Parvathaneni Venkatsai Mokshith
Roll No: 21CS10050
Dept: Computer Science and Engeneering
machine: 58
*/
#include<stdio.h>
int ma(int a,int b)
{
    if(a>b) return a;
    return b;
}
int maxd(int f[],int s[],int n)
{
    int a[n],i,c;
    for(i=0;i<n;i++){
        if(i==0){
            if(ma(f[i],s[i])+f[i+1]<s[i+1]) a[i]=0;
            else a[i]=ma(f[i],s[i]);
        }
        else if(i<n-1){
            if(a[i-1]==0) c=s[i];
            else c=f[i];
            if(c+f[i+1]<s[i+1]) a[i]=0;
            else a[i]=c;
        }
        else{
            if(a[i-1]==0) a[i]=s[i];
            else a[i]=f[i];
        }
    }
    c=0;
    for(i=0;i<n;i++){
        c+=a[i];
    }
    return c;
}
int main()
{
    int n,i;
    printf("Enter the number of days:");
    scanf("%d",&n);
    int f[n],s[n];
    printf("Enter the download size restrictions of the first website (in GB):");
    for(i=0;i<n;i++){
        scanf("%d",&f[i]);
    }
    printf("Enter the download size restrictions of the second website (in GB):");
    for(i=0;i<n;i++){
        scanf("%d",&s[i]);
    }
    printf("Maximum possible download size is %d GB\n",maxd(f,s,n));
    return 0;
}
