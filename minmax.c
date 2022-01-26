/* file minmax.c  ****************************************
*        a C program skeleton for the problem
*        Find the minimum and maximum values in an array
*   By Lin Jensen
*  1 February 2003
*   For: csc116 class
**********************************************************/
#include <stdio.h>

/* DATA segment: Global variables */
#define SIZE 10
        int arr[SIZE] = { -5, 0xffffface, 0x31, 52, 054, /* base 8 */
                        0, -201, 12, 0xffffff00, -1 } ;

int main ()
{  /* declare variables here */
        int mymin, mymax;               /* use these */

/* Place your solution between the cut lines */
/*------------------ start cut --------------------------*/
/* Student ------             */
	/* declare ADDITIONAL variables here, AFTER "start cut" */
		mymin = arr[0];
		mymax = arr[0];
		int i;
		for(i=1; i < SIZE; i++)	//for loop to print 1-10 numbers
		{
			if (mymin > arr[i])
				{mymin = arr[i];}
			else 
				{}
			if (mymax < arr[i])
				{mymax = arr[i];}
			else {}
		}

/*----------------------- end cut -----------------------*/
    printf ("The minumum = %d and the %s = %d\n", mymin,"maximum", mymax);

    return 0;    /* 0 tells operating system "Normal termination" */
}   /* end main */






