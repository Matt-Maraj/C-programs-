#include <stdio.h>
#include <stdlib.h>
//Name: Matthias Maraj
//Date: Dec 12, 2022

//Function delcared first
int triangleFull(int firstSide, int secondSide, int thirdSide);

//Main will handle user input and output
int main()
{
    //Declaring variables in main function
    int firstSide, secondSide, thirdSide;

    //Gathering user input
    printf("Please enter the value for your first side of the shape:");
    scanf("%d", &firstSide);

    printf("Please enter the value for your second side of the shape:");
    scanf("%d", &secondSide);

    printf("Please enter the value for your third side of the shape:");
    scanf("%d", &thirdSide);

    printf("\n0 = Not a triangle\n");
    printf("1 = Is a Scalene triangle\n");
    printf("2 = Is a Isosceles triangle\n");
    printf("3 = Is a Equilateral triangle\n\n");
    printf("The triangle type will be: %d\n", triangleFull(firstSide, secondSide, thirdSide));

    return 0;
}

//Function description found below
int triangleFull(int firstSide, int secondSide, int thirdSide)
{
    //Tells when the shape has sides not common to any type of triangle
    if(firstSide <= 0 || secondSide <= 0 || thirdSide <= 0 || (firstSide + secondSide) <= thirdSide || (secondSide + thirdSide) <= firstSide || (firstSide + thirdSide) <= secondSide)
    {
       return 0;
    }
    //Rest of else ifs will be used to determine the type of triangle if it is deemed to be a triangle
    else if(firstSide != secondSide && secondSide != thirdSide && firstSide != thirdSide)
    {
        return 1;
    }
    else if((firstSide == secondSide && firstSide != thirdSide) || (firstSide == thirdSide && firstSide != secondSide) || (thirdSide == secondSide && firstSide != thirdSide))
    {
        return 2;
    }
    else
    {
        return 3;
    }
}
