/**
 * @file main.c
 * @author goutham
 * @brief 
 * @date 2022-03-06
 * 
 * @copyright Copyright (c) 2022
 * 
 */


#include  "LCD/LCD.h"
#include  "ultrasonic.h"

int main(){

lcd_init();
ultrasonic_init();
sei();

lcd_write_word("Distance is ");
_delay_ms(10);
while(1){
  ultra_triger();
  _delay_ms(15);
}

  return 0;
}