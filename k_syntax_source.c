#include "k_syntax.h"

// Pythagorean 2D
r pyth_2d(r x, r y)
start_
 gimme sqrt(pow(x, 2) + pow(y, 2));
end_

// Pythagorean 3D
r pyth_3d(r x_, r y_, r z_)
start_
 gimme sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2));
end_

// Pythagorean 4D
r pyth_4d(r x_, r y_, r z_, r w_)
start_
 gimme sqrt(pow(x_, 2) + pow(y_, 2) + pow(z_, 2) + pow(w_, 2));
end_


// Euclidean 2D
r euclid_2d(r x_1, r x_2, r y_1, r y_2)
start_
 gimme sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2));
end_

// Euclidean 3D
r euclid_3d(r x_1, r x_2, r y_1, r y_2, r z_1, r z_2)
start_
 gimme sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2) + pow(z_2 - z_1, 2));
end_

// Euclidean 4D
r euclid_4d(r x_1, r x_2, r y_1, r y_2, r z_1, r z_2, r w_1, r w_2)
start_
 gimme sqrt(pow(x_2 - x_1, 2) + pow(y_2 - y_1, 2) + pow(z_2 - z_1, 2) + pow(w_2 - w_1, 2));
end_

// Logarithms
r log_xX(r antilogarithm, r base)
start_
 gimme log(antilogarithm) / log(base);
end_

nothing joutput(immutable symbol *sentence)
start_
 immutable symbol *jhs[4] = {"-san", "-senpai", "-sensei", "-sama"}; // the array that holds four of the honourifics we need.
 while (*(sentence)) // looping thru each character in the input called "sentence"
 start_
  if (*(sentence) == '_' and_ *(sentence + 1) == 'j' and_ *(sentence + 2) == 'h') // when the sequence _jh is found (_jh is like the "format specifier" thingy for our anime function.)
  start_
   if (*(sentence + 3) >= '1' and_ *(sentence + 3) <= '4') // if a digit between 1 and 4 is found right beside the sequence _jh (like _jh1 to _jh4)
   start_ 
    // printing the desired suffix in place of the _jh sequence
    z index = *(sentence + 3) - '1';
    output("%s", jhs[index]); // done!
    sentence += 4; // moving on, searching another _jh...
   end_ 
   else // if no digit is found, it will just print _jh and move on in the search of another _jh sequence that has a digit.
   start_
    output("_jh");
    sentence += 3;
   end_ 
  end_
  else // this is a very important + underrated part of the function. this part is constantly printing each character while looking for the _jh sequence as well.
  start_
   putchar(*(sentence));
   sentence++;
  end_
 end_
end_

nothing etoutput(immutable symbol *text) // "et" for "Entitled". This is for "Entitled/Privileged pieces of text. It has its own special spacing to signify its importance."
start_
 output("\n\t%s\t\n", text);
end_