#include <cstdio>
int main() {

/*Declare variables*/
FILE* input;
FILE* output;
int a, b, c, d;    

/*Read the input*/
input = fopen("mixin.txt", "r"); 

/*Assign values to a & b*/
fscanf(input, "%d %d", &a, &b);

/*Calculate*/
c = a / b; //quotient c//
d = a - c * b; //remainder d//

/*Open the mixout.txt*/
output = fopen("mixout.txt", "w");

if (d != 0){ //if remainder is not equal to 0//
        fprintf(output, "%d %d/%d",c,d,b); /*Write the output*/
    
}else{
        fprintf(output, "%d",c); /*Write the output*/
}
fclose(input);
fclose(output);
return 0;
}

