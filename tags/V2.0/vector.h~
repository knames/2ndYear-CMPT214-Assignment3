
/* Kennedy Slawinski
 * kts192
 * 11053598
 * CMPT 214 Assignment 3
 */

#ifndef _VECTOR_H_
#define _VECTOR_H_


typedef float Elem;

struct Vector{
		unsigned int Size;
		Elem *ptr;
};


/*
 * precon: *vec is a pointer to a vector
 * postcon: prints out the values in *vector
 * return: true if successful, false if vec was null
 */
bool print_vec(Vector *vec);

/* Precon: 	none
 * Postcon: return's a pointer to a Vector with size 0
 * 			and a null Elem ptr array
 */
Vector *alloc_vec();

/*
 * Precon: 	vec is a pointer to a Vector
 * Postcon: vec has had it's ptr array deleted
 *			the Size has been set to zero
 *			vec is deleted
 */
void dealloc_vec(Vector *vec);

/* Precon: 	vec is a pointer to a vector
 * 			elem is the elem to be appended to the new vector
 * Postcon:	 newVec has all of the values
 * 			of vec, plus the newly appended elem.
 * Return:	newVec is returned
 */
Vector *extend_vec(Vector *vec, Elem elem);
#endif