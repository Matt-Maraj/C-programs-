#include <stdio.h>
#include <stdlib.h>
/*
Created by: Matthias Maraj
due: October 17, 2022
*/
int main()
{
    //Step 1: declare some variables
    int numPickles;
    int numGrapes;
    int numApples;
    float costPickles;
    float costGrapes;
    float costApples;
    float subTotal;

    //Tax is 13% which would turn into 0.13 as a decimal
    float tax = 0.13;

    float totalToAdd;
    float total;

    //Step 2: ask user for # of items and cost, 2 scanf's for each item
    printf("Enter the amount of pickles: ");

    scanf("%d", &numPickles);

    printf("Enter the cost of those pickles: ");

    scanf("%f", &costPickles);

    //item 2
    printf("Enter the amount of grapes: ");

    scanf("%d", &numGrapes);

    printf("Enter the cost of those grapes: ");

    scanf("%f", &costGrapes);

    //item 3
    printf("Enter the amount of Apples: ");

    scanf("%d", &numApples);

    printf("Enter the cost of those Apples: ");

    scanf("%f", &costApples);

    //Step 3: do the arithmatic to be printed

    //Arithmatic for calculating subtotal
    subTotal = (numPickles * costPickles) + (numGrapes * costGrapes) + (numApples * costApples);

    //Artithmatic to show what is being added to subtotal (from tax) to get the final total
    totalToAdd = subTotal * tax;

    total = totalToAdd + subTotal;

    //step 4 print the receipt

    printf("\n===============================THE MATT GROCERIES===============================\n");
    printf("\nItem name:\t\t\tNumber of items:\t\tCost of item:\t\t\n");
    printf("Pickles\t\t\t\t%d           \t\t\t$%.2f", numPickles, costPickles);

    printf("\nItem name:\t\t\tNumber of items:\t\tCost of item:\t\t\n");
    printf("Grapes\t\t\t\t%d           \t\t\t$%.2f\t", numGrapes, costGrapes);

    printf("\nItem name:\t\t\tNumber of items:\t\tCost of item:\t\t\n");
    printf("Apples\t\t\t\t%d           \t\t\t$%.2f\t\n", numApples, costApples);

    printf("\nSub total: $%.2f", subTotal);
    printf("\nTotal: $%.2f \n", total);

    printf("\nStore owner: Matthias Maraj");
    printf("\nStore owner ID: N01546871");
    printf("\n=================================================================================\n");
    return 0;
}
