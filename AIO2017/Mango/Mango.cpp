#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
/*Declare variables*/
FILE* inputFile;
FILE* outputFile;
int Ix, Cx, Id, Cd, Mango;

int main() {
    
    /*Read the input*/
    inputFile = fopen("manin.txt", "r");
    fscanf(inputFile, "%d %d %d %d", &Ix, &Cx, &Id, &Cd);
    
    /*Calculate the answer*/
    if (Ix + Id == Cx + Cd){
        Mango = Cx + Cd;
    }
    else if (Ix + Id == Cx - Cd){
        Mango = Cx - Cd;
    }
    else if (Ix - Id == Cx - Cd){
        Mango = Cx - Cd;
    }
    else if (Ix - Id == Cx + Cd){
        Mango = Cx + Cd;
    }
       
    /*Write the output*/
    outputFile = fopen("manout.txt", "w");
    fprintf(outputFile, "%d", Mango);
    
    /*Clean up!*/
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}