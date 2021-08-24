#include <cstdlib>
#include<fstream>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    unsigned int mon, first, second, third, fourth, ans;
    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("fashin.txt", "r");
	fscanf(inputFile, "%d", &mon);

    first = mon/100;
    second = (mon % 100)/20;
    third = (mon % 20)/5;   
    fourth = (mon % 5)/1;
    ans = first + second + third + fourth;
    
    outputFile = fopen("fashout.txt","w");
  	fprintf(outputFile,"%d", ans);
    fclose(outputFile);
	fclose(inputFile);


}
