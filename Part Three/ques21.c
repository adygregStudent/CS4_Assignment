/*
    Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
    For first 50 units Rs. 0.50/unit
    For next 100 units Rs. 0.75/unit
    For next 100 units Rs. 1.20/unit
    For unit above 250 Rs. 1.50/unit
    An additional surcharge of 20% is added to the bill.

    source by com.adygreg
    [30:11:2020]

*/

#include <stdio.h>

float electricCost (float electricUnit) {
        
    float electricBill=0;

    if(electricUnit<=50)
        electricBill += electricUnit*(0.5);
    else {

        electricBill += 50*(0.5);
        electricUnit -= 50;

        if(electricUnit<=100)
            electricBill += electricUnit*(0.75);
        else {

            electricBill += 100*(0.75);
            electricUnit -= 100;

            if(electricUnit<=100)
                electricBill += electricUnit*(1.2);
            else {

                electricBill += 100*(1.2);
                electricUnit -= 100;

                if(electricBill>0)
                    electricBill += electricUnit*(1.5);

            }

        }
        
    }

    electricBill += electricBill*(.2);

    return electricBill;

}

int main (void) {

    float unit;

    printf("Enter [Unit] :: ");
    scanf("%f", &unit);

    printf("Electric Bill [Rupees] :: %.2f", electricCost(unit));

    return 0;
}