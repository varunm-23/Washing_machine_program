#include <xc.h>
#include "main.h"

extern unsigned char min, sec;
void __interrupt() isr(void)
{
    static unsigned int count = 0;
    
    if (TMR2IF == 1)
    {    
        if (++count == 20000) // 1sec no of o.v=20000 -> 1 sec
        {
            count = 0;
            if(sec > 0)
            {
                sec--;
            }
            else if(sec == 0 && min > 0)
            {
                min--;
                sec = 59;
            }
            
            
        }
        
        TMR2IF = 0;
    }
}