#include <stdio.h>
#include <conio.h>


int giaiThua(int n)
{
	if (n == 1)
		return 1;
	return n + giaiThua(n - 1);
}

int giaiThua1(int n)
{
	if (n == 1)
		return n*(n+1);
	return n * (n + 1) + giaiThua1(n - 1);
}	

int main()
{
	int n;
	printf("Hay nhap so n: ");
	scanf("%d", &n);
	printf("1 + 2 + 3 + ... + n: \n");
	printf("Ket qua: %d\n", giaiThua(n));
	printf("1.2 + 2.3 + 3.4 + ... + n.(n+1): ");
	printf("Ket qua: %d\n ", giaiThua1(n));
	getch();
}