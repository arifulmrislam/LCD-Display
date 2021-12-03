#include <16f877a.h>
#use delay(clock=20MHz)
#fuses HS
#include <lcd.c>
void main()
{
lcd_init();
while(TRUE)
{
printf(lcd_putc, "\f IoT&IIoT ");
delay_ms(1000);
delay_ms(1000);
printf(lcd_putc, "\f Enginerring ");
printf(lcd_putc, "\n Solution ");
delay_ms(1000);
printf(lcd_putc, "\f                 ");
delay_ms(1000);
printf(lcd_putc, "\f                 ");
delay_ms(500);
printf(lcd_putc, "\f Ariful Islam ");
printf(lcd_putc, "\n Content Creator ");
delay_ms(3000);
printf(lcd_putc, "\f                 ");
delay_ms(500);
printf(lcd_putc, "\f From Craiova");
printf(lcd_putc, "\n  Romania");
delay_ms(3000);
}
}
