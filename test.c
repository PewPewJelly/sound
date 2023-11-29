#include<stdio.h>
#include<string.h>
//음악 리스트 생성 [리스트수][0번:코드 1번:이름][문자열칸]
int length = 10;
char m[length][2][100];


main(){
	int i,n;
    char input[100];
    char name[100];

	//번호(몇번째 칸에 저장할지)
	scanf("%d",&n);
	n-=1;

	printf("%d",n);

	//코드 입력( ex)ABCCBA )
    scanf("%s",&input);
	strcpy(m[n][0],input);
	//음악 이름
    scanf("%s",&name);
	strcpy(m[n][1],name);
	
	printf("%s %s\n",input,name);

	//모든 칸의 코드와 이름 출력
	for(i=0;i<length;i+=1){
	printf("%s ",m[i][0]);

	printf("%s \n",m[i][1]);
	}


	
	
	    
}

