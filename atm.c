#include<conio.h>
#include<stdio.h>
void atm();
void atm1();
int main()
{
    printf("Welcome to SBI ATM!\n");
    atm();
    getch();
}
void atm()
{
    int pin,secret_pin=1234;
    printf("Enter your pin\n");
    scanf("%i",&pin);
    if (pin==secret_pin)
    {
        char c;
        printf("Correct pin!\n");
        printf("Press '-' for cash withdrawl\tPress '+' for cash deposit\tPress '|' for Balance Enquiry\n");
        scanf("%c",&c);
       atm1();
    }
    else if (pin!=secret_pin)
    {
        printf("WRONG PIN!");
    }
}
void atm1()
{
    char c;
     switch (c)
        {
            case '-':
            printf("Enter the amount you want to withdrawl\nLIMIT IS RS12000\n");
            break;
            case '+':
            printf("Enter the amount you want to deposit\n FOR DEPOSITING MORE THAN RS49000 YOU NEED PAN CARD\n");
            break;
            case '|':
            printf("YOUR BALANCE IS *******\n");
            break;
        }
}
