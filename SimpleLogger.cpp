#define _CRT_SECURE_NO_WARNINGS

#include"SimpleLog.h"

void LogOutMethod_3(char* str, uint8_t len);
void LogOutMethod_6(char* str, uint8_t len);

int main()
{
    SimpleLog Uart3_log(LogOutMethod_3);
    SimpleLog Uart6_log(LogOutMethod_6);

    Uart3_log.LogD((char*)"Test1 %d %s %c %x\n\r", 45, "123", "A", 28);
    Uart3_log.LogI((char*)"Test2 \n\r");
    Uart3_log.LogW((char*)"Test3 \n\r");
    Uart3_log.LogE((char*)"Test4 \n\r");
    Uart3_log.LogV((char*)"Test5 \n\r");

    Uart6_log.LogD((char*)"6_Test1 %d %s %c %x %f\n\r", 45, "123", "A", 28, 13.25);
    Uart6_log.LogI((char*)"6_Test2 \n\r");
    Uart6_log.LogW((char*)"6_Test3 \n\r");
    Uart6_log.LogE((char*)"6_Test4 \n\r");
    Uart6_log.LogV((char*)"%d %d\n\r");
    Uart6_log.LogV((char*)"6_Test5 \n\r");

    return 0;
}

void LogOutMethod_3(char* str, uint8_t len)
{
    printf("%s", str);
}

void LogOutMethod_6(char* str, uint8_t len)
{
    printf("%s", str);
}