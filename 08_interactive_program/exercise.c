#include <stdio.h>
#include <stdlib.h>
// Exercise 8: Campus Stationery Shop
int main()
{
    int item_choice, quantity, item_price, total = 0, items_bought = 0 ;

    printf("=====================================\n");
    printf("WELCOME TO THE CAMPUS STATIONERY SHOP\n");
    printf("=====================================\n");


    printf("1. Exercise book        - UGX 2500\n");
    printf("2. Pen                  - UGX 500\n");
    printf("3. Pencil               - UGX 300\n");
    printf("4. Ruler                - UGX 1000\n");
    printf("5. Eraser               - UGX 200\n");
    printf("0. Checkout & Exit\n");

    printf("Enter item number: ");
    scanf("%d", &item_choice);

    while (item_choice != 0){
        switch (item_choice){
            case 1: item_price = 2500;
            break;
            case 2: item_price = 500;
            break;
            case 3: item_price = 300;
            break;
            case 4: item_price = 1000;
            break;
            case 5: item_price = 200;
            break;
            default: item_price = -1;

        }

        if(item_price < 0){
            printf("Sorry, %d is not a valid item number. Try again.\n", item_choice);
        }else{
            printf("How many would you like? ");
            scanf("%d", &quantity);

            if(quantity <= 0){
                printf("Quantity must be at least 1. Purchase skipped.\n");
            }else{
                total = total + (item_price * quantity);
                items_bought++;

                printf("Running total: UGX %d\n" , total);
            }
        }

        printf("1. Exercise book   - UGX 2500\n");
        printf("2. Pen             - UGX 500\n");
        printf("3. Pencil          - UGX 300\n");
        printf("4. Ruler           - UGX 1000\n");
        printf("5. Eraser          - UGX 200\n");
        printf("0. Checkout & Exit\n");


        printf("Enter item number: ");
        scanf("%d", &item_choice);
    }


        printf("Number of purchases made: %d\n", items_bought);
        printf("TOTAL DUE: UGX %d\n", total);
        printf("Thank you for shopping with us!\n");


}
