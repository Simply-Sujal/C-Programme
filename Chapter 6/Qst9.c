// Q8. WAP in C to find the area of a triangle by passing 3 sides of the triangle and check the triangle is possible or not.

#include <stdio.h>
#include <math.h>

    int main()
    {
        double a, b, c, s, area;

        printf("Enter sides of a triangle\n");
        scanf("%lf%lf%lf", &a, &b, &c);

        if ((a+b > c) && (b+c > a) && (c+a > b))
        {
            printf("The triangle is possible! \n");

            s = (a+b+c)/2; 
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            printf("Area of the triangle = %.2lf\n", area);
        }

        else{
            printf("Please enter the valid number.");
        }
        

        return 0;
    }
    