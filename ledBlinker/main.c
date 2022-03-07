#include  <msp430g2553.h>
volatile unsigned int i = 0;
void main(void)
{
    WDTCTL = WDTPW + WDTHOLD;
    // Set direction to output
    P1DIR = 0x41;

    // Initialize LEDs to off
    P1OUT = 0x01;

    for (;;)
    {
        P1OUT ^= 0x41;

        for(i=0; i< 60000; i++);
    }
}
