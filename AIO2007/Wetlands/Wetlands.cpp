#include <cstdlib>
#include<fstream>
#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    unsigned int a, b, c, d, e, f, g, h, l1, l2, l3, l4, l5, l6, l7, l8;
    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("wetin.txt", "r");
	fscanf(inputFile, "%d", &a);
	fscanf(inputFile, "%d", &b);
	fscanf(inputFile, "%d", &c);
 	fscanf(inputFile, "%d", &d);
	fscanf(inputFile, "%d", &e);
	fscanf(inputFile, "%d", &f);
	fscanf(inputFile, "%d", &g);
	fscanf(inputFile, "%d", &h);
if(a < 10){
    l1 = 0;
}
else{
    l1 = a - 10;
}
if(b + l1 < 10){
    l2 = 0;
}
else{
    l2 = l1 + b - 10;
}
if(c + l2< 10){
    l3 = 0;
}
else{
    l3 = l2 + c - 10;
}
if(d + l3 < 10){
    l4 = 0;
}
else{
    l4 = l3 + d - 10;
}
if(e + l4 < 10){
    l5 = 0;
}
else{
    l5 = l4 + e - 10;
}
if(f + l5 < 10){
    l6 = 0;
}
else{
    l6 = l5 + f - 10;
}
if(g + l6 < 10){
    l7 = 0;
}
else{
    l7 = l6 + g - 10;
}
if(h + l7 < 10){
    l8 = 0;
}
else{
    l8 = l7 + h - 10;
}








    outputFile = fopen("wetout.txt","w");
  	fprintf(outputFile,"%d", l8);
    fclose(outputFile);
	fclose(inputFile);


}
