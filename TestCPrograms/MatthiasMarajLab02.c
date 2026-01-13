#include <stdio.h>
#include <stdlib.h>
//By: Matthias Maraj
int main()
{
    //Step1: declaring variables
    float finalTemp;
    float tempFarenheit;

    //Step2: getting user input
    printf("Enter your temperature in farenheit: ");
    scanf("%f", &tempFarenheit);

    //Step 3: commiting calculations
    finalTemp = (tempFarenheit - 32) * 5 / 9;

    //Step 4: print to screen for user view
    printf("The value of the temp entered in celsius is: %f", finalTemp);
    return 0;
}
