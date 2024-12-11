#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void password_gen(const unsigned int);

int main()
{
   //Header
   printf("Password Generator\n");
   printf("==================\n");

   //input variable for user input
   unsigned int input;
   do
   {
      printf("Enter number between 32 and 100: ");

      //synchronizes an output stream with the actual file
      fflush(stdin);
      //take input from the user
      scanf("%d",&input);

      //check the input is smaller then 32 or bigger then 100
      //and print warning for user
      if(input < 32 || input > 100)
         printf("Pls Enter between 32 and 100\n\n");

      //check the input is smaller then 32 or bigger then 100.
      //If yes, loop while correct input
   } while(input < 32 || input > 100);

   //print what user entered
   printf("You entered -> %d\n",input);

   //give input to the function and run
   password_gen(input);
}

void password_gen(const unsigned int number)
{
   //created srand() function for random number
   srand(time(0));

   //set min and max value
   unsigned int min = 32,max = 126;

   for(int i=0;i<number;i++)
   {
      //created letter variable for integer number
      unsigned int letter;
      //created password array with length of the input value from the user
      char password[number];

      //generate random number between 32 and 126. Then write it to letter variable
      letter = (rand() % (max - min + 1) + min);

      //check if previous or last second character is equal to actuell character.
      //if yes, generate random number and write it to letter variable
      if(password[i-1] == password[i])
         letter = (rand() % (max - min + 1) + min);
      else if(password[i-2] == password[i])
         letter = (rand() % (max - min + 1) + min);

      //convert letter variable to char and write it to index of the password variable
      password[i] = (char)letter;

      //print to the console the generated character
      printf("%c",letter);
   }
}
