# This will compile the C code

## How to compile the code

This is how you want to compile your code :
```
gcc -o hell hello.c -fPIE
```
The *-fPIE* flag is to enable the ASLR.
