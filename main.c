#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declaring variables
    int mathematics=0;
    int physics=0;
    int chemistry=0;
    int totalMarks=0;
    float average=0;

    //get values from user
    printf(" Enter Mathematics marks : ");
    scanf("%d",&mathematics);
    printf(" Enter Physics marks : ");
    scanf("%d",&physics);
    printf(" Enter Chemistry marks : ");
    scanf("%d",&chemistry);

    //calculation
    totalMarks=mathematics+physics+chemistry;
    average=totalMarks/3.0;

    //display results
    printf(" Total mark : %d\n",totalMarks);
    printf(" Average    : %.2f\n",average);

    return 0;
}
