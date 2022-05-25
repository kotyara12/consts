#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - https://narodmon.ru/ ----------------------------------------------
// ---------------------------------------------- RU - https://narodmon.ru/ ----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: An arbitrary TLS certificate for the API. Comment out if it is ISRG X1
// RU: Произвольный TLS-сертификат для API. Закомментируйте, если это ISRG X1
// #define CONFIG_NARODMON_TLS_PEM_START "_binary_isrg_root_x1_pem_start"
// #define CONFIG_NARODMON_TLS_PEM_END "_binary_isrg_root_x1_pem_end"
// EN: Minimum server access interval in milliseconds
// RU: Минимальный интервал обращения к серверу в миллисекундах
#define CONFIG_NARODMON_MIN_INTERVAL 300000
// EN: Server access interval in milliseconds for API failures
// RU: Интервал обращения к серверу в миллисекундах при отказах API
#define CONFIG_NARODMON_ERROR_INTERVAL 180000
// EN: Use static memory allocation for the task and queue. CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION must be enabled!
// RU: Использовать статическое выделение памяти под задачу и очередь. Должен быть включен параметр CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION!
#define CONFIG_NARODMON_STATIC_ALLOCATION 1
// EN: Stack size for the task of sending data to narodmon.ru
// RU: Размер стека для задачи отправки данных на narodmon.ru
#define CONFIG_NARODMON_STACK_SIZE 3072
// EN: Queue size for the task of sending data to narodmon.ru
// RU: Размер очереди для задачи отправки данных на narodmon.ru
#define CONFIG_NARODMON_QUEUE_SIZE 8
// EN: Timeout for writing to the queue for sending data on narodmon.ru
// RU: Время ожидания записи в очередь отправки данных на narodmon.ru
#define CONFIG_NARODMON_QUEUE_WAIT 100
// EN: The priority of the task of sending data to narodmon.ru
// RU: Приоритет задачи отправки данных на narodmon.ru
#define CONFIG_NARODMON_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
// EN: Processor core for the task of sending data to narodmon.ru
// RU: Ядро процессора для задачи отправки данных на narodmon.ru
#define CONFIG_NARODMON_CORE 1
// EN: The number of attempts to send data to narodmon.ru
// RU: Количество попыток отправки данных на narodmon.ru
#define CONFIG_NARODMON_MAX_ATTEMPTS 3
// EN: The number of errors in accessing the server in a row, after which a notification will be sent to the event loop
// RU: Количество ошибок обращения к серверу подряд, после чего будет отправлено оповещение в цикл событий
#define CONFIG_NARODMON_ERROR_LIMIT 10
