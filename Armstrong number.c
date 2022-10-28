#include<stdio.h>
#include<math.h>
#include<conio.h>
void main(){
 int d,sum,temp1,temp2,count=0,a,b;
  printf("Enter the number:- ");
  scanf("%d",&b);


  for(count=0,temp1=b;temp1>0;count++){
    a=temp1%10;
    temp1/=10;
  }

   for(temp2=b,sum=0;temp2>0;){
    d=temp2%10;
    sum+=pow(d,count);
    temp2/=10;
   }
   if(b==sum){printf("Yes");}
   else{printf("No");}
}
