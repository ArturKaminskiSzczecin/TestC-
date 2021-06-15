#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char *morse[56] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---...", "   "};  
const char *ascii[56] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS", " "};

char *decode_morse(const char* morse_code) {

    //  <----  hajime!
 int i =0; 
 int x =0;
 int j =0;
 char morse_copy[100];
char word[100][100];
char *ascii_return = malloc (sizeof (char )* 100);
  strcpy(morse_copy, morse_code);
  char *space = strtok(morse_copy, "'\0',' ',' '");
  	while(space != NULL){
		strcpy(word[x], space);
	//	printf("%s\n", word);
		x++;
		space =strtok(NULL, " " );
	}
	for(i=0; i<x; i++){
		printf("word no %d %s\n", i, word[i]);
	}
	for(j=0; j <x ;j++){
  char *segment = strtok(word[j], " ");
	while(segment){
		for(i=0; i < 56; ++i){
			if(!strcmp(segment, morse[i])){
				printf("%s", ascii[i]);
			       strcat(ascii_return,ascii[i]);
			}
		}
		segment = strtok(NULL, " ");
	}
	strcat(ascii_return, "1");
	}
  printf("\n");
printf("ascii return %s\n", ascii_return); 
 return ascii_return;
}
int main(){
	const char* OSO = "--- ... ---   .- .-.";
	printf("%s\n", decode_morse(OSO));
}
