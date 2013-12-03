/* Kennedy Slawinski
 * kts192
 * 11053598
 * CMPT 214 Assignment 3
 */

using namespace std;

#ifndef _VECTOR_H_
#define _VECTOR_H_
#include "vector.h"
#endif

#include <stdlib.h>     // for EXIT_FAILURE, EXIT_SUCCESS
#include "assert.h"


/* Function that runs the test_vector program
 * precon: The functions called from in main work
 * postcon: tests have been ran
 * return EXIT_SUCCESS if successful
 * 			crashes otherwise
 */
int main(int, char**)
{
	Vector *newVec = alloc_vec();
	Vector *nullVec = NULL;

	//Verify newVec has a NULL pointer and size 0
	assert(newVec->ptr == NULL);
	assert(newVec->Size == 0);
	
	//Ensure's extend_vec is working.
	newVec = extend_vec(newVec, 100.0);
	assert(newVec != NULL);
	assert(newVec->ptr[0] == 100.0);
	assert(newVec->Size == 1);
	newVec = extend_vec(newVec, -50.0);
	assert(newVec != NULL);
	assert(newVec->ptr[1] == -50.0);
	assert(newVec->Size == 2);
	assert(extend_vec(nullVec, 5) == NULL);
	
	//Ensure print_vec is functioning correctly.
	print_vec(newVec);
	assert(print_vec(nullVec) == false);
	
	//Verify newVec has been deallocated
	dealloc_vec(newVec);
	assert(newVec->ptr == NULL);
	
	return EXIT_SUCCESS;
}