#include "k_syntax.h"

/*
 Welcome to this fun hobby project! 
 This is just a quick walkthrough of the basics of K syntax language in C.
 Details about the K syntax language can be found in these codedex.io builds given below:
 1. https://www.codedex.io/@otousama/build/k.c
 2. https://www.codedex.io/@otousama/build/k_v2.c
 3. https://www.codedex.io/@otousama/build/k_v3.c
 4. https://www.codedex.io/@otousama/build/k_v4.c
 Creator profiles
 Gravatar:
 https://gravatar.com/inventive5e457ca1c1
 Codedex:
 https://www.codedex.io/@otousama (follow me if you like my projects!)
*/

r add(r a, r b)
start_
 gimme a + b;
end_

nothing greet(immutable symbol *name)
start_
 output("Hi, %s!\n", name);
end_

start
 z an_int = 0;
 r a_num = add(3, 5);
 r x_1_ = 11.1111;
 r x_2_ = 22.2222;
 r y_1_ = 33.3333;
 r y_2_ = 44.4444;
 r z_1_ = 55.5555;
 r z_2_ = 66.6666;
 r w_1_ = 77.7777;
 r w_2_ = 88.8888;
 r my_base = 10;
 r my_antilogarithm = 69;
 r log_result = log_xX(my_antilogarithm, my_base);
 output("THIS WORKS!\n");
 output("%f\n", a_num);
 greet("Rafin");
 output("Enter a number: ");
 input(" %i", &an_int);
 output("Your number is: %i!\n", an_int);
 r pyth_2d_result = pyth_2d(x_1_, y_1_);
 r pyth_3d_result = pyth_3d(x_1_, y_1_, z_1_);
 r pyth_4d_result = pyth_4d(x_1_, y_1_, z_1_, w_1_);
 r euclid_2d_result = euclid_2d(x_1_, x_2_, y_1_, y_2_);
 r euclid_3d_result = euclid_3d(x_1_, x_2_, y_1_, y_2_, z_1_, z_2_);
 r euclid_4d_result = euclid_4d(x_1_, x_2_, y_1_, y_2_, z_1_, z_2_, w_1_, w_2_);
 output("Pythagorean Theorem sample results:\n");
 output("1. %f\n", pyth_2d_result);
 output("2. %f\n", pyth_3d_result);
 output("3. %f\n", pyth_4d_result);
 output("Euclidean formula sample results:\n");
 output("1. %f\n", euclid_2d_result);
 output("2. %f\n", euclid_3d_result);
 output("3. %f\n", euclid_4d_result);
 output("log_%f(%f) = %f.\n", my_base, my_antilogarithm, log_result);
 output("Thus, %f^%f = %f\n", my_base, log_result, pow(my_base, log_result));
 output("some math constants:\n");
 output("euler: %.16lf\n", eu);
 output("pi: %.16lf\n", pi);
 output("golden ratio: %.16lf\n", gr);
 joutput("Hello Yagami_jh1!\n");
 joutput("How is Lawliet_jh2 doing?\n"); 
 joutput("Please wake up Osaka_jh3.\n");
 joutput("This message is left by Light_jh4.\n");
 etoutput("This is an Entitled Text!");
 etoutput("This is another Entitled Text!");
 etoutput("This is yet another Entitled Text!");
 etoutput("This is the last Entitled Text!");
end
