nclude<stdio.h>
void main()
{
	int a[]={8,18,28,38,48,58},*p;
	int *ptr;

	ptr=a+1;										  //eg:- ptr=a+(100+(0*2)) =a[0]
	++ptr;											 //eg:- ptr=a+(100+(1*2)) =a[1]
	--*ptr;											//eg:- ptr=a+(100+(2*2)) =a[2]
	++ptr;
	++*ptr;
	printf("\n %d %d %d ",ptr[-1],ptr[0],ptr[1]);
	getch();
}
