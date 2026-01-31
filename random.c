#include <time.h>
#include <stdlib.h>
#include <stdio.h>
// standalone number generation from 
int main(void)  {

    unsigned seed = (unsigned)time(NULL);
    srand(seed);
    printf("=================================== \n");
    printf("random seed generated: %u \n\n", seed);
    
    const int MAX_RAND = 100;
    int r = rand() % MAX_RAND + 1; // randome number between 1 - 100
    
    printf("=================================== \n");
    printf("random number: %d\n\n", r);
    printf("note that in this example we generate a number from 1 - MAX_RAND. \n");
    printf("if you want a different range of numbers you can change the value of it \n\n");    
    
    return 0;
}