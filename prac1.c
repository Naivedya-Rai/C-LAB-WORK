#include <stdio.h>
#include <math.h>
 
int main(void) {
 
  float a,b,c; // ax^2 + bx + c = 0
 
  float d,x1,x2; // discriminant, first root, second root
 
  printf("Enter a b c of the equation: ");
  scanf("%f %f %f",&a,&b,&c);
 
  d = pow(b,2) - 4*a*c;
 
  if (d < 0) {
 
    float real, img;
 
    real = -b/(2*a);
 
    img = sqrt(-d)/(2*a);
 
    printf("The roots are imaginary\n");
 
    printf("The roots are x1 = %.2f + %.2fi\nx2 = %.2f - %.2fi",real,img,real,img);
 
  }
  else if (d == 0) {
 
    x1 = -b/(2*a);
 
    printf("Discriminant = 0\nThe roots are equal = %.2f",x1);
 
  }
  else {
 
    x1 = (-b + sqrt(d))/4;
    x2 = (-b - sqrt(d))/4;
 
    printf("The root are\nx1 = %.2f\tx2 = %.2f",x1,x2);
 
  }
 
  printf("\n");
  return 0;
 
}
 
