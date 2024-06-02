/**
 * spam-blink.c
 * make the pico blink
*/

#include "spam-blink.h"

int main() {
    const uint8_t LED = PICO_DEFAULT_LED_PIN;
    gpio_init(LED);
    gpio_set_dir(LED, GPIO_OUT);
    while (true) {
        gpio_put(LED, 1);
        sleep_ms(1);
        gpio_put(LED, 0);
        sleep_ms(1);
    }
}