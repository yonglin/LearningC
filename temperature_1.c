#include<stdio.h>
/*打印华氏温度对照表*/
#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
  float fahr;
  for (fahr = UPPER; fahr >=LOWER; fahr = fahr - STEP)
    printf("%3f %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
