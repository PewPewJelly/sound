#include<stdio.h>
#include<string.h>
char m[10][2][100];


main(){
	int i,n;
    char input[100];
    char name[100];

	//번호
	scanf("%d",&n);
	n-=1;

	printf("%d",n);

	//코드 입력
    scanf("%s",&input);
	strcpy(m[n][0],input);
	//이름
    scanf("%s",&name);
	strcpy(m[n][1],name);
	
	printf("%s %s\n",input,name);

	for(i=0;i<10;i+=1){
	printf("%s ",m[i][0]);

	printf("%s \n",m[i][1]);
	}


	
	
	    
}

