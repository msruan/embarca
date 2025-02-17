#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

bool get_is_btn_pressed(int btn_gpio_pin){
    return (gpio_get(btn_gpio_pin) == 0);
}

void setup_push_button(int btn_gpio_pin)
{
    gpio_init(btn_gpio_pin);
    gpio_set_dir(btn_gpio_pin, GPIO_IN);
    gpio_pull_up(btn_gpio_pin);
}

void setup_led(int led_gpio_pin)
{
    gpio_init(led_gpio_pin);
    gpio_set_dir(led_gpio_pin, GPIO_OUT);
}

typedef enum {
    Off = 0,
    On = 1
} EnergyState;

void turn_onoff_led(EnergyState state){
    gpio_put(PICO_DEFAULT_LED_PIN, state);
}