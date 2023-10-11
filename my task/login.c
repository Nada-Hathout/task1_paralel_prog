#include <stdio.h>
#include <string.h>
#include <stdbool.h>

 /// declare global variables /

    char userData[5][100] =
    {
    "nada",
    "salma",
    "mona",
    };

    char passwordData[5][100] =
    {
    "123",
    "1234",
    "12345",
    };

    struct login
    {
        /* data */
          char username[15]; 
          char password[12];
          bool user_is_Found ,wrong_Pass,user_isNot_Exist;
       
          
    };

 struct login p1;


 /// login function /////

 void login_function(){

  p1.user_is_Found=false;
  p1.wrong_Pass = false;
  p1.user_isNot_Exist=false;
  
    printf("...........................  login   ..........................");


    printf("\n * username * :"); 
    scanf("%s",&p1.username); 
 
    printf("* password * :"); 
    scanf("%s",&p1.password); 
    printf("\n.....................................................................\n");

////////////////////// comparing user inputs

for (int x = 0; x<5; x++)
{
if (strcmp(p1.username, userData[x]) == 0)
{
p1.user_is_Found = true;
if (strcmp(p1.password, passwordData[x]) == 0)
{
p1.wrong_Pass = false;
p1.user_isNot_Exist = false;
break;
}
else
{
p1.wrong_Pass = true;
}
}
else
{
p1.user_isNot_Exist = true;
}
}

//////////////////////

if (p1.user_is_Found && !p1.wrong_Pass)
{
 printf("Login Success! Welcome %s .\n",p1.username);
 printf(".....................................................................\n");

}

if (p1.wrong_Pass && p1.user_is_Found)
{
 printf("\nWrong password .");
 printf(".....................................................................\n");
}

if (p1.user_isNot_Exist && !p1.user_is_Found)
{
 printf("\n Sorry User not found \n");
 printf("\n.....................................................................\n");

}
 };


////////// register function  ////

void register_function() {
    printf(".....................   Registration   ...............................");

    printf( "\n Enter your name : " ); 
    scanf("%s", &userData[3]);
    
  
    printf( "Enter your password : " ); 
    scanf("%s", &passwordData[3]);
  
};
 


void main(){
  int choice;
  int i=0;
  
 while (i<10) {
        printf("\n-press 1 to register\n-press 2 to Login\n-press 3 to exit\nEnter your choice: ");
        scanf("%d", &choice);
        i++;
        switch (choice) {
            case 1:
                register_function() ;
                break;
            case 2:
                login_function();
                break;
            case 3:
                printf("\n");
                return 0;
            default:
                printf("Invalid choice. Try again.\n");
        }


}

}
































// #include <stdio.h> 
// #include <string.h> 
// #include <conio.h> 
 
// //created by chaitanya 
 
// int main() 
// {   
//     char names[2][20]={"nada","salma"};
//     int i;
//     printf("%s",names[1]);

//     struct login
//     {
//         /* data */
//           char username[15]; 
//           char password[12];
//     };
    
   
 
//  struct login p1;

//    printf("Enter your username:\n"); 
//     scanf("%s",&p1.username); 
 
//     printf("Enter your password:\n"); 
//     scanf("%s",&p1.password); 


//  for(i=0;i<2;i++){
  
 
//     if(strcmp(p1.username,"nada")==0){ 
//         if(strcmp(p1.password,"123")==0){ 
 
//         printf("\nWelcome.Login Success!"); 
//         break;
 
 
//         }else{ 
//     printf("\nwrong password");
//     break; 
// } 
//     }else{ 
//     printf("\nUser doesn't exist"); 
// } 
//  }
 
 
 
//     return 0; 
 
// } 
 