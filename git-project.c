#include<stdio.h>
#include<conio.h>

void open_serial(void);
void send_open_message(void);
void checking_issue2(void);

int main()
{
int i=0;

for( i=0; i<10 ; i++)
printf("%d",i);

printf("I am learning git");

open_serial();//opening serial communication
send_open_message(); //when open serial com,send ack
checking_issue2();  //checking issue2 and fixing function

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

void checking_issue2()
{
printf("checking for the issue2");
printf("I am so close to fix issue2");
printf("Fixed issue2");
}
