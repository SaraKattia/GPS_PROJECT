  void SysTick_Wait(uint32_t delay) /* delay is in 62.5ns units */
  {
      NVIC_ST_CTRL_R = 0;            /* (1) disable SysTick during setup */
      NVIC_ST_RELOAD_R = delay-1;    /* (2) number of counts to wait */
      NVIC_ST_CURRENT_R = 0;         /* (3) any value written to CURRENT clears */
      NVIC_ST_CTRL_R |= 0x5;         /* (4) enable SysTick with core clock */

      while((NVIC_ST_CTRL_R&0x00010000)==0) {
          ;                          /* wait for COUNT flag */
      }
  }