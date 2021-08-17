#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <cstdio>

/*Declare variables*/
FILE* inputFile;
FILE* outputFile;
int R, B, S, Rp, Bp, ans;

int main() {
    ans = 0;
    /*Read the input*/
    inputFile = fopen("baublesin.txt", "r");
    fscanf(inputFile, "%d %d %d %d %d", &R, &B, &S, &Rp, &Bp);
    
    /*Calculate the answer*/
    if (R >= Rp and B >= Bp){
        if (Rp == 0){
        ans = S +B - Bp+ 1;
        }
        else if (Bp == 0){
            ans = S+ R- Rp+ 1;
        }
        else{
            ans=S + fmin(R-Rp+1,B-Bp+1);
        }
    }
    else if (R<Rp and B<Bp){
        ans=S-Rp+R-Bp+B+1;
    }
    else if (R>=Rp and B<Bp){
        if (Rp==0){
            ans=S-Bp+B+1;
        }
        else{
            ans=S-Bp+B+1;
            }
        }
    else if (R<Rp and B>=Bp){
        if (Bp==0){
            ans=S-Rp+R+1;
        }
        else{
            ans=S-Rp+R+1;
        }
        }
    if (ans<0){
        ans=0;
    }
   
    /*Write the output*/
    outputFile = fopen("baublesout.txt", "w");
    fprintf(outputFile, "%d", ans);
    
    /*Clean up!*/
    fclose(inputFile);
    fclose(outputFile);
    
    return 0;
}   