#pragma once
#include "project_config.h"

// EN: Ping task parameters: stack size and priority
// RU: Параметры задачи пинга: размер стека и приоритет
#define CONFIG_PINGER_TASK_STATIC_ALLOCATION 1
#define CONFIG_PINGER_TASK_STACK_SIZE 3*1024
#define CONFIG_PINGER_TASK_CORE 1
#define CONFIG_PINGER_TASK_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
// EN: Ping session parameters: number of packets, interval between sending, response timeout, packet size
// RU: Параметры сессии пинга: количество пакетов, интервал между отправкой, таймаут ожидания ответа, размер пакета
#define CONFIG_PINGER_COUNT 5
#define CONFIG_PINGER_TIMEOUT 1000
#define CONFIG_PINGER_DATASIZE 32
#define CONFIG_PINGER_LIMIT 3
// EN: The period of validity for determining the host's IP address in ms. Use 0 if not use this option
// RU: Период валидности определения IP-адреса хоста в мс. Используйте 0, если не использовать эту опцию
#define CONFIG_PINGER_IP_VALIDITY 1000*60*60
