/* Kennedy Slawinski
 * kts192
 * 11053598
 * CMPT 214 Assignment 3
 */

using namespace std;
#include <stdio.h>      // for puts()
#include <stdlib.h>     // for EXIT_FAILURE, EXIT_SUCCESS


#include "vector.h"


#include "calc_state.h"
#include "input_state.h"

// global variable pointing to the vector being worked on
// in a coordinated fashion by main(), input_state(),
// and calc_state().  
Vector *wrk_vec_p;

// =====================================

// main:
//  Program entry point.  
// In:
//  Command line arguments are ignored
// Out:
//  return -- EXIT_SUCCESS if program terminates normally, 
//            EXIT_FAILURE otherwise
int main( int , char ** ) {
        bool exit_flag=false;

        wrk_vec_p = NULL;
        while( !exit_flag ) {
                input_state();                  // input starting vector
                exit_flag = calc_state();       // perform operations, resulting
                                                //  potentially in a new vector
                // if there is a global work vector allocated, deallocate it
                if( NULL != wrk_vec_p ) {
                        dealloc_vec( wrk_vec_p );
                        wrk_vec_p = NULL;
                }
        }                                       

        return EXIT_SUCCESS;
}
