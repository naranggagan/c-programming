#include<stdio.h>
#include<stdlib.h>

int yearteller(int months)
{
return (months%12);
}

int monthteller(int months)
{
int b=months/12;
return b;
}

/*calculator()
{
int a=yearteller();
int b=monthteller();
printf("Age %3d month %2d you have $%.2lf\n");
}
*/

struct _retire_info
{int months;
 double contribution;
 double rate_of_return;
};
typedef struct _retire_info retire_info;

void retirement (int startAge, double initial, retire_info working, retire_info retired)
{
int a=yearteller(startAge);
int b=monthteller(startAge);
printf("Age is %3d month %2d you have $%.2lf\n",b,a);
  
}

int main()
{
int startAge=327;
double initial=21345;
retire_info working={489 , 1000.0 , 0.004};
retire_info retired={384 , -4000.0 , 0.001};

retirement(startAge, initial, working, retired);

}
