#include <stdio.h>
#include <stdlib.h>
//Name: Matthias Maraj
//Student ID: N01546871
//Date: Nov 30, 2022
int main()
{
    //problem 1 below, should use the control structure of a while loop
    char answer;


    printf("Do you like snakes?: ");

    //note space between " and %c when using char
    scanf(" %c", &answer);


    while(answer == 'y')
    {
        printf("\nAlright then!\n");
        printf("Do you like snakes?: ");

        scanf(" %c", &answer);
    }

    //problem 2 below, should use the control structure of a if statement

    float height1, height2;

    printf("\nEnter your first height: ");
    scanf("%f", &height1);

    printf("\nEnter your second height: ");
    scanf("%f", &height2);

    if(height1 == height2)
    {
        printf("We're the same\n");
    }
    else if(height1 > height2)
    {
        printf("I'm bigger\n");
    }
    else if(height1 < height2)
    {
        printf("I'm just a little guy\n");
    }


    //problem 3 below, should use the control structure of a while loop
    char choice;

    while( choice != 'q')
    {
        printf("\nwhat would you like to do (choose option a, b, or q (to quit)): \n");
        printf("\n===============================================================");
        printf("\nOption a");
        printf("\nOption b");
        printf("\nOption q");
        printf("\n===============================================================\n");

        scanf(" %c", &choice);
    }

    //problem 4 below, should use the control strucutre of a do while loop
    float loanAmount, interestRate, totalInterest;

    do
    {
        printf("Please enter the loan amount for your five year plan:");

        scanf("%f", &loanAmount);

        printf("Please enter the interest rate for this five year plan (enter as a decimal of that percent):");

        scanf("%f", &interestRate);

        totalInterest = loanAmount*(1 + (interestRate*5));

    }
    while(loanAmount && interestRate <= 0);

    printf("Total interest for this 5 year plan will be: $%.2f", totalInterest);

    //problem 5 below, should use control strucutre of a while loop
    int num, choice1;

    printf("\nPlease enter the integer amount for repetition:");

    scanf("%d", &num);

    while(choice1 != num)
    {
        printf("Hello!\n");

        //ensures loop eventually ends after integer matches
        //so hello is only printed a certain amount
        choice1++;
    }

    //problem 6 below
    int on = 1;
    int off = 0;
    int userState;

    printf("What state is your light in? (1 = on, 0 = off):");
    scanf("%d", &userState);

    if(userState == on)
    {
        printf("The program is shutting off your light!");
    }
    else
    {
        printf("The program is turning on your light!");
    }

    return 0;
}
