#ifndef __CAN_H
#define __CAN_H	 
#include "sys.h"	    

//CAN����RX0�ж�ʹ��
#define CAN_RX0_INT_ENABLE	1		//0,��ʹ��;1,ʹ��.								    
										 							 				    
u8 CAN_Mode_Init(u8 tsjw,u8 tbs2,u8 tbs1,u16 brp,u8 mode);//CAN��ʼ��
 
u8 Can_Send_Msg(void);						//��������

u8 Can_Receive_Msg(u8 *buf);			//��������

extern int can_recv_count;
#endif








