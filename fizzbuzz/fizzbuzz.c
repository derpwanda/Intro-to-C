#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
    int i;
<<<<<<< HEAD
    int counter;
=======
>>>>>>> 999fc4ec412d5e3316fd0e0e2503830588555943
    for (i=1; i<=n; i++)
    {
        if (i % 15 == 0)
            printf("FizzBuzz\n");

        else if(i % 3 == 0)
            printf("Fizz\n");
        
        else if (i % 5 == 0)
            printf("Buzz\n");

        else
<<<<<<< HEAD
            counter++;
            // printf("%i\n", i); //%i is for integers
    }
    
    //my function main returns an int so I should have a return at the end of it
    return counter; 
=======
            printf("%i\n", i); //%i is for integers
    }
    
    //my function main returns an int so I should have a return at the end of it
    return 0; 
>>>>>>> 999fc4ec412d5e3316fd0e0e2503830588555943
    
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);

    return 0;
}
#endif
