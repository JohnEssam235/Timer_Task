#include <stdio.h>
#include <stdlib.h>
#include "STMR.h"


int main()
{
    TimerID t1 = 0;
    TimerID t2 = 1;
    TimerID t3 = 2;
    Start_Timer(t1);
    Start_Timer(t2);
    Start_Timer(t3);

    int status0 = GetStatus(t1);
    int status1 = GetStatus(t2);
    int status2 = GetStatus(t3);

    if(status0 == Running)
    {
        printf("Timer0 is Running\n");
    }

    if(status1 == Running)
    {
        printf("Timer1 is Running\n");
    }

    if(status2 == Running)
    {
        printf("Timer2 is Running\n");
    }


    while(1)
    {
        Timer_Increment();
        delay();
    }
}
