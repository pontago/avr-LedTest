
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h> 
#include <stdbool.h>

int main(void) {
  DDRD = 0b00011000;
  bool flag = false;

  for (;;) {
    char i;
    int r = rand() % 10 + 1;

    for(i = 0; i < r; i++) {
      _delay_ms(30);
    }

    PORTD = flag ? _BV(PD3) : _BV(PD4);
    flag = !flag;
  }

  return 0;
}
