#include <cstdio>

/*Declare variables a,b & c*/
FILE* input; //declares a FILE* variable to work with text files
FILE* output;
int a, b, c;

int main() {
	
	/*Read the input from addin.txt*/
	input = fopen("addin.txt", "r"); //Read in the integers a and b from addin.txt
	fscanf(input, "%d %d", &a, &b); //Read data from inputFile, "%d %d" expect two integers separated by a space, assign these integers in a and b 
	
	/*Calculate the answer*/
	c = a + b;
	
	/*Write the output to the addout.txt*/
	output = fopen("addout.txt", "w");
	fprintf(output, "%d", c);
	
	/*Close the files*/
	fclose(input);
	fclose(output);
	
	return 0;
}

