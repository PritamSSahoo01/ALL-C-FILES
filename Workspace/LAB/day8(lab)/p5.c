#include <stdio.h>
int area(int,int);
int perimeter(int,int);

int main()
{
    int a,b,d,f;
    printf("enter the length:");
    scanf("%d",&a);
    printf("enter the breadth:");
    scanf("%d",&b);
    d=area(a,b);
    printf("Area of the rectangle:%d",d);
    f=perimeter(a,b);
    printf("\nPerimeter of the rectangle:%d",f);
    return 0;

}
int area(int a,int b)
{
    int res;
    res=a*b;
    return res;
}
int perimeter(int a,int b)
{
    int res;
    res=2*(a+b);
    return res;
}