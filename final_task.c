
#include <stdio.h>
//add additional header files here
#include<math.h>
struct star {
    char name[50];
    int temperature;
    double luminosity;
    double radius;
    char classification;
};

void printStars(struct star mystars[], int N); 
//add your propotypes here
int readStars(struct star mystars[]);
void computeRadii(struct star mystars[], int );
void classifyStars(struct star mystars[], int);
// Do not modify the main() function!
int main(void) {
    struct star mystars[50];
    int N;

    N = readStars(mystars);
   	computeRadii(mystars, N);
   	 classifyStars(mystars, N);
	 printStars(mystars, N);

    return 0;
}

// Do not modify the printStars() function!
void printStars(struct star mystars[], int N) {
    int i;
    for (i=0; i<N; i++) {
        printf("%s is a ", mystars[i].name);
        if (mystars[i].classification == 'M') {
        	printf("Main Sequence Star\n");
        } else if (mystars[i].classification == 'G') {
            printf("Giant\n");
        } else if (mystars[i].classification == 'S') {
        	printf("Supergiant\n");
        } else if (mystars[i].classification == 'W') {
        	printf("White Dwarf\n");
        } else if (mystars[i].classification == 'N') {
        	printf("Unclassified Star\n");
        } else {
        	printf(" !!! Warning: '%c' not a valid classification code!!!\n", mystars[i].classification);
        }
        printf("Temp = %d Kelvin, Lum = %.4lf Sol, Rad = %.2lf * R_Sun\n\n", mystars[i].temperature, mystars[i].luminosity, mystars[i].radius);
    }
}

//add the functions readStars(), computeRadii() and classifyStars() here.
int readStars(struct star mystars[]){
        FILE *ifile;
	int i =0;
	ifile = fopen("stardata.txt", "r");

	while	(fscanf(ifile, "%s %d %lf",
				mystars[i].name,
				&mystars[i].temperature,
				&mystars[i].luminosity) != EOF)
		++i;
	fclose(ifile);
//	printf("%d\n", i);
	return i;
}
void computeRadii(struct star mystars[], int x){
	int a;
	double ts = 3500.00000;
	long double t,l,r;
	long double power, pier;
	for(a=0; a < x; ++a){
		t = mystars[a].temperature;
		printf("%d star temperature in computeRadii %Lf\n", a, t );  
		l= mystars[a].luminosity;
		power= pow((ts/t), 2.00000);
		pier = sqrt(l);
		r = power*pier;
		mystars[a].radius = r;
		printf("star %d : radius %Lf\n", a, r);
	}
}
void classifyStars(struct star mystars[], int a){
	printf("Classify function\n");
	double sun_r = 1;
	long double l,r;
	char cl = ' ';
	int i;
	for(i=0; i<a; i++){
		r = mystars[i].radius;
		printf("Radious %d star : %f before clasify \n",  i, mystars[i].radius);
		l = mystars[i].luminosity;
		if((l> pow(10, -2)) && (l < pow(10,6))&&(r > 0.1* sun_r)&&(r<10 *sun_r)){
			cl = 'M';
		}
		else if((l> pow(10, 3)) && (l < pow(10,5))&&(r > 10* sun_r)&&(r<100 *sun_r)){
			cl = 'G';
		}
		else if((l> pow(10, 5)) && (l < pow(10,6))&&(r > 100* sun_r)){
			cl = 'S';
		}
		else if(r > 0.01* sun_r){
			cl = 'W';
		}
		else{
			cl = 'N';
		}
			mystars[i].classification = cl;
			printf("%d - star : %c\n" ,i,  mystars[i].classification );
	}
		
}
