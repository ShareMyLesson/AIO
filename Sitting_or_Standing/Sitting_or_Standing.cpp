#include <cstdio>

int main() {

/*Declare variables.*/
FILE* input;
FILE* output;
int X, Y, P, Q, R;

/*Read the input*/
input = fopen("sitin.txt","r");

/*Assign values to X,Y & P*/
fscanf(input, "%d %d", &X, &Y);
fscanf(input, "%d", &P);

/*Calculate the answer*/
Q = X*Y; //Required seats
R = P - Q; //Reaminig seats
Q = P; //Everyone has seat
R = 0; //Everyone has seat

if (P > X*Y) {
	Q = X*Y;
	R = P - Q;
} else {
	P = P;
	R = 0;
}
/*Write the output*/
output = fopen("sitout.txt","w");
fprintf(output, "%d %d", Q, R);
fclose(input);
return 0;
}