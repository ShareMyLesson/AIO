#include <cstdio>
 
#define DICT_SIZE 1000
 
int main() {
    int dict_1[DICT_SIZE], dict_2[DICT_SIZE];
    int nWords, nQueries;
    
    FILE* inputFile = fopen("dictin.txt","r");
    FILE* outputFile = fopen("dictout.txt","w");
    
    fscanf(inputFile,"%d%d",&nWords,&nQueries);
    for (int i = 0; i < nWords; i++) {
        fscanf(inputFile,"%d%d",&dict_1[i],&dict_2[i]);
    }
    
    for (int i = 0; i < nQueries; i++) {
        int found=0;
        int current_word;
        fscanf(inputFile,"%d",&current_word);
        for (int j = 0; j < nWords; j++) {
            if (dict_1[j] == current_word) {
                fprintf(outputFile,"%d\n",dict_2[j]);
                found = 1;
            }
        }
        if (!found) {
            fprintf(outputFile,"C?\n");
        }
    }
 
    fclose(inputFile);
    fclose(outputFile);
}