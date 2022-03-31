/*# Start of file merge.c */

/*# MIPSMARK 1.0 1/5/98 Copyright 1998 J. Waldron. */

/*  	Write a C function to merge 2 arrays, assumed to be ordered by ascending values,
	and store the result in a 3rd array, so it in turn is ordered. 
    Follow the function prototype given above the cut line.
	Put your entire function between thge cut lines	*/
/*# Output format must be:		*/
/*# "/-1/1/2/2/3/4/7/8/11"		*/
#include <stdio.h>       /* for printf in C programs */
#include <stdlib.h>	 /* for exit() in C programs */


#define LEN1	4
#define LEN2	5

int* merge (const int[], int , const int[], int); //allocates and returns an arrray

int main() {
  int a[LEN1] = {1,2,3,8};
  int b[LEN2] = {-1,2,4,7,11};
  int* m;	// to hold pointer to merged arrayy,  should free
  int* mp;	// point to successive result elements

  m = merge( a, LEN1, b, LEN2);
  mp = m;
  for (int i=0; i<LEN1+LEN2; i++)
     printf ("/%d",*mp++);
  free(m);
  printf("\n");
  return 0;
}

  
/* Any changes above this line will be discarded by
 mipsmark. Put your answer between dashed lines. */
/*-------------- start cut ----------------------- */

/*  Student's Name:	Mengqi Li	Account: mli			*/

int* merge (const int* m, int len1, const int* n, int len2){
	int length = len1 + len2; // get the total length of the returned array
	int mcount = 0;	// set up all the pointers to the beginning of the arrays
	int ncount = 0;
	int fcount = 0;
	int* f = malloc (sizeof (int) * length);	// allocate space for the returned array, f
	while (mcount < len1 && ncount < len2)		// when both of the counters don't reach the end of the arrays
		if (m[mcount] < n[ncount]) f[fcount++] = m[mcount++];	// assign the smaller value of the two values from the two arrays to the next of f
		else f[fcount++] = n[ncount++];
	while (mcount < len1) f[fcount++] = m[mcount++];	// just add all the remaining values in the list which doesn't reach the end.
	while (ncount < len2) f[fcount++] = n[ncount++];
	return f;
}
;

/*--------------  end cut  -----------------------
# Any changes below this line will be discarded by
# mipsmark. Put your answer between dashed lines.

   End of file merge.c		*/
