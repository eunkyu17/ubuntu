#include <avr/io.h>
#include <util/delay.h>

int main()
{
    while(1) 
   {
       DDRC = 0x03; // 0011 0,1 을 출력 모드로 한다.
       PORTC = 0x0F; // 111 0, 1, 2, 3 번을 1(ON) ->5V 출력시킴.
       _delay_ms(500);

       PORTC = 0x00; // 000 0, 1, 2, 3 번을 0(OFF) -> 0v 출력시킴.
        _delay_ms(500);
   }

    return 0;

}