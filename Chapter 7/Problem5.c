// WAP in C to calculate the electric bill of a consumer. You have to input the consumer no,
// and unit of consumption.
// Unit &lt;=50 per unit: Rs 3.75
// Unit 51 to 200 per unit: Rs 4.50
// Unit 201 to 300 per unit: Rs 5.50
// Unit 301 to 400 per unit: Rs 6.50
// Unit &gt;400 per unit: Rs 8.00

#include<stdio.h>
int main()
{
    int consumerNumber;
    float unitUsed, rupees;
    printf("Type consumerNumber : ");
    scanf("%d", &consumerNumber);
    printf("Enter units used : ");
    scanf("%f", &unitUsed);
    
    if(unitUsed <= 50)
    {
        rupees = unitUsed * 3.75;
        printf("Amount to be paid is : %f\n", rupees);
    }
    else if (unitUsed > 50 && unitUsed <= 200)
    {
        rupees = unitUsed * 4.50;
        printf("Amount to be paid is : %f\n", rupees);
    }
    else if (unitUsed > 200 && unitUsed <= 300)
    {
        rupees = unitUsed * 5.50;
        printf("Amount to be paid is : %f\n", rupees);
    }
    else if (unitUsed > 300 && unitUsed <= 400)
    {
        rupees = unitUsed * 6.50;
        printf("Amount to be paid is : %f\n", rupees);
    }
    else
    {
        rupees = unitUsed * 8.00;
        printf("Amount to be paid is : %f\n", rupees);
    }
        
    return 0;
}