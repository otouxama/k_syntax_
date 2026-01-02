#ifndef K_SYNTAX_H_
#define K_SYNTAX_H_

#include <stdio.h>
#include <math.h>
#include <complex.h>
#include <stdbool.h>
#include <stdarg.h>
#include <tgmath.h>
#include <float.h>
#include <limits.h>
#include <ctype.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>

#define nothing void 
#define z int
#define zz long int 
#define zzz long long 
#define r float 
#define rr double 
#define rrr long double 
#define non_negative unsigned 
#define symbol char 
#define lie_detector bool 
#define correct true 
#define objection false 
#define gimme return 
#define output printf 
#define input scanf 
#define my_app main 
#define start int main(void) { 
#define end return 0; } 
#define start_ { // [deprecated crap]
#define end_ } // [deprecated crap]
#define gimme_main_exit return 0; 
#define immutable const 
#define and_ && 
#define or_ ||
#define is_ ==
#define isnt_ != 
#define xor_ ^ 
#define not_ !

extern const double eu;
extern const double pi;
extern const double gr;

r pyth_2d(r x, r y);

r pyth_3d(r x_, r y_, r z_);

r pyth_4d(r x_, r y_, r z_, r w_);

r euclid_2d(r x_1, r x_2, r y_1, r y_2);

r euclid_3d(r x_1, r x_2, r y_1, r y_2, r z_1, r z_2);

r euclid_4d(r x_1, r x_2, r y_1, r y_2, r z_1, r z_2, r w_1, r w_2);

r log_xX(r antilogarithm, r base);

nothing joutput(immutable symbol *sentence);

nothing etoutput(immutable symbol *text);

#endif
