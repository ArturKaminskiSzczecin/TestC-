#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

char *decode_morse(const char* morse_code) {

    //  <----  hajime!
 int i =0;
 char morse_copy[100];

char *ascii_return = malloc (sizeof (char )* 100);
  strcpy(morse_copy, morse_code);

  char *segment = strtok(morse_copy, " ");
	while(segment){
		for(i=0; i < 55; ++i){
			if(!strcmp(segment, morse[i])){
				printf("%s", ascii[i]);
			       strcat(ascii_return,ascii[i]);
			}
		}
		segment = strtok(NULL, " ");

	}
  printf("\n");
printf("ascii return %s\n", ascii_return); 
 return ascii_return;
}
int main(){
	const char* OSO = "--- ... ---";
	printf("%s\n", decode_morse(OSO));
}