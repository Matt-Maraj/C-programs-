#include <stdio.h>
#include <stdlib.h>
//Name: Matthias Maraj
//Date: December 17th 2022
//Student ID: n01546871

int main()
{
    //Declaring array and other variables I may need
    int nums[5];
    int element13;

    //These print and scan f's take up
    //a lot of space and can still be used to gather user
    //input, though a loop makes this more efficient
    printf("Please enter an integer: ");
    scanf("%d", &nums[0]);

    printf("Please enter an integer: ");
    scanf("%d", &nums[1]);

    printf("Please enter an integer: ");
    scanf("%d", &nums[2]);

    printf("Please enter an integer: ");
    scanf("%d", &nums[3]);

    printf("Please enter an integer: ");
    scanf("%d", &nums[4]);

    //returns the sum of elements 1 and 3
    element13 = nums[0] + nums[2];
    printf("\nSum of array elements one and three will be: %d", element13);

    //should make element three equal 23
    nums[3] = 23;
    printf("\nElement four is now equal to: %d\n", nums[3]);

    printf("\nNotice how the 4th element is now 23 in this instance:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }

    //Loops question to gather all 5 array element values from user
    for(int i = 0; i < 5; i++)
    {
        printf("\nplease enter the number for array %d:\n", i+1);
        scanf("%d", &nums[i]);
    }

    //Printing out all user element array values
    printf("\nYour array element values in the order you entered them will be:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", nums[i]);
    }

    //Reversing the numbers put in
    printf("\nYour array element values in the order you entered them will be:\n");
    for(int i = 4; i > -1; i--)
    {
        printf("%d ", nums[i]);
    }

    //should return every odd element number
    printf("\nThe values in every odd array element will be:\n");
    for(int i = 0; i < 5; i = i+2)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
