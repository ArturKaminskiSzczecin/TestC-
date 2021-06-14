#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const char *morse[55] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.", "-...-", ".-.-.", "-....-", "..--.-", ".-..-.", "...-..-", ".--.-.", "...---..."};  
const char *ascii[55] = {"A",  "B",    "C",    "D",   "E", "F",    "G",   "H",    "I",  "J",    "K",   "L",    "M",  "N",  "O",   "P",    "Q",    "R",   "S",   "T", "U",   "V",    "W",   "X",    "Y",    "Z",    "0",     "1",     "2",     "3",     "4",     "5",     "6",     "7",     "8",     "9",     ".",      ",",      "?",      "'",      "!",      "/",     "(",     ")",      "&",     ":",      ";",      "=",     "+",     "-",      "_",      "\"",     "$",       "@",      "SOS"};

char *decode_morse(const char* morse_code) {

    //  <----  hajime!
  int i =0;
  int x =0;
  char morse_copy[100];
  char ascii_return[100];
  strcpy(morse_copy, morse_code);

  char *segment = strtok(morse_copy, " ");
	while(segment){
		for(i=0; i < 55; ++i){
			if(!strcmp(segment, morse[i]))
			       strcpy(ascii_return[x],ascii[i]);
				x++;
		}
		segment = strtok(NULL, " ");
		x=0;
	}
 // printf("\n");
}
int main(){
	const char* sos = "--- ... ---";
	decode_morse(sos);
}
