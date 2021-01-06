#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<windows.h>

void main()
{
    int n,ascii[1000],z,temp,factor=1,sum[1000],total=0,value=0;
    char a[100],ar='A';

    printf("Enter in Char array\n");
    scanf("%s",&a);
   n= strlen(a);

    for(int i=0;i<n;i++)
    {
        ascii[i]= a[i];
        printf("Ascii value of %c is = %d\n",a[i],ascii[i]); 
    }

    for(int i=0;i<n;i++)
    {
        temp=ascii[i];

  while(temp){

      temp=temp/10;

      factor = factor*10;

  }


  while(factor>1){

      factor = factor/10;
      
      sum[i] = sum[i]+ascii[i]/factor;

      ascii[i] = ascii[i] % factor;

  }
    
    }

    for(int i=0;i<n;i++)
    {
        printf("Sum of Ascii value is = %d\n",sum[i]);
        total = total+sum[i];
    } 
    printf("Total of = %d\n",total);

    temp=total;

  while(temp){

      temp=temp/10;

      factor = factor*10;

  }

  while(factor>1){

      factor = factor/10;

      value = value + total/factor;

      total = total % factor;

  }

  printf("value = %d",value);

}
    