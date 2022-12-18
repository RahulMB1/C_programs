/* An electricity board charges the following rates for the use of electricity: for the
first 200units 80 paise per unit: for the next 100 units 90 paisa per unit: beyond
300 units Re 1 per unit. All users are charged a minimum of Rs. 100 as meter
charge. If the total amount is more than Rs. 400, then an additional surcharge of
15% of total amount is charged.*/

#include<stdio.h>
void main(){
    int units;
    float amt, surcharge, totalamt;
    char name[25];

    printf("Enter the name of user: ");
    scanf("%s",name);

    printf("\nEnter the total units consumed: ");
    scanf("%d",&units);

        if(units<=200)
        {
            amt=units*0.80;
        }
        else if(units<=300)
        {
            amt=160+((units-300)*1.00);
        }
        else
        {
            amt=250+((units-300)*1.00);
        }

        totalamt=amt+100;
        if (totalamt>400)
        {
        surcharge=totalamt*0.15;
        totalamt=totalamt + surcharge;
        printf (" Total amount after adding surcharge");
        printf ("\n User:%s \n Electricity Bill:Rs.%.2f\n", name, totalamt);
        }
        else
        {
        printf ("\n User: %s \n Electricity Bill:Rs.%.2f\n", name, totalamt);
        }
}