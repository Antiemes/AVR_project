#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define	LED_PIN                  PB2

int main(void)
{
  DDRB = _BV(LED_PIN);
  PORTB &= ~_BV(LED_PIN);

  _delay_ms(500);

  while (1)
  {
    PORTB |= _BV(LED_PIN);
    _delay_ms(200);
    PORTB &= ~_BV(LED_PIN);
    _delay_ms(200);
  }
}
