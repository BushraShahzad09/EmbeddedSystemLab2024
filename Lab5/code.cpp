#include<LCD.h>

unsigned char x=0, y=0 ;

void main(void) {

LCD INIT();

while (1) {

y=0;

x=2;

LCD_WRITE("Ramsha",y,x);
 y=1;

LCD_WRITE ("21BCS066",y,x);

DELAY (1000);

}

}