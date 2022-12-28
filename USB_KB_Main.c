//Mike Palladino's USB Keyboard
//
//Date: 12/27/22
///////////////////////////////////////////


#include "osc_config.h"
#include <pic18f4550.h>

void MSdelay(unsigned int);

void main()
{
    unsigned int duty_cycle;  
    OSCCON=0x72;         /* set internal clock to 8MHz */
    //TRISCbits.TRISC2=0;  /* Set CCP1 pin as output for PWM out */
    //PR2=199;             /* load period value in PR2 register */ 
    //CCPR1L=1;           /* load duty cycle of period */
    //T2CON=0;             /* no pre-scalar,timer2 is off */
    //CCP1CON=0x0C;        /* set PWM mode and no decimal value for PWM */
    //TMR2=0;
    //T2CONbits.TMR2ON=1;  /* Turn ON Timer2 */
    
    /*Setting Up LED Control on Port D as Output*/
    TRISDbits.TRISD0=0;
    TRISDbits.TRISD1=0;
    TRISDbits.TRISD2=0;
    TRISDbits.TRISD3=0;
    //TRISDbits.TRISD4=0;
    //TRISDbits.TRISD5=0;
    //TRISDbits.TRISD6=0;
    //TRISDbits.TRISD7=0;
    
        
    while(1)
    {
    LATDbits.LATD0 = ~LATDbits.LATD0;
    LATDbits.LATD1 = ~LATDbits.LATD1;
    LATDbits.LATD2 = ~LATDbits.LATD2;
    LATDbits.LATD3 = ~LATDbits.LATD3;
    //LATDbits.LATD4 = ~LATDbits.LATD4;
    //LATDbits.LATD5 = ~LATDbits.LATD5;
    //LATDbits.LATD6 = ~LATDbits.LATD6;
    //LATDbits.LATD7 = ~LATDbits.LATD7;
    MSdelay(1000);
    
   
    
        
        
    }
    
}

void MSdelay(unsigned int val)
{
     unsigned int i,j;
        for(i=0;i<=val;i++)
            for(j=0;j<165;j++);       
 }
 