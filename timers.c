#include <xc.h>


void init_timer2(void)
{
    

    /* Loading the Pre Load register with 250 */
    PR2 = 250;  //TMR2 -> 0 to 250
    
    /* The timer interrupt is enabled */
    TMR2IE = 1;
       
    /* Switching OFF on the Timer2 */
    TMR2ON = 0;
}