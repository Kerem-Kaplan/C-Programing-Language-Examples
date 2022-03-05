#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Turkish");
	printf("türkçe");
	getch();
	return 0;
}
