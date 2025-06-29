#include <stdio.h>

  void  convertbinary(int n)
  {
      if (n==0)
      {
          return;
      }
      convertbinary(n/2);//lay phan nguyen
      //inra phan du
      printf("%d",n%2);
  }


int main(void)
{
    int n;
    printf("nhap so nguyen:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("so ko hop le");
        return 1;
    }
    convertbinary(n);
    return 0;
}