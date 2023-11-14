#include <stdio.h>
#include <stdlib.h>
//Name: Matthias Maraj
//Date: Dec 13, 2022
//Student ID: N01546871

float priceCalculation(int overdueBy);

int main()
{
    int overdueBy[5];

    while(1)
    {
         //user input
        for(int i = 0; i < 5; i++)
        {
            do
            {
                printf("How many days is this book overdue?  :\n");
                scanf("%d", &overdueBy[i]);
            }
            while(overdueBy[i] < 0);

        }


        //check for when book is not overdue.
        //This assumes negative numbers means the person has come erlier than the
        //day they needed to return it.

        for(int i = 0; i < 5; i++)
        {
          if(overdueBy[i] < 0)
          {
              printf("This book is not overdue!\n");
          }
          else
          {
              printf("This book is %d days late and your fine will come to: $%.2f\n", overdueBy[i], priceCalculation(overdueBy[i]));
          }
        }

    }

    return 0;
}

float priceCalculation(int overdueBy)
{

    return 0.5 + (overdueBy * 0.5);

}
