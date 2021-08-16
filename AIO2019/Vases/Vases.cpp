#include <cstdio>
int X,a,b,c;
int main() {
    FILE *input = fopen("vasesin.txt", "r");
    FILE *output = fopen("vasesout.txt", "w");
    fscanf(input, "%d", &X);

	if (X >= 6) {
		a = 1;
		b = 2;
		c = X - 3;
	}

    fprintf(output, "%d %d %d\n", a, b, c);

    fclose(input);
    fclose(output);
    return 0;
}