 void led_toggle(int 100msec_cnt){
    switch(100msec_cnt % 2)
    {
      case 0:
        hal_gpio_set(&hal_led_g, GPIO_PIN_SET);
        break;    
      case 1:
        hal_gpio_set(&hal_led_g, GPIO_PIN_RESET);
        break;
    }
 }
 