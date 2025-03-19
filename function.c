/*#include<stdio.h>

void printHello();//let compiler know that we have made a function and if making the func above the main func then no need to write this stement 

int main()
{
    printHello();  // function call
    return 0;
}

// function definition 
void printHello()
{
    printf("Hello");
}
    

// Write two function - one to print hello and second to print "Goodbye"

#include<stdio.h>

void printhel();
void printGood();


int main()
{

    printhel();
    printGood();
    
}

void printhel(){
    printf("Hello world\n");
}

void printGood()
{
    printf("GoodBye\n");
}
    */


#include<stdio.h>


void name();
void bon();


int main(){
   
   printf("enter f for french and i for indian");
   char ch;
   scanf("%s", &ch);

   if(ch == 'f'){
    bon();
   }

   if(ch == 'i'){
    name();
   }

   else
   {
    printf("Enter a valid option");

   }

   return 0;
}

void name()
{
    printf("namestey");
}

void bon()
{
    printf("Bonjour");
}