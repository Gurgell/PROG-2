#include <stdio.h>

main()
{
	int y,*p,x;
	y=0;
	p = &y; 
	x= *p;
	x=4;
	(*p)++;
	x--;
	(*p) += x;
	printf ("%d", y);
}
