//Akshat Ayush Modi(21CS30003)
#include<stdio.h>
#include<string.h>
int z[27];
int main()
{
	char a[55];
	char b[27];
	char v[101];
	printf("please Enter the key:");
	fgets(a,55,stdin);
	int l=0;
	int t=0;
	int y;
	//hashing
	while(a[l]!='\0')//O(n) where n is length of the key
	{
		if(a[l]>='a'&& a[l]<='z')
		{	y=a[l]-'a';//hashfunction
			if(z[y]==0)//to avoid collisions or to create unordered hash table
			{z[y]++;//incrementing the array counter for each of the values of 'y' so that a term with same hash value does gets in hashtable multiple times 
			b[y]='a'+t;//storing alphabet to which y shall connect
			t++;}
		}
	l++;
	}
	printf("please Enter the message:");
	fgets(v,101,stdin);
	l=0;
	//decoding of message using hashtable made
	while(v[l]!='\0')//O(m) where m is length of message 
	{	
		if(v[l]>='a' && v[l]<='z')
			{
			y=v[l]-'a';
			v[l]=b[y];
			}

		l++;
	}
	printf("Decoded message: %s",v);
	return 0;//O(m+n) overall
}




