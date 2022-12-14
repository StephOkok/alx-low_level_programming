# Dynamic Libraries #

A library is a collection of object file grouped together into one unit to ease proramming
- A dynamic library is also called shared library
- Dynamic library is not added to executable files

## Building a dynamic library ##

*Compile the .c source files to create (machine) object codes (.o) with a command like:*
* gcc -c -fPIC function.c

-fPIC flag stands for 'Position Independent Code' generation
*Finally, build the library (here libFct.so) from all .o with the 'shared' flag*

gcc -shared -o <libname>.so function.o




