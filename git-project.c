#include<stdio.h>
#include<conio.h>

void open_serial(void);

int main()
{
int i=0;

for( i=0; i<10 ; i++)
printf("%d",i);

printf("ilk git deneme");

open_serial();


return 0;
}

void open_serial()
{
printf("serial port opening..");

}
