#include<math.h>
#include<stdio.h>
main(){
   int n,i;
   float x,y,m,c,d;
   float sumx=0,sumxsq=0,sumy=0,sumxy=0;
   printf("enter the number of values for n:");
   scanf("%d",&n);
   char file = fopen("data.txt", "r");
   while (EOF != fscanf(file, "%c  %c", &x,&y))
   {
      sumx=sumx+x;
      sumxsq=sumxsq+(x*x);
      sumy=sumy+y;
      sumxy=sumxy+(x*y);}

   d=n*sumxsq-sumx*sumx;
   m=(n*sumxy-sumx*sumy)/d;
   c=(sumy*sumxsq-sumx*sumxy)/d;
   printf("M=%f\tC=%f\n",m,c);
}
