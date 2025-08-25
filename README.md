#dynamic arrays in c - my implementation

as the title says, I decided to give it a wack because why not

### how to use

its pretty simple, include the header file in your code and compile with the c file when you compile your program eg:
```
gcc dynamic_array.c your_file_here.c
```
This implementation gives functions for initialisation, pushing and popping. You can access individual items like:
```c
a.values[i]; //a is your Array instance, i is an index
```

don't forget to free `a.values` once youre done with the array.