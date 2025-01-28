/* Modules are the new C++20 feature, which aims to eliminate the need for the separation
of code into header and source files. 
We include the same header multiple times. This increases compilation time.
Modules are included only once, and we do not have to separate the code into interface
and implementation.*/

export module mymodule;
export int myfunction() { return 123; }