#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
struct mulplay
{
  char myhandsign[10],ohandsign[10];//myhandds=player1,ohandsign=player2
  int mystatus;//mystatus=player1
  int ostatus;//ostatus=player2
}d[10],dd;
//linking pavan function from main
extern pavan(char A[]);
//linking clrscr() functions which clears the screen 
extern void clrscr();
//for multiple players taking *tot=total winpoints
int mulp(int *tot)
{ //localvariables includes counter variables
  int j=0,w=0,i=0,moves;
  char k,pass[1];
  int pos=0,c; 
  char ch,ch2[2];
  int owins=0,mywins=0;
  char pass2[1];
  int pos2=0;
  int c2;
  //printf("%d",*tot);
  int win=0;
  while(1)
  {
  i++;// to keep track of index value
  pos=0;
  c=0;
  
  pos2=0;
  c2=0;

  printf("\n\t\t\t\t\t\t----------------------------------------------");
  printf("\n\t\t\t\t\t\tEnter you choice \n\t\t\t\t\t\t1.Stone/Rock\n\t\t\t\t\t\t2.Paper\n\t\t\t\t\t\t3.Scissor : ");
  printf("\n\t\t\t\t\t\t----------------------------------------------\n");
  printf("\n\t\t\t\t\t\tplayer 1 entry:");
  //scanf("%d",&dd.mystatus);
  //to now allow the player 2 to see the handsign(choice)of player1 
  while(((c=getch())!='\n')&& pos<1){
  pass[pos++]=c;
  putchar('*');
  }
//puts(pass);
  //converting the string to integer
  dd.mystatus = atoi(pass);
  printf("\n\t\t\t\t\t\tplayer 2 entry");
  //scanf("%d",&dd.ostatus);

//to now allow the player 1 to see the handsign(choice)of player2
while(((c2=getch())!='\n')&& pos2<1){

pass2[pos2++]=c2;
//replacing using *
putchar('*');

}

//puts(pass);
dd.ostatus = atoi(pass2);
  clrscr();
  //invalid choice
  if(dd.mystatus>3 || dd.ostatus>3 ||dd.mystatus<1 ||dd.ostatus<1)
  {
    printf("\t\t\t\t\t\tInvalid Move\n");
  }
  //for computer option [1-3]
  
  //printf("Computer Move: %d\n",ss.comstatus);
  //to initialize the hand sign t
  if(dd.mystatus==1 ){ strcpy(d[i].myhandsign,"Rock");}
  else if(dd.mystatus==2 ) {strcpy(d[i].myhandsign,"Paper");}
  else if(dd.mystatus==3 ){strcpy(d[i].myhandsign,"Scissor");}
  else {printf("\ninvalid");strcpy(d[i].myhandsign,"None");}
  if(dd.ostatus==1 ) {strcpy(d[i].ohandsign,"Rock");}
  else if(dd.ostatus==2 ){strcpy(d[i].ohandsign,"Paper");}
  else if(dd.ostatus==3 ) {strcpy(d[i].ohandsign,"Scissor");}
  else {printf("\ninvalid");strcpy(d[i].ohandsign,"None");}
     //no of wins count
  if(dd.mystatus==1 && dd.ostatus==2){system("color 04");owins++; w=1;}
  if(dd.mystatus==2 && dd.ostatus==3){system("color 04");owins++;w=1;}
  if(dd.mystatus==3 && dd.ostatus==1){system("color 04");owins++; w=1;}
  if(dd.mystatus==2 && dd.ostatus==1){system("color 02");mywins++;w=0;}
  if(dd.mystatus==3 && dd.ostatus==2){system("color 02");mywins++;w=0;}
  if(dd.mystatus==1 && dd.ostatus==3){system("color 02");mywins++;w=0;}
  //to quit if reach max wins  
   if(dd.mystatus==dd.ostatus)
  {
    printf("\t\t\t\t\t\tYour Both have Same Brains\n");
  }
  //to display the players wins
  if(owins>mywins && owins==*tot){system("color 04");printf("\n\t\t\t\t\t\tPlayer2 wins");}
  if(owins<mywins && mywins==*tot){system("color 02");printf("\n\t\t\t\t\t\tPlayer1 wins ");}
  if(owins>mywins && owins<*tot ){system("color 04");printf("\n\t\t\t\t\t\tPlayer2 wins atb for next round ");}
  if(owins<mywins && mywins<*tot){system("color 02");printf("\n\t\t\t\t\t\tPlayer1 wins atb for next round");}

  //displaying info handsigns and their points 
  printf("\n\t\t\t\t\t\t-----------------------------------------\n");
  printf("\t\t\t\t\t\tPoints to Win : %d\n",*tot);
  printf("\t\t\t\t\t\tPlayer 1\tPlayer 2");
  printf("\t\t\t\t\t\t\n\t\t\t\t\t\t%s\t |\t%s",d[i].myhandsign,d[i].ohandsign);
  printf("\n\t\t\t\t\t\t-------------------------------------");
  printf("\n\t\t\t\t\t\tPoints\n\t\t\t\t\t\tPlayer1\t\tplayer2");
  printf("\n\t\t\t\t\t\t%d\t|\t\t%d",mywins,owins);
  if(owins==mywins){system("color 03");printf("\n\t\t\t\t\t\tUr both are in Tie");}
  printf("\n\t\t\t\t\t\t------------------------------------------");
 
  if(owins==*tot || mywins==*tot){break;}
  
  }
  clrscr();
  //to make the user know which player on and lost
  //if player2>player1 and if the player2 reach the win points then player 2 is the winner 
  if((owins>mywins && owins==*tot)||(owins>mywins ) ){system("color 04");printf("\n\t\t\t\t\t\tPlayer2 wins");}
  //if player1>player2 and if the player1 reach the win points then player 1 is the winner 
  if((owins<mywins && mywins==*tot)||(owins<mywins) ){system("color 02");printf("\n\t\t\t\t\t\tPlayer1 wins");}
  printf("\n\t\t\t\t\t\t---------------------------------------");
  printf("\n\t\t\t\t\t\tpress 1 to show the moves or Your Game Play \n\t\t\t\t\t\tAny no to Quit : ");
  scanf("%d",&moves);//taking input from user after the game is he wants to know the moves
  if(moves==1)
  { printf("\n\t\t\t\t\t\tMove\tPlayer1 move\tPlayer2 move");
    for(j=0;j<=i;j++)
  {
    printf("\t\t\t\t\t\t%d\t\t%s\t\t%s\n",j,d[j].myhandsign,d[j].ohandsign);
  }}
  return win;
}
