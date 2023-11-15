#include <stdio.h>
#include <stdlib.h>
//Name: Matthias Maraj
//Date: November 21 2022
//Student ID: n01546871
int main()
{
    //Problem 1 under here=======================================================================================

    //Step 1: declare yout variables
    float firstSide, secondSide, thirdSide;

    //Step 2: Gather user input
    printf("Please enter the value for your first side of the shape:");
    scanf("%f", &firstSide);

    printf("Please enter the value for your second side of the shape:");
    scanf("%f", &secondSide);

    printf("Please enter the value for your third side of the shape:");
    scanf("%f", &thirdSide);

    //step 3: determine whether or not it is a triangle (accounts for if sides are too short to make a triangle or
    //if a negative number is input)
    //Also makes sure to account for if it is not a triangle by means of being negative or if one side is too short first

    if(firstSide <= 0 || secondSide <= 0 || thirdSide <= 0 || (firstSide + secondSide) <= thirdSide || (secondSide + thirdSide) <= firstSide || (firstSide + thirdSide) <= secondSide)
    {
       printf("This will not be a triangle!");
    }
    //Rest of else ifs will be used to determine the type of triangle if it is deemed to be a triangle
    else if(firstSide != secondSide && secondSide != thirdSide && firstSide != thirdSide)
    {
        printf("This will be a scalene triangle!");
    }
    else if((firstSide == secondSide && firstSide != thirdSide) || (firstSide == thirdSide && firstSide != secondSide) || (thirdSide == secondSide && firstSide != thirdSide))
    {
        printf("This will be an isosceles triangle!");
    }
    else
    {
        printf("This will be an equilateral triangle!");
    }

    //===========================Problem 2 below here===================================================================================

    //declare variables
    int overdueBy;
    float lateFine;


    //user input
    printf("\nHow many days is this book overdue by?  :");
    scanf("%d", &overdueBy);

    //check for when book is not overdue.
    //This assumes negative numbers means the person has come erlier than the
    //day they needed to return it.
    if(overdueBy <= 0)
    {
       printf("This book is not overdue!");
    }
    else
    {
        lateFine = 0.5 + (overdueBy * 0.5);
        printf("This book is %d days late and your fine will come to: $%.2f", overdueBy, lateFine);
    }

    return 0;
}
