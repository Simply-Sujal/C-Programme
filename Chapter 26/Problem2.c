// WAP to add two distances (in inch-feet) using structures and pointer. 

#include <stdio.h>

struct dist{
    int feet;
    int inch;
};

int main(){
    struct dist ans;
    struct dist d1;
    struct dist d2;

    struct dist *ptr = &d1;
    struct dist *pt = &d2;

    printf("Type the first distance\n");
    printf("Type feet : ");
    scanf("%d" , ptr->feet);
    printf("Type inch : ");
    scanf("%d" , ptr->inch);

    printf("Type the second distance\n");
    printf("Type feet : ");
    scanf("%d" , pt->feet);
    printf("Type inch : ");
    scanf("%d" , pt->inch);

    ans.feet = ptr->feet + pt->feet;
    ans.inch = ptr->inch + pt->inch; 

    // convert inches to feet if greater than 12
   while (ans.inch >= 12) {
      ans.inch = ans.inch - 12;
      ++ans.feet;
   }
   printf("\nSum of distances = %d\'-%d\"", ans.feet, ans.inch);
   return 0;
}
