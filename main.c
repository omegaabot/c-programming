#include <stdio.h>

int main()
{
int phy,chem,maths,total_marks; 
 float avg_marks;
printf("Enter the marks obtained in maths:");
scanf("%d",& maths);
printf("Enter the marks obtained in phy:");
scanf("%d",& phy);
printf("Enter the marks obtained in chem:");
scanf("%d",& chem);
total_marks=maths+phy+chem;
printf("total marks=%d",total_marks);
avg_marks=total_marks/3;
printf("avg marks=%f", avg_marks);
}

