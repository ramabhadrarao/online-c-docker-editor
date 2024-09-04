#include<stdio.h>
int main()
{
    int length,height,area;
    printf("Enter length");
    scanf("%d",&length);
    printf("Enter height");
    scanf("%d",&height);
    area=length*height;
    printf("The area is %d",area);
    return 0;
}