#ifndef  __TM1629A_H__
#define  __TM1629A_H__

#include "stdint.h"


#ifdef  __cplusplus
#define TM1629A_BEGIN  extern "C" {
#define TM1629A_END    }
#else
#define TM1629A_BEGIN  
#define TM1629A_END   
#endif


TM1629A_BEGIN


#define  TM1629A_CONNECT_TYPE_ANODE    1
#define  TM1629A_CONNECT_TYPE_CATHODE  2
#define  TM1629A_CONNECT_TYPE          TM1629A_CONNECT_TYPE_ANODE


#define CLK_DELAY_TIME                 20


typedef struct
{
void (*clk_rise)(void);
void (*clk_down)(void);
void (*data_set)(void);
void (*data_clr)(void);
void (*stb_set)(void);
void (*stb_clr)(void);
}tm1629a_hal_driver_t;


/*注册硬件驱动*/
int tm1629a_register_hal_driver(tm1629a_hal_driver_t *hal_driver);
/*初始化*/
int tm1629a_init();
/*本地缓存清空*/
int tm1629a_buffer_clean();
/*本地的显示缓存更新*/
int tm1629a_buffer_update(uint8_t addr,uint8_t *update,uint8_t cnt);
/*刷新显示*/
int tm1629a_display_refresh();
/*亮度调节 0-8. 0-off 1-8从暗到亮*/
int tm1629a_brightness(uint8_t brightness );








TM1629A_END

#endif


















