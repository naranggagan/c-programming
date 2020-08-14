#include<stdio.h>
#include<stdlib.h>

struct _retire_info
{int months;
 double contribution;
 double rate_of_return;
};
typedef struct _retire_info retire_info;

int yearteller(int months)
{
return (months%12);
}

int monthteller(int months)
{
return (months/12);
}

void printPassbook(int i,double initial,int startAge)
{
int ageT= startAge+i; 
int a=yearteller(ageT);
int b=monthteller(ageT);
printf("Age %3d month %2d you have $%.2lf\n",b,a,initial);
}

void retirement (int startAge, double initial, retire_info working, retire_info retired){
 
 for(int i=0;i<(working.months+retired.months);i++)
{
  if(i==0) {
   printPassbook(i,initial,startAge);}
  
  else if(i<=working.months)
  {
   initial = (initial * working.rate_of_return) + working.contribution + initial;
   printPassbook(i,initial,startAge);
  }
  else
  {
   initial = (initial * retired.rate_of_return) + retired.contribution + initial;
   printPassbook(i,initial,startAge);
  }

}
  
}
int main()
{
int startAge=327;
double initial=21345;
retire_info working={489 , 1000.0 , 0.00375};
retire_info retired={384 , -4000.0 , (0.01/12)};

retirement(startAge, initial, working, retired);
 
return 0;

}
