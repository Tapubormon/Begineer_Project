#include<stdio.h>

// for addition
double addition(double x,double y)
{
    return printf("Result= %.1lf\n",x+y);;
}
// for subtraction
double subtraction(double x,double y)
{
    return printf("Result= %.1lf\n",x-y);
}
// for multiplication
double multiplication(double x,double y)
{

    return printf("Result= %.1lf\n",x*y);;
}
// for division
double division(double x,double y)
{

    return printf("Result= %.4lf\n",x/y);;
}
int main()
{
    double X,Y;
    int opr;
    printf("Choose any Number between 1 to 4.\nThe number stand for \'+\',\'-\',\'*\',\'/\', respectively.\n");
    scanf("%d",&opr);
    if(opr==1)
    {
        scanf("%lf%lf",&X,&Y);
        addition(X,Y);
    }
    else if(opr==2)
    {
        scanf("%lf%lf",&X,&Y);
        subtraction(X,Y);
    }
    else if(opr==3)
    {
        scanf("%lf%lf",&X,&Y);
        multiplication(X,Y);
    }
    else if(opr==4)
    {
        scanf("%lf%lf",&X,&Y);
        division(X,Y);
    }
    else
    {
        printf("Select correct Operator\n");
    }

    return 0;
}
