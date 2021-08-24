#include <cstdlib>
#include<fstream>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    unsigned int fp, sp, ans, l, x, y;
    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("piratein.txt", "r");
	fscanf(inputFile, "%d", &l);
    fscanf(inputFile, "%d", &x);
    fscanf(inputFile, "%d", &y);
 
    fp = (l - x) + (l - y);
    sp = x + y;
 
    if(fp < sp){
        ans = fp;
    }
    else if(fp > sp){
        ans = sp;
    }
    else if(fp == sp){
        ans = fp;
    }
    else if(x == y == l){
        ans = 0;
    }
    else if (x == y && x != l){
        ans = sp + fp;
    }    
    outputFile = fopen("pirateout.txt","w");
  	fprintf(outputFile,"%d", ans);
    fclose(outputFile);
	fclose(inputFile);
 
 
}