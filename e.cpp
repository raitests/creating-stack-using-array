#include <Stdio.h>
main ()
{
	char ch;
	int a;
	double d;
	float f;
	printf ("Enter a character:");
	scanf("%c" , &ch);
	printf ("Enter an Integer:");
	scanf ("%d", &a);
	printf ("Enter a float:");
	scanf ("%f", &f);
	printf ("Enter a double presicion float:");
	scanf ("%lf", &d);
	printf ("%c,%d,%f,%lf" , ch, a, f, d);
	return 0;
	
	}
