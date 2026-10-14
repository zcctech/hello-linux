#include"proc.h"
#include<string.h>
#include<unistd.h>
#include<stdio.h>
#define thechar '='
void progressbar()
{
      char progress[101];
      int count=0;
      memset(progress,0,sizeof(progress));
      char a[6] ="\\|-|/\n";
      while(count<=100)
      {


          printf("[%-100s]""[%d%%]""[%c]\r",progress,count,a[count%(sizeof(a)-1)]);
          fflush(stdout);
          
          progress[count]=thechar;
          count++;
          usleep(50000);


      }
printf("\n");

}
