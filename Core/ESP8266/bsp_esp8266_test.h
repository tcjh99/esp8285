#ifndef  __ESP8266_TEST_H
#define	 __ESP8266_TEST_H



#include "stm32f4xx.h"
/********************************** 头文件包含区 **********************************/

#include "esp8266.h"
#include <stdio.h>  
#include <string.h>  
#include <stdbool.h>
#include "usart.h"
/************************************* END *****************************************/


/********************************** 用户需要设置的参数**********************************/
#define      macUser_ESP8266_ApSsid                      "Yahboom2"        //要连接的热点的名称
#define      macUser_ESP8266_ApPwd                       "yahboom890729"         //要连接的热点的密钥

#define      macUser_ESP8266_TcpServer_IP                "192.168.2.101"    //要连接的服务器的 IP
#define      macUser_ESP8266_TcpServer_Port              "8086"              //要连接的服务器的端口


/********************************** 外部全局变量 ***************************************/
extern volatile uint8_t ucTcpClosedFlag;



/********************************** 测试函数声明 ***************************************/
void ESP8266_StaTcpClient_Unvarnish_ConfigTest(void);
//此函数放到主循环中
void ESP8266_CheckRecvDataTest(void);

#endif

