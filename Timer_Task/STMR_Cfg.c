#include "STMR.h"



/*
 * Module Version 1.0.0
 */
#define DIO_PBCFG_SW_MAJOR_VERSION              (1U)
#define DIO_PBCFG_SW_MINOR_VERSION              (0U)
#define DIO_PBCFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define DIO_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define DIO_PBCFG_AR_RELEASE_MINOR_VERSION     (0U)
#define DIO_PBCFG_AR_RELEASE_PATCH_VERSION     (3U)



/* Structure of Type "Timers_Config" that contains array of structures of type "Timer_Configuration" representing the configurations of each timer */
Timers_Config My_Configs =
{

	Timer0_Name,Timer0_ID,Timer0_Status,Timer0_Ticks,Timer0_Counter,Timer0_CallBack,
	Timer1_Name,Timer1_ID,Timer1_Status,Timer1_Ticks,Timer1_Counter,Timer1_CallBack,
	Timer2_Name,Timer2_ID,Timer2_Status,Timer2_Ticks,Timer2_Counter,Timer2_CallBack

};
