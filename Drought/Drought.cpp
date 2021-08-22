#include <cstdio>

int main() {
    int nDays, capacity, totRain;
    
    FILE* inputFile = fopen("rainin.txt","r");
    FILE* outputFile = fopen("rainout.txt","w");
    
    fscanf(inputFile,"%d%d",&nDays,&capacity);
    totRain = 0;
    for (int day = 1; day <= nDays; day++) {
        int curRain;
        fscanf(inputFile,"%d",&curRain);
        totRain += curRain;
        if (totRain >= capacity) {
            fprintf(outputFile,"%d\n",day); //we have our answer
            break;    //no need to keep measuring
        }
    }

    fclose(inputFile);
    fclose(outputFile);
}