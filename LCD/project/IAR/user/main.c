/****************************************************************************
* �� �� ��: main.c
* ��    ��: 
* ��    ��: 2019-04-08
* ��    ��: 1.0
* ��    ��: OLED��ʾ
****************************************************************************/
#include <ioCC2540.h>
#include "LCD.h"

void main()
{
    unsigned char i=0;         
    LCD_Init();                      //oled ��ʼ��  
    LCD_Fill(0xff);                  //��ȫ�� 
    
    while(1)
    {
        for(i=0; i<8; i++)
        {
            LCD_P16x16Ch(i*16,0,i);  //������ʾ
            LCD_P16x16Ch(i*16,2,i+8);
            LCD_P16x16Ch(i*16,4,i+16);
            LCD_P16x16Ch(i*16,6,i+24);
        } 
        DelayMS(2000); 
        LCD_CLS();   
        LCD_P8x16Str(4,0,"www.OS-Q.com");   
        LCD_P8x16Str(20,2,"NEW LOCK");   

        LCD_P8x16Str(8,4,"TEL:028-123333"); 
        LCD_P6x8Str(8,6,"QQ: 119120110");       
        LCD_P6x8Str(10,7,"2019-04-08 18:18");    
        DelayMS(2000);  
    }
}   






















































































/*
uchar data_bus;
void check_busy(void)
{
  uchar read_data = 0xff;
  data_bus = 0xff;
  //��λLCD
  LCD_RS = 0;
  //������
  LCD_RW = 1;
  //Ƭʹ��
  LCD_CS1 = 0;
  
  while(read_data & 0x80)
  {
    LCD_E = 1;
    _nop_();
    _nop_();
    read_data = data_bus;
    LCD_E = 0;
  }
  
  LCD_E = 0;
  //Ƭ����
  LCD_CS1 = 1;
  
}

//д������Ĵ���
void send_cmd(uchar cmd)
{
  check_busy();
  //��λ
  LCD_RS = 0;
  //д����
  LCD_RW = 0;
  //Ƭʹ��
  LCD_CS1 = 0;
  data_bus = cmd;
  
  LCD_E = 1;
  
  _nop_();
  _nop_();
  
  LCD_E = 0;
  
  _nop_();
  _nop_();
  //Ƭ����
  LCD_CS1 = 1;
}

//д���ݵ�DDRAM
void send_dat(uchar dat)
{
  check_busy();
  LCD_RS = 1;
  LCD_RW = 0;
  //Ƭʹ��
  LCD_CS1 = 0;
  data_bus = dat;
  LCD_E = 1;
  _nop_();
  _nop_();
  LCD_E = 0;
  _nop_();
  _nop_();
  //Ƭ����
  LCD_CS1 = 1;
}

void lcd_initial(void)
{
  P1DIR |= 0xFC;
        P2DIR |= 0x01;
        P0DIR |= 0x02;
        P1_2 = 0;
  
  LCD_RS = 1;
  delay_nms(50);
  send_cmd(0xE2);
  send_cmd(0xA3);
  send_cmd(0xA0);
  send_cmd(0xC8);
  send_cmd(0x24);
  send_cmd(0x81);
  send_cmd(0x14);
  send_cmd(0x2C);
  send_cmd(0x2E);
  send_cmd(0x2F);
  send_cmd(0x40);
  send_cmd(0xB0);
  send_cmd(0x10);
  send_cmd(0x00);
  send_cmd(0xAF);
}
*/






















