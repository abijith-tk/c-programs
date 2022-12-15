#include<stdio.h>

int rev(int n)
{
	int reverse=0;
 while(n>0)
 {
 	reverse=reverse*10+(n%10);
 	n=n/10;
 }
 return reverse;
}

int main()
{
	int n,r,ns,rs;
	printf("number=");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
	r=rev(i);
	ns=i*i;
	rs=r*r;
	if(rs==rev(ns))
	{
		printf("%d\n",i);
		//printf("Adam number");
	}
	/*
	else{
		printf("not adam number");
	}
	*/	
}
	return 0;
}