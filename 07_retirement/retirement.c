#include<stdio.h>
#include<stdlib.h>

int yearteller(int months)
{
return (months%12);
}

int monthteller(int months)
{
return (months/12);
}

printPassbook(int i,double initial)
{
int ageT= startAge+i; 
int a=yearteller(ageT);
int b=monthteller(ageT);
printf("Age %3d month %2d you have $%.2lf\n",a,b,initial);
}


struct _retire_info
{int months;
 double contribution;
 double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement (int startAge, double initial, retire_info working, retire_info retired)
{
 for(int i=0;i<(working.months+retired.months);i++)
{
  if(i==0) {
   printPassbook(i,initial);}
  else if(i<retired.months)
  {
   initial = (initial * working.rate_of_return) + working.contribution + initial;
   printPassbook(i,initial);
  }
  else
  {
   initial = (initial * retired.rate_of_return) + retired.contribution + initial;
   printPassbook(i,initial);
  }

}
  
}
int main()
{
int startAge=384;
double initial=21345;
retire_info working={489 , 1000.0 , 0.004};
retire_info retired={384 , -4000.0 , 0.001};

retirement(startAge, initial, working, retired);

}
