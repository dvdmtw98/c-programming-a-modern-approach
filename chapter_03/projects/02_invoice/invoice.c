/*
Write a program that formats product information entered by the user. A session with the program should look like this:

Enter item number: 583
Enter unit price: 13.5
Enter purchase date (mm/dd/yyyy): 10/24/2010

Item        Unit            Purchase
            Price           Date
583         $ 13.50         10/24/2010

The item number and date should be left justified; the unit price should be right justified.
Allow dollar amounts up to $9999.99. Hint: Use tabs to line up the columns.
*/

#include <stdio.h>

int main(void) {
    int item_id, month, date, year;
    float price;

    printf("Enter item number: ");
    if (scanf("%d", &item_id) != 1) {
        printf("Failed to read item number\n");
        return 1;
    }

    printf("Enter item price: ");
    if (scanf("%f", &price) != 1) {
        printf("Failed to read item price\n");
        return 1;
    }

    printf("Enter purchase date (mm/dd/yyyy): ");
    if (scanf("%d/%d/%d", &month, &date, &year) != 3) {
        printf("Failed to read purchase date\n");
        return 1;
    }

    printf("\nItem\t\tUnit\t\t\tPurchase\n\t\tPrice\t\t\tDate\n");
    printf("%-d\t\t$%7.2f\t\t%-.2d/%-.2d/%-d\n", item_id, price, month, date, year);

    return 0;
}
