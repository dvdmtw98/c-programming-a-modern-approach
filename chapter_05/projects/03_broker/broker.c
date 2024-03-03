/*
Modify the broker.c program of Section 5.2 by making both of the following changes:
(a) Ask the user to enter the number of shares and the price per share, instead of the value of the trade.
(b) Add statements that compute the commission charged by a rival broker ($33 plus 3¢ per share for fewer than 2000 shares; $33 plus 2¢ per share for 2000 shares or more). Display the rival's commission as well as the commission charged by the original broker.
*/

#include <stdio.h>

int main(void) {
    int shares;
    float broker_commission, rival_commission, share_price, value;

    printf("Enter number of shares: ");
    if (scanf("%d", &shares) != 1) {
        printf("Failed to read number of shares\n");
        return 1;
    }

    printf("Enter price per share: ");
    if (scanf("%f", &share_price) != 1) {
        printf("Failed to read price of share\n");
        return 1;
    }

    value = shares * share_price;

    if (value < 2500.00f) {
        broker_commission = 30.00f + 0.017f * value;
    } else if (value < 6250.00f) {
        broker_commission = 56.00f + 0.0066f * value;
    } else if (value < 20000.00f) {
        broker_commission = 76.00f + 0.0034f * value;
    } else if (value < 50000.00f) {
        broker_commission = 100.00f + 0.0022f * value;
    } else if (value < 500000.00f) {
        broker_commission = 155.00f + 0.0011f * value;
    } else {
        broker_commission = 255.00f + 0.0009f * value;
    }

    if (broker_commission < 39.00f) {
        broker_commission = 39.00f;
    }

    if (shares < 2000) {
        rival_commission = 33.00f + 0.03f * shares;
    } else {
        rival_commission = 33.00f + 0.02f * shares;
    }

    printf("Broker Commission: $%.2f\n", broker_commission);
    printf("Rival Commission: $%.2f\n", rival_commission);

    return 0;
}
