#include <stdio.h>
#include <stdlib.h>
#include "STMR.h"

/****************************/
/****************************/
/* Functions Implementation */
/****************************/
/*****************************/

/************************************************************************************
* Description: Function Used to increment the Timer Counter and when the timer counter
 reaches the periodicity time or the base time, A callback function should be called
 and the counter should be set to zero
* Parameters : None
* Return value: None
************************************************************************************/
void Timer_Increment()
{
	for(int i=0; i < Number_of_Timers ; i++)
	{
		if((My_Configs.Timers[i].status) == Running)
		{
			(My_Configs.Timers[i].counter)++;
			if((My_Configs.Timers[i].counter) == (My_Configs.Timers[i].basetime))
			{
			    My_Configs.Timers[i].counter = 0;
                if(My_Configs.Timers[i].func != NULL_PTR)
                {
                    My_Configs.Timers[i].func();
                }
			}
		}
	}

}


/************************************************************************************
* Description: Function Used to make a delay
* Parameters : None
* Return value: None
************************************************************************************/
void delay()
{
    for(int i=0;i<10000;i++)
    {
        for(int j=0;j<10000;j++);
    }
}

/************************************************************************************
* Description: Timer0 Callback Function
* Parameters : None
* Return value: None
************************************************************************************/
void func0()
{
   printf("TIMER0\n");
}

/************************************************************************************
* Description: Timer1 Callback Function
* Parameters : None
* Return value: None
************************************************************************************/
void func1()
{
  printf("TIMER1\n");
}

/************************************************************************************
* Description: Timer2 Callback Function
* Parameters : None
* Return value: None
************************************************************************************/
void func2()
{
   printf("TIMER2\n");
}


/************************************************************************************
* Description: Function used to Start the Timers, It makes the status as "Running"
and It initializes the Counter with "0"
* Parameters : TimerID
* Return value: None
************************************************************************************/
void Start_Timer(TimerID id)
{
   My_Configs.Timers[id].status = Running;
   My_Configs.Timers[id].counter = 0;
}


/************************************************************************************
* Description: Function used to Reset the Timers, It makes the status as "Idle"
and It Sets the Counter with "0"
* Parameters : TimerID
* Return value: None
************************************************************************************/
void ResetTimer(TimerID id)
{
   My_Configs.Timers[id].counter = 0;
   My_Configs.Timers[id].status = Idle;
}

/************************************************************************************
* Description: Function used to get the status of the Timer
* Parameters : TimerID
* Return value: int
************************************************************************************/
int GetStatus(TimerID id)
{
    return (My_Configs.Timers[id].status);
}
