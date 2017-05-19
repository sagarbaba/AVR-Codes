#define F_CPU 1000000
#include<avr/io.h>
#include<avr/interrupt.h>
#include<util/delay.h>
void buzzer_config()
{
    DDRA=0x04;
}

void buzzer_on()
{
    PORTA=0x04;
}
void buzzer_off()
{
    PORTA=0x00;
}
int main()
{   
    buzzer_config();
    while(1)
    {
        buzzer_on();
        _delay_ms(500);
        buzzer_off();
        _delay_ms(500);
    }
    
}


