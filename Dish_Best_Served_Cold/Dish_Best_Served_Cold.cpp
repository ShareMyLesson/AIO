#include <cstdio>

int main() {
    int N, min, max, sum;

    FILE* inputFile = fopen("dishin.txt","r");
    FILE* outputFile = fopen("dishout.txt","w");

    fscanf(inputFile,"%d",&N);
    
    /*Prepare for the loop. In this implementation
     * we set min to a ridiculously large value,
     * and max to a ridiculously small one.*/
    min =  999999999;
    max = -999999999;
    sum = 0;

    for (int i = 0; i < N; i++) {
        int tmp;
        fscanf(inputFile,"%d",&tmp);
        if (min > tmp) {
            min = tmp;
        }
        if (max < tmp) {
            max = tmp;
        }
        sum += tmp;
    }

    fprintf(outputFile,"%d %d %d\n",min,max,sum/N);

    fclose(inputFile);
    fclose(outputFile);
}