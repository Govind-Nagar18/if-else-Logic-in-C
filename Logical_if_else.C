#include <stdio.h>
int main()
{
    printf("You have total 5000 Rupees\n");
    printf("The price of 1 Notebook is 50 Rupees\n");
    printf("The price of 1 Bag is 1500 Rupees\n");

    int total_amount = 5000;

    int numofnotebook, numofbag;
    printf("\nHow many Notebooks do you want to purchase: ");
    scanf("%d", &numofnotebook);
    printf("How many Bags do you want to purchase: ");
    scanf("%d", &numofbag);

    int notebook = 50 * numofnotebook;
    int bag = 1500 * numofbag;

    // If buying only notebooks
    if (numofnotebook != 0 && numofbag == 0)
    {
        if (notebook <= total_amount)
        {
            total_amount -= notebook;
            printf("\nTotal Cost of Notebooks: %d\n", notebook);
            printf("Remaining Balance: %d\n", total_amount);
        }
        else
        {
            printf("\nYou do not have enough money to buy %d notebooks.\n", numofnotebook);
        }
    }
    // If buying only bags
    else if (numofbag != 0 && numofnotebook == 0)
    {
        if (bag <= total_amount)
        {
            total_amount -= bag;
            printf("\nTotal Cost of Bags: %d\n", bag);
            printf("Remaining Balance: %d\n", total_amount);
        }
        else
        {
            printf("\nYou do not have enough money to buy %d bags.\n", numofbag);
        }
    }
    // If buying both notebooks and bags
    else if (numofbag != 0 && numofnotebook != 0)
    {
        int totalprice = notebook + bag;
        if (totalprice <= total_amount)
        {
            total_amount -= totalprice;
            printf("\nTotal Cost of Notebooks and Bags: %d\n", totalprice);
            printf("Remaining Balance: %d\n", total_amount);
        }
        else
        {
            printf("\nYou do not have enough money to buy %d notebooks and %d bags.\n", numofnotebook, numofbag);
        }
    }
    else
    {
        printf("\nYou did not purchase anything.\n");
    }

    return 0;
}
