void initportA()
    {
        SYSCTL_RCGCGPIO_R|=0x01;
        while ((SYSCTL_PRGPIO_R&0x01)==0){};
     // GPIO_PORTB_LOCK_R   = 0x4C4F434B ;
      GPIO_PORTA_CR_R     = 0xE0 ;
      GPIO_PORTA_AMSEL_R  = 0x00 ;
      GPIO_PORTA_PCTL_R   = 0x00000000 ;
      GPIO_PORTA_AFSEL_R  = 0x00 ;
      GPIO_PORTA_DIR_R    = 0xE0 ;
      GPIO_PORTA_DEN_R    = 0xE0 ;
      //GPIO_PORTB_PUR_R    = 0x11;
      GPIO_PORTA_DATA_R   = 0xE0 ;
    }