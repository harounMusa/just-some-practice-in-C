#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct Player 
{
    char name[25];
    int score;
};

enum Day {Sun, Mon, Tue, Wen, Thu, Fri, Sat};

int main() {

    /*
    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("Enter the Radius: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("circumference: %lf\n", circumference);
    printf("The Area of the circul %lf", area);
    */

    /*
    double x;
    double y;
    double z;
    printf("\nInter x: ");
    scanf("%lf", &x);
    
    printf("\nInter y: ");
    scanf("%lf", &y);

    z = sqrt((pow(x, 2) + pow(y, 2)));
    printf("\nThe z is equal = %.1lf", z);
*/


/*

    char operator;
    double firstNum;
    double secondNum;
    double result;

    printf("################ WELCOM to simple Calculater ################\n");

    printf("\nEnter the Operator[+][-][*][/]: ");
    scanf("%c", &operator);
    
    printf("\nEnter the first Number: ");
    scanf("%lf", &firstNum);

    printf("\nEnter the second Number: ");
    scanf("%lf", &secondNum);

    switch(operator){
        case '+':
            result = firstNum + secondNum;
            break;
        case '-':
            result = firstNum - secondNum;
            break;
        case '*':
            result = firstNum * secondNum;
            break;
        case '/':
            result = firstNum / secondNum;
            break;
        default:
            printf("Invalid Oprater...");
    }

    printf("The Result is %lf", result);
*/


/*
printf("################ WELCOM to display rectangular ################\n");
    int rows;
    int columns;
    char symbol;

    printf("\nEnter rows number: ");
    scanf("%d", &rows);

    printf("\nEnter columns number: ");
    scanf("%d", &columns);

    getchar();

    printf("\nwhat symbol you want to display? ");
    scanf("%c", &symbol);
    

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }
*/

    /*
    printf("################ WELCOM to Number Guessing Game ################\n");
    srand(time(0));

    int min = 0, max = 100;
    int randomNum = rand() % (max - min + 1) + min;
    int number;

    do{
        printf("\nEnter a guess: ");
        scanf("%d", &number);
        if(randomNum == number) 
        {
            printf("\nYou Win <3 <3");
            break;
        }
        else if(randomNum < number) 
        {
            printf("Hihger\n");
        }
        else if(randomNum > number) 
        {
            printf("Lower\n");
        }
    }while(randomNum != number);
    */

   /*

   struct Player player1;
   struct Player player2;

   strcpy(player1.name, "Haroun");
   player1.score = 40500;
   strcpy(player2.name, "Ahmad");
   player2.score = 35000;

   printf("\nPlayer Name is %s and his score is %d", player1.name, player1.score);
   printf("\nPlayer Name is %s and his score is %d", player2.name, player2.score);

   enum Day today = Fri;

   printf("\n %d ", today);
   */

/*
  int score = 450;
  int *pScore = &score;

  printf("the value score: %d\n", score);
  printf("the adress of score: %d\n", &score);

  printf("the value pScore: %d\n", *pScore);
  printf("the adress pScore: %d\n", pScore);
*/

    FILE *pFile = fopen("test.txt", "r");

    // fprintf(pFile, "\nHello world again, i hope you doing great, successfully");
    char buffer[255];
    while(fgets(buffer, 255, pFile) != NULL)
    {
    printf("%s", buffer);
    }

    fclose(pFile);


    return 0;
}