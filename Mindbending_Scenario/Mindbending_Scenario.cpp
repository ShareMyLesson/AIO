#include <cstdio>

int min(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int x1, y1, x3, y3;
    int x2, y2, x4, y4;
    int p, s, q, r;
    
    int a1, a2, a3, a4;

    FILE* input = fopen("bendin.txt","r");
    FILE* output = fopen("bendout.txt","w");
    
    fscanf(input,"%d %d %d %d",&x1,&y1,&x3,&y3);
    fscanf(input,"%d %d %d %d",&x2,&y2,&x4,&y4);
       
    p = max(x1,x2);
    s = max(y1,y2);
    q = min(x3,x4);
    r = min(y3,y4);
       
    a1 = (x3-x1) * (y3-y1);
    a2 = (x4-x2) * (y4-y2);
    if (p < q && s < r) {

        a3 = (q-p) * (r-s);
    } else {
        a3 = 0;
    }
    a4 = a1 + a2 - a3;

    fprintf(output,"%d\n",a4);
    fclose(input);
    fclose(output);
	return 0;
}
