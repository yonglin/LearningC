#include<stdio.h>
main()
{
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  printf("print Fahrenheit-Celsius tabel\n");
  printf("\n");
  while(fahr <= upper)
  {
	celsius = 5 * (fahr-32) /9 ;
	printf("%3.0f\t%6.1f\n", fahr, celsius);
	fahr = fahr + step;
  }
}

