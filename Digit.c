#include<stdio.h>
intsum of Digits(int num);
int main()
{  
  int num,sum;
  printf("Enter any number to find sum of digits");
  scanf("%d,&num);
        sum=sum of digits(num);
        printf("sum of digits of %d=%d",num,sum);
        return 0;
        }
        int sum of Digits (intnum)
        {
          if(num==0)
            return0;
          return((num%10) +sum of Digits(num/10));
