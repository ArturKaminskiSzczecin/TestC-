#include <stdio.h>
#include <stdbool.h>

bool solution(const char *string, const char *ending)
{
  int i =0;
  int n=0;
  int s=0;
  int a=0;
  while(ending[i] != '\0'){
	  i++;
	  n++;
  }
  i=0;
  while(string[i] != '\0'){
  	i++;
	s++;
  }
 	int  dif = s-n;
  	printf("%d\n", n);
  for(i=n-1 ; i >=0; i--){
	printf("%c\n", ending[i]);
	printf("%c\n", string[i+dif]);
  	if(string[i+dif] == ending[i]){
    		a++;
	}
	else{
		a--;;
	}
 }
 if ((a==n)&&(s>=n)){
  	return true;
 }
 else{
  	return false;
 }
} 

int main(){
	bool result = solution("ails", "fails");
	printf("%d\n", result);
}
