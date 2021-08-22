#include <cstdio>
int main() {
    /*Declare variables*/
    FILE* inputFile;
    FILE* outputFile;
    int n, q, i, x;
    int pages[10001];
    
    /*Prepare the files*/
    inputFile = fopen("encyin.txt", "r");
    outputFile = fopen("encyout.txt", "w");
    
    /*Read the first line*/
    fscanf(inputFile, "%d %d", &n, &q);
    
    /*Read in the list of pages*/
    for (i = 0; i < n; i++) {
        fscanf(inputFile, "%d", &pages[i]);
    }
    
    /*Read in and answer the questions*/
    for (i = 0; i < q; i++) {
        fscanf(inputFile, "%d", &x);
        fprintf(outputFile, "%d\n", pages[x-1]);
    }
    
    /*Clean up!*/
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}