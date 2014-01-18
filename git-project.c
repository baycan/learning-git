#include<stdio.h>
#include<conio.h>

void open_serial(void);
void send_open_message(void);
void checking_issue1();

int main()
{
int i=0;

for( i=0; i<10 ; i++)
printf("%d",i);

printf("I am learning git");

open_serial();//opening serial communication
send_open_message(); //when open serial com,send ack

checking_issue1();  //fixing something about issue1

return 0;
}

void open_serial()
{
printf("serial port opening..");

}

void send_open_message()
{

printf("Serial com now opened");
}
void checking_issue1()
{

printf("issue1 problem countinue");
printf("so close to fix issue1");
printf("I fixed the issue1");
}
