#include<stdio.h>


int addone(int x);
int carre(int x);

int main() {
	printf("hello\n");
	printf("carre = %d\n", carre(5));
}

// ajoute 1 à x
int addone(int x) {
	return x+1;
}

int carre(int x) {
	return x*x;
}
