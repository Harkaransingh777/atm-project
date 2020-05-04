#include<stdio.h>
int question1(int);
int question2(int);
int question3(int);
int main(void)
{
    char name[100],v,feed[255];
    int s=0,mul1,mul2,mul3,a,b,c;
    printf("******************\tWelcome to HKS Gk Quiz\t******************\n");
    printf("You will be given 10 minutes to attend 3 questions\nSo Best of Luck!\n Enter your name\n");
    scanf("%s",&name);
    printf("So, let's get started with the first question...\n");
    mul1=question1(a);
    mul2=question2(b);
   mul3= question3(c);
    printf("You have completed the Quiz ........ Congo\n");
    printf("Your Final Score is=%i",s);
    printf("Want to give any feedback?\n Choose 'Y' for yes \n Choose 'N' for No!\n");
    scanf("%c",&v);
    switch(v)
    {
        case 'y':
        printf("*\tENTER YOUR FEEDBACK BELOW\n");
        scanf("%s",&feed);
        printf("Thank you for your effort!\t:)");
        break;
        case 'n':
        printf("Okay! Bye...\t:)")
    }
}
int question1()
{
    long int k,l=1350000000;
    int s=0,a;
    printf("Question 1:\t What is the population of India.\n");
    scanf("%ld",&k);
    if (k==l)
    {
        printf("Your Answer is correct\n");
        s=s+1;
        printf("Your Score is=%i",s);
    }
    else
    {
        printf("Wrong Answer!\n Correct Answer is =%i\n",k);
        printf("Your score is= %i",s);
    }
    return(mul1);
}
int question2()
{
    int u,i=29;
    printf("Question 2:\tHow many States are there in India?\n");
    scanf("%i",&u);
    if (u==i)
    {
        printf("Your Answer is correct\n");
        s=s+1;
        printf("Your Score is=%i",s);
    }
    else 
    {
         printf("Wrong Answer!\n Correct Answer is =%i\n",i);
        printf("Your score is= %i",s);
    }
    return(mul2);
}
int question3()
{
    int p,f=11;
    printf("Question 3:\tAbdul Kalam was the __th president of india?/n");
    scanf("%i",&p);
    if (p==f)
    {
         printf("Your Answer is correct\n");
        s=s+1;
        printf("Your Score is=%i",s);
    }
    else
    {
     printf("Wrong Answer!\n Correct Answer is =%i\n",i);
        printf("Your score is= %i",s);   
    }
    return(mul3);
}
