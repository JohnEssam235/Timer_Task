#ifndef STMR_H
#define STMR_H

#include "STMR_Cfg.h"


/*************************/
/***********************/
/* module Data Types */
/**********************/
/***********************/

/* Type definition for timers IDs */
typedef int TimerID;

/* Type definition of struct used to define each timer(configurations of each timer) */
typedef struct
{
	 char name[10];
	 int id;
	 int status;
	 int basetime;
	 int counter;
	 void (* func)(void);
}Timer_Configuration;


/* Type Definition of struct contain array of structs of type Timer_Configuration "array of timers"  */
typedef struct
{
	Timer_Configuration Timers[Number_of_Timers];
}Timers_Config;


/****************************/
/***************************/
/******** Macros **********/
/*************************/
/**************************/
#define NULL_PTR          ((void *)0)


/******************************/
/****************************/
/* Functions Prototypes */
/****************************/
/*****************************/


/* Start Timer Function */
void Start_Timer(TimerID);

/* Reset Timer Function */
void ResetTimer(TimerID);

/* Get Status Function */
int GetStaus(TimerID);

/* Timer Increment Function*/
void Timer_Increment();

/* delay Function used to make delay */
void delay();

/* callback function of timer0 */
void func0();

/* callback function of timer1 */
void func1();

/* callback function of timer2 */
void func2();


/*************************/
/************************/
/* Timers Definitions  */
/************************/
/*************************/

/* Timer IDs Definitions */
#define ID0     0
#define ID1     1
#define ID2     2


/* Timer status definitions */
#define Idle       0
#define Finished   1
#define Running    2


/************************/
/***********************/
/* external variables */
/***********************/
/************************/

/* Extern the structure "My_Configs" which is located in the STMR_Cfg.c file */
extern Timers_Config My_Configs;

#endif
