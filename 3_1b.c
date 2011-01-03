#include <stdio.h>    // int printf(const char *format, ...);
#include <stdlib.h>   // int rand(void); void srand(unsigned int seed);
#include <time.h>     // time_t time(time_t *t);
#include <limits.h>   // INT_MAX
#define ARRAY_SIZE 400 // Listed here to make it quick to change

/* This program demonstrates the use of the binary search algorithm
 * shown on page 58 of K&R. We first populate a large array with ints
 * which are strictly increasing. Next we print the array. Then we
 * call binsearch for each positive integer to see if it can be found
 * in the array.
 */

int binsearch(int x, int v[], int n);
int populate_array(int v[], int n);
void print_array(int v[], int n);

int main()
{
	// Populate an array with increasing integers
	int array_size = ARRAY_SIZE; // copy into a variable, which can be modified
	int A[array_size];           // declare the array, allocating memory for it
	array_size = populate_array(A, array_size); // may not fill the whole array
    

	// Print out the numbers in the array
	print_array(A, array_size);

	// Search for numbers in the array
	int i;

    for (i = 1; i <= INT_MAX; i++) {
		int location = binsearch(i, A, array_size);
		if (location >= 0) {
			printf("A contains %d at location %d.\n", i, location);
		}
		if (location == array_size-1) {
			// found the last value in the array
			// don't bother looking any more
			break;
		}
	}


	return 0;
}

// Puts randomly selected, strictly increasing integers into the array until
// it gets to the end of the array, or the numbers get too big for the type.
// Returns the number of ints inserted into the array, as the new "array_size".
int populate_array(int v[], int n)
{
    int i;
    unsigned int c=0;
    time_t seed;
    
    seed = time(NULL);
    srand(seed);
    
   for(i=0; i< n && c< INT_MAX;++i){
            c+= sqrt(rand());
            v[i] =c;
   }
           
                  
    return i;             
}

// Print each value in the array, separated by tabs, with a newline after the
// last value.
void print_array(int v[], int n)
{
     int i;
     for(i =0; i < n; ++i)
            printf("%d%c",v[i],(i==(n-1))? '\n':'\t');
     

}

// Copied directly from page 58 of K&R
/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[],int n)
{
    int low, mid, high;

    low=0;
    high =n-1;

    while( low <= high){
        mid = (low + high)/2;
            if(x <= v[mid])
                 high = mid - 1;
            else
                low = mid + 1;
    }

     return( (x - v[mid])? -1: mid );

}
