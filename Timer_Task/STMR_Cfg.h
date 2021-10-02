

#ifndef PORT_CFG
#define PORT_CFG



/*
 * Autosar Module Version 1.0.0
 */
#define DIO_CFG_SW_MAJOR_VERSION              (1U)
#define DIO_CFG_SW_MINOR_VERSION              (0U)
#define DIO_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define DIO_CFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define DIO_CFG_AR_RELEASE_MINOR_VERSION     (0U)
#define DIO_CFG_AR_RELEASE_PATCH_VERSION     (3U)

/* Number of Timers */
#define Number_of_Timers       3


/* Configurations Passed to the array of structures "My_Configs" in STMR_Cfg.c  */
#define Timer0_Name            "Timer0"
#define Timer0_ID              ID0
#define Timer0_Status          Idle
#define Timer0_Ticks           10
#define Timer0_Counter         0
#define Timer0_CallBack        func0   /* could be configured as "NULL_PTR" if you dont want to callback a function when the Timer finishes Counting*/

#define Timer1_Name            "Timer1"
#define Timer1_ID              ID1
#define Timer1_Status          Idle
#define Timer1_Ticks           20
#define Timer1_Counter         0
#define Timer1_CallBack        func1

#define Timer2_Name            "Timer2"
#define Timer2_ID              ID2
#define Timer2_Status          Idle
#define Timer2_Ticks           30
#define Timer2_Counter         0
#define Timer2_CallBack        func2





#endif





