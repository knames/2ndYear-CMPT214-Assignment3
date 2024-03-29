/* Kennedy Slawinski
 * kts192
 * 11053598
 * CMPT 214 Assignment 3
 */

#ifndef _SCALAR_H_
#define _SCALAR_H_
#include "vector.h"


/* Precon: 	vec is a pointer to a vector
 * 			elem is the Elem to be added to each Elem currently
 * 			in the array
 * Postcon:	all of the Elem's have had elem added to them
 * Return:	vec is returned.
 */
Vector *scalar_plus(Vector *vec, Elem elem);


/* Precon: 	vec is a pointer to a vector
 * 			elem is the Elem to be subtracted to each Elem currently
 * 			in the array
 * Postcon:	all of the Elem's have had elem subtracted to them
 * Return:	vec is returned.
 */
Vector *scalar_minus(Vector *, Elem);

/* Precon: 	vec is a pointer to a vector
 * 			all of the Elem's have been multiplied by elem
 * 			in the array
 * Postcon:	all of the Elem's have been multiplied by elem
 * Return:	vec is returned.
 */
Vector *scalar_mult(Vector *, Elem);

/* Precon: 	vec is a pointer to a vector
 * 			All of the Elem are divide by elem
 * 			in the array
 * Postcon:	all of the Elem's have been divided by elem
 * Return:	vec is returned.
 */
Vector *scalar_div(Vector *, Elem);

#endif