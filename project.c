// petrol pump system in c
/*

welcome to bharat petrol pump
------------------------
choose one option below-->
<1>. check avaliable amount
<2>. import oil
<3>. export oil
<4>. exit
------------------------
do you want to continue
<1> yes
<2> no
-------------------------

*/

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>


//functions
void mainmenu();
void checkBalance(int balance);
int import_oil(int balance);
int export_oil(int balance);
void exit_menu();
void error_message();

int main(){

printf("==================================== \n");
// variable

int balance = 100;
int option;
bool again = true;
int choose;

while(again){

 mainmenu();
 printf("your selection \n");
 scanf("%d",&option);

 switch(option){

   case 1:
   checkBalance(balance);
   break;

   case 2:
   balance = import_oil(balance);
   break;

   case 3:
   balance = export_oil(balance);
   break;

   case 4:
   exit_menu();
   break;

   default:
   error_message();
   break;




 }
printf("================================\n");
 printf("do you want to continue? \n");
 printf("<1> yes \n");
 printf("<2> no \n");
 scanf("%d",&choose);

 if(choose == 2){
   again = false;
   exit_menu();
 }



}

return 0;

}

// Functions

void mainmenu(){
 printf("======bharat petrol=========\n");
 printf("choose one of the options \n");
 printf("<1> check balance \n");
 printf("<2> import oil \n");
 printf("<3> export oil \n");
 printf("<4> exit \n");

}

void checkBalance(int balance){
  printf("you choose to check current oil \n");
  printf("current oil is %d \n", balance);

}



int import_oil(int balance){

   int import_amount;
   printf("you choose to import oil \n");
   printf("your current balance is %d",balance);
   printf("enter amount to add oil \n");
   scanf("%d",&import_amount);

   balance += import_amount;
   printf("your new balance is %d \n", balance);
   return balance;


}

int export_oil(int balance){

   int export_amount;
   bool back = true;

   printf("you choose to export oil \n");
   printf("your current oil amount is %d \n",balance);

   while(back){

     printf("choose amount to export");
     scanf("%d", &export_amount);

   if(export_amount < balance){
     back  = false;
     balance -= export_amount;
     printf("you export amount %d \n",export_amount);
     printf("your new balance is %d \n",balance);
   }
   else{
     printf("you don't have enough amount of oil to export \n");
   }
   return balance;
}

}
void exit_menu(){
  printf("thanku \n");

}






void error_message(){
  printf("please select valid input \n");
  printf("thanku\n");


}
