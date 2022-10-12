#include<stdio.h>

main()
{
	int a;
	printf("enter mark :");
	scanf("%d",&a);
	if(a>90){
		printf("grade A");
	}
	else if (a>70){
	   	printf("grad B");
	} 
	else if(a>45){
		printf("gread C");
	}
	else{
		printf("grade D");
	}
		
}
