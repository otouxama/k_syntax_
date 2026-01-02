#include "k_syntax.h"

// some math constants
const double eu = 2.718281828459045;
const double pi = 3.141592653589793;
const double gr = 1.618033988749894;

// Pythagorean 2D
r pyth_2d(r x, r y)
{
 gimme sqrt(pow(x, 2) + pow(y, 2));
}

// Pythagorean 3D
r pyth_3d(r x_, r y_, r z_)
{
 gimme sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2));
}

// Pythagorean 4D
r pyth_4d(r x_, r y_, r z_, r w_)
{
 gimme sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2) + pow(w_, 2));
}


// Euclidean 2D
r euclid_2d(r x_1, r x_2, r y_1, r y_2)
{
 gimme sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
}

// Euclidean 3D
r euclid_3d(r x_1, r x_2, r y_1, r y_2, r z_1, r z_2)
{
 gimme sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2) + pow(z_2 - z_1, 2));
}

// Euclidean 4D
r euclid_4d(r x_1, r x_2, r y_1, r y_2, r z_1, r z_2, r w_1, r w_2)
{
 gimme sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2) + pow(z_2 - z_1, 2) + pow(w_2 - w_1, 2));
}

// Logarithms
r log_xX(r antilogarithm, r base)
{
 gimme log(antilogarithm) / log(base);
}

// random anime function
// rewrote ts by using the Guard Clause method all by myself cuz i felt really bad and guilty for using AI for it
nothing joutput(immutable symbol *sentence)
{
 immutable symbol *jhs[4] = {"-san", "-senpai", "-sensei", "-sama"};
 while (*sentence)
 {
     if (not_(((*sentence) is_ '_' and_ *(sentence + 1) is_ 'j' and_ *(sentence + 2) is_ 'h')))
     {
         putchar(*sentence);
         sentence++;
     }
     else
     {
         if (not_(*(sentence + 3) >= '1' and_ *(sentence + 3) <= '4'))
         {
             output("_jh");
             sentence += 3;
         }
         else
         {
             z index = *(sentence + 3) - '1';
             output("%s", jhs[index]);
             sentence += 4;
         }
     }
 }
    output("\n"); // appends a newline for u after the loop ^_^
}

// "et" for "Entitled". This is for "Entitled/Privileged pieces of text." It has its own special spacing to signify its importance.
nothing etoutput(immutable symbol *text)
{
 output("\n\t%s\t\n", text);
}