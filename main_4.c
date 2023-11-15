#include <stdio.h>
#include <stdlib.h>
//By: Matthias Maraj
//Student ID: N01546871
//Date: Oct 31st, 2022
int main()
{
    //declare your variables
    //real number is a decimal/float and integer is just a whole number
    //Last 3 digits of Matthias' student # is: 871
    int intNum;
    float realNum;
    float sum;
    float studentNum = 871;

    //Gathering user input

    //for integer
    printf("Please enter an integer (NOT A DECIMAL & MUST BE A WHOLE NUMBER):");
    scanf("%d", &intNum);

    //For real number
    printf("Please enter a real number (SHOULD BE A DECIMAL):");
    scanf("%f", &realNum);

    //Doing the arithmatic
    sum = intNum + realNum;


    //Doing the if/else for the output
    if(sum > (studentNum + 100))
    {
        printf("The sum of your real number and integer number is larger than the last three digits of my student number (871) plus 100!");
    }
    else if(sum < (studentNum + 100))
    {
        printf("The sum of your real number and integer number is less than the last three digits of my student number (871) plus 100!");
    }
    else if(sum == (studentNum + 100))
    {
        printf("");
    }

    //=======================================next program goes under here AKA problem 2

    //step 1: declare variable
    float speed;

    //step 2: Get user input....via print + scan
    printf("\nPlease enter the sustained wind speed in km/h:");
    scanf("%f", &speed);

    //step 3: Use if statements and logic to find out where the users speed falls on the hurricane meter
    if(speed <= 0)
    {
        printf("The wind speed cannot be 0 or below 0, goodbye!");
    }
    else if(speed < 119)
    {
        printf("The wind speed entered does not count as a hurricane and is likely a smaller storms wind speed.");
    }
    else if(speed >= 119 && speed <= 153)
    {
        printf("The wind speed entered counts as a catagory 1 hurricane");
    }
    else if(speed > 153 && speed <= 177)
    {
        printf("The wind speed entered counts as a catagory 2 hurricane");
    }
    else if(speed > 177 && speed <= 208)
    {
        printf("The wind speed entered counts as a catagory 3 hurricane");
    }
    else if(speed > 208 && speed <= 251)
    {
        printf("The wind speed entered counts as a catagory 4 hurricane");
    }
    else if(speed > 251)
    {
        printf("The wind speed entered counts as a catagory 5 hurricane");
    }

    return 0;

}
