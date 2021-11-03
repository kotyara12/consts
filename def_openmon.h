#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// -------------------------------------- EN - http://open-monitoring.online/ --------------------------------------------
// -------------------------------------- RU - http://open-monitoring.online/ --------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Minimum server access interval in milliseconds
// RU: Минимальный интервал обращения к серверу в миллисекундах
#define CONFIG_OPENMON_MIN_INTERVAL 60000
// EN: Server access interval in milliseconds for API failures
// RU: Интервал обращения к серверу в миллисекундах при отказах API
#define CONFIG_OPENMON_ERROR_INTERVAL 1000
// EN: The number of errors in accessing the server in a row, after which a notification will be sent to the event loop
// RU: Количество ошибок обращения к серверу подряд, после чего будет отправлено оповещение в цикл событий
#define CONFIG_OPENMON_ERROR_LIMIT 5
// EN: Use static memory allocation for the task and queue. CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION must be enabled!
// RU: Использовать статическое выделение памяти под задачу и очередь. Должен быть включен параметр CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION!
#define CONFIG_OPENMON_STATIC_ALLOCATION 1
// EN: Stack size for the task of sending data to open-monitoring.online
// RU: Размер стека для задачи отправки данных на open-monitoring.online
#define CONFIG_OPENMON_STACK_SIZE 3072
// EN: Queue size for the task of sending data to open-monitoring.online
// RU: Размер очереди для задачи отправки данных на open-monitoring.online
#define CONFIG_OPENMON_QUEUE_SIZE 8
// EN: Timeout for writing to the queue for sending data on open-monitoring.online
// RU: Время ожидания записи в очередь отправки данных на open-monitoring.online
#define CONFIG_OPENMON_QUEUE_WAIT 100
// EN: The priority of the task of sending data to open-monitoring.online
// RU: Приоритет задачи отправки данных на open-monitoring.online
#define CONFIG_OPENMON_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
// EN: Processor core for the task of sending data to open-monitoring.online
// RU: Ядро процессора для задачи отправки данных на open-monitoring.online
#define CONFIG_OPENMON_CORE 1
// EN: The number of attempts to send data to open-monitoring.online
// RU: Количество попыток отправки данных на open-monitoring.online
#define CONFIG_OPENMON_MAX_ATTEMPTS 10
