#include <stdio.h>
#include <string.h>

/*
    Given a character pointer x (that points to an array of chars), and a
    character pointer y, copies the character contents of y over to x. Pointer
    arithmetic is necessary here. Also, make sure x points to a null terminator
    at its end to terminate it properly. 

    Example call:

    char buffer[1024];

    string_copy(buffer, "Hello!");
    printf("%s", buffer); // Prints "Hello!"
*/

void string_copy(char *x, char *y)
{
    int j = 0;
    while (*y != '\0')
    {
        x[j] = *y; //the value of this location x[j] is equal to y
        j++; // add 1 to j
        y++; // add 1 to y
    }
    x[j] = '\0'; // end x array with a NULL terminator
}


/* 
    Searches the input string `str` for the first instance of the 
    character `c` (an unsigned char). This function returns a pointer
    that points to the first instance of the character `c` in the
    input string `str`.

    Do not use the `strchr` function from the standard library.
*/
char *find_char(char *str, int c)
{
    int i;
    int length = strlen(str);

    for (i=0; i <= length-1; i++)
    {
        if (str[i] == c)
        {
            return &str[i];
        }
    }
    return 0;
}

/*
    Searches the input string `haystack` for the first instance of
    the string `needle`. This function returns a pointer that points
    to the first instance of the string `needle` in the input
    string `haystack`. 

    Do not use the `strstr` function from the standard library.
*/
// char *find_string(char *haystack, char *needle)
// {

// }

#ifndef TESTING
int main(void)
{
    // char buffer[1024];

    // string_copy(buffer, "Hello!");
    // printf("%s", buffer); // Prints "Hello!"

    char *found_char = find_char("hello", 'e');
    // char *found_string = find_string(world, "or");

    printf("Found char: %s\n", found_char);
    // printf("Found string: %s\n", found_string);

    return 0;
}
#endif
