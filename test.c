#include<stdio.h>
#include<windows.h>
#include<string.h>

struct music {
    char name[10];
    double Hz;
};

typedef struct m {
    int array[10];
    int length = 0;
}; 

main(){
   struct music notes[] = {
        {"C", 1046.502},
        {"D", 1108.731},
        {"E", 1318.510},
        {"F", 1396.913},
        {"G", 1567.982},
        {"A", 1760.000},
        {"B", 1975.533}
    };

    char input[10];
    char name[20];
    scanf("%s",input);
    scanf("%s",nameinput);

    Add_First(m *L,input,nameinput);
    printf("%s",m[1]);
}

void Add_First(m *L,char input,char name){
    char aa[1][1] = {{input,name}}
    if(L->length<10){
        L->array[L->length] = aa[1];
        L->length+1;
    }
}
