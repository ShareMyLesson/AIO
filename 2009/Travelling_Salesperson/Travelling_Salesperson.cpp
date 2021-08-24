#include <cstdlib>
#include<fstream>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int r1, r2, r3, min1, ans;
    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("salesin.txt", "r");
	fscanf(inputFile, "%d", &r1);
	fscanf(inputFile, "%d", &r2);
	fscanf(inputFile, "%d", &r3);
    

min1 = min({r1, r2, r3});
ans = (r1 + r2 + r3) - min1;
    outputFile = fopen("salesout.txt","w");
  	fprintf(outputFile,"%d", ans);
    fclose(outputFile);
	  fclose(inputFile);


}
