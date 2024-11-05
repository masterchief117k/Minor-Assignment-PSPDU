#include <stdio.h>
int main() {
    double midx ,m,midy, x,y,x1,y1,slope,yinter;
    printf("Enter the value of first coordinates (x , y) ");
    scanf("%lf %lf",&x,&y);
    printf("Enter the value of second coordinates (x , y) ");
    scanf("%lf %lf",&x1,&y1);
    slope = (y1-y)/(x1-x);
    midx = (x1+x)/2;
    midy= (y1+y)/2;
    m=-1*(1/slope);
    yinter = midy-m*midx;
    printf("y=%lfx+%lf",m,yinter);
}