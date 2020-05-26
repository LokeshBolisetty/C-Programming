#include<stdio.h>
void main()
{   
    int N,temp;
    char again;
    while(1)
    {
      scanf("%d",&N);
      if(N>10)  
       {
          if(N%2==0)
            {
              N--;
              printf("Computer wins the toss and plays first\nComputer picked 1 matchsticks\nRemaining: %d\n",N);
              while(N>1)
                {
                    scanf("%d",&temp);
                    if(temp>=1&&temp<=4)
                    {
                      N=N-temp;
                      if(N==1)
                      {
                        break;
                      }
                      if(N<1)
                      {
                        printf("Invalid Pick");
                        continue; 
                      }
                      if(N%2==0)
                      {
                          N--;
                          printf("Computer picked 1 matchsticks\nRemaining: %d\n",N);
                      }
                      else
                      {
                          N=N-2;
                          printf("Computer picked 2 matchsticks\nRemaining: %d\n",N); 
                      }
                    }
                    else
                      printf("Invalid pick\n");

                }
            }

          else
            {
              printf("Player wins the toss and plays first\n");
              while(N>1)
              {
                scanf("%d",&temp);
                if(1<=temp&&temp<=4)
                {
                  N=N-temp;
                  if(N==1)
                  {
                    break;
                  }
                  if(N<1)
                  {
                    printf("Invalid Pick");
                    continue;
                  }
                  if(N%2==0)
                    {
                      N--;
                      printf("Compter picked 1 matchsticks\nRemaining: %d\n",N);
                    }
                  else
                    {
                      N=N-2;
                      printf("Compter picked 2 matchsticks\nRemaining: %d\n",N); 
                    }
                }
                else
                  printf("Invalid pick\n");
                }
          }
          printf("Computer Wins!\n");
          printf("Do you want to play again?(y/n)\n");
          while(1)
           {
              scanf("%c",&again);
                if(again=='Y'||again=='y')
                {
                    ;
                }
                else if(again=='N'||again=='n')
                {
                    break;
                }
                else
                {
                    printf("Please answer in y or n\n");
                }
            }
          if(again=='y'||again=='Y')
          {
              ;
          } 
          else if(again=='N'||again=='n')
          {
              break;
          }         
        }
    
      else
      {
          printf("Invaid Input. Number of matchsticks must be greater than 10");
      }
    }
}