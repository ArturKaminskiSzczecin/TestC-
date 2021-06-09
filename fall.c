#include<stdio.h>
#include<string.h>

//scp(char* st1, char* st2){

//}
char* sc(int n)
{
    // Your code goes here
  int i =0;
  char s1[]= "Aa~";
  char s2[]= "Pa!";
  char s3[]= "Aa!";
  char sp[] = " ";
  char sc[100];
if (n >1 && n<6){
  	for (i =0; i  < n; i++){
    		strcat(sc, sp);
    		strcat(sc, s1);
  	}

    	strcat(sc, sp);
    	strcat (sc, s2);
    	strcat(sc, sp);
    	strcat(sc, s3);
}
else if(n > 6){
    strcat(sc, sp);
    strcat(sc, s2);
}
strcat(sc,"\n");
char *rsc = sc;
    return rsc;
}
int main(void){
	char *n = sc(5);
	while(*n != '\n'){
		printf("%c", *n++);
	}
	printf("\n");
	
}
