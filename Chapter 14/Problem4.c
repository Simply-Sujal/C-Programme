// WAP in C to input n integers in an array and display the occurrences of all the elements. Example
// a[]={1, 2,1,6,3,2,6,1,8}, O/P: 1 available 3 times
// 2 available 2 times
// 6 available 2 times
// 3 available 1 times
// 8 available 1 times


#include <stdio.h>
int main() 
{
    int array[10];
    for (int i = 0; i < 10; i++) 
    {
        printf("Enter an integer: ");
        scanf("%d", &array[i]);
    }

    int duplicates[1000];
    int duplicateLastIndex = 0;
    
    
    for (int i = 0; i < 10; i++) 
    {
        int count = 0;
        for (int j = 0; j < 10; j++) 
        {
            if (array[i] == array[j]) 
            {
                count++;
            }
        }
        if (count >= 1) 
        {
            
            int found = 0;
            for (int k = 0; k < duplicateLastIndex; k++) 
            {
                if (array[i] == duplicates[k]) 
                {
                    found = 1;
                }
            }

            
            if (found == 0) 
            {
                duplicates[duplicateLastIndex] = array[i];
                duplicateLastIndex++;

                // print the duplicate
                printf("%d occurs %d times\n", array[i], count);
            }
        }
    }
    return 0;
}