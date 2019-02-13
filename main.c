#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a;
    float b;
    float c;
    float d;
    float t;
    float t1;
    float t2;
    int i;
    for(i=0;i<1;){
    printf("Enter a: ");
    scanf("%f", &a);
    if(a==0){
        printf("Enter a Non Zero Value Please!\n");
    }
    else{
        i=5;
    }
    }
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    printf("%.3fx^2+%.3fx+%.3f\n",a,b,c);
  d = b * b - 4 * a * c;

  if(d < 0){
    printf("Roots are Imaginary.\n");

    printf("Roots are: ");
    printf("%.3f%+.3fi",-b/(2*a),sqrt(-d)/(2*a));
    printf(", %.3f%+.3fi",-b/(2*a),-sqrt(-d)/(2*a));

    return 0;
  }
  else if(d==0){
   printf("One Real Root\n");

   t1 = -b /(2* a);
   printf("Root is: %.3f ",t1);

   return 0;
  }
  else{
   printf("Roots are real numbers.\n");

   t1 = ( -b + sqrt(d)) / (2* a);
   t2 = ( -b - sqrt(d)) / (2* a);
   printf("Roots of quadratic equation are: %.3f , %.3f",t1,t2);
  }
    return 0;
}
