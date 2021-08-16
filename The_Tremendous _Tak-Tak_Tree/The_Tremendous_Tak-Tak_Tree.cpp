#include <cstdio>

int F, D;

int main() {
    /*Read the input.*/
    FILE* input = fopen("taktakin.txt","r");
    fscanf(input,"%d",&F);
    fclose(input);
    
    /*Calculate the answer.*/
    D = 0;
    while (F % 11 != 1) {
        F *= 2;
        D++;
    }
    
    /*Write the output.*/
    FILE* output = fopen("taktakout.txt","w");
    fprintf(output,"%d %d\n",D,F);
    fclose(output);
}