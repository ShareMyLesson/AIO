#include <algorithm>
#include <cstdio>
 
using namespace std;
 
int main() {
    FILE* inputFile;
    FILE* outputFile;
    int D, C0, P1, C1, P2, C2, d1, d2, d3, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, leftover;
    inputFile = fopen("cookiesin.txt", "r");
    fscanf(inputFile, "%d %d", &D, &C0);
    fscanf(inputFile, "%d %d", &P1, &C1);
    fscanf(inputFile, "%d %d", &P2, &C2);
    outputFile = fopen("cookiesout.txt", "w");
    
 
    d1 = (P1 + C0 - 1) / C0;
    d2 = (P2 + C0 - 1) / C0;
 
    a1 = D * C0;
 
    if (d1 < D) {
        leftover = d1 * C0 - P1;
        a2 = leftover + (D - d1) * (C1 + C0);
        d3 = (P2 - leftover + C0 + C1 - 1) / (C0 + C1);
        if (d1 + d3 < D) {
            leftover = leftover + d3*(C0+C1) - P2;
            a4 = leftover + (D - d1 - d3) * (C0 + C1 + C2);
        }
    }
    if (d2 < D) {
        leftover = d2 * C0 - P2;
        a3 = leftover + (D - d2) * (C2 + C0);
        d3 = (P1 - leftover + C0 + C2 - 1) / (C0 + C2);
        if (d2 + d3 < D) {
            leftover = leftover + d3 * (C0 + C2) - P1;
            a5 = leftover + (D - d2 - d3) * (C0 + C1 + C2);
        }
    }
    int total;
    total =  max({ a1, a2, a3, a4, a5 });
    fprintf(outputFile, "%d", total);
    
    fclose(inputFile);
    fclose(outputFile);
    return 0;
}