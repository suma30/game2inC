#include <stdio.h>

int main()
{
  char y,c;
   srand (time(0));
 int num=rand()%100+1;
  if(num<41)
  {
    c='w';
  }
  else if(num<73)
    {
    c='g';}
  else
  { c='s';}

  
  printf("enter your choice\n");
  printf("choose 's' for snake or 'w' for water or 'g' for gun\n");
  scanf("%c",&y);


  if(y==c)
  {printf("GAME DRAWN as ");}
  else if(y=='s'&&c=='w'||y=='w'&&c=='g'||y=='g'&&c=='s')
  { printf("YOU WON THE GAME as ");}
  else if(y=='s'&&c=='g'||y=='w'&&c=='s'||y=='g'&&c=='w')
    {printf("YOU LOST THE GAME as ");}
   
  else
  { printf("please choose only from the above options\n"); exit(0);}
   printf("you chose %c and computer chose %c",y,c);
  
}