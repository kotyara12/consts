#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------ EN - https://thingspeak.com/ -----------------------------------------------
// ------------------------------------------ RU - https://thingspeak.com/ -----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Minimum server access interval in milliseconds (for each channel separately)
// RU: Минимальный интервал обращения к серверу в миллисекундах (для каждого канала отдельно)
#define CONFIG_THINGSPEAK_MIN_INTERVAL 1000
// EN: Use static memory allocation for the task and queue. CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION must be enabled!
// RU: Использовать статическое выделение памяти под задачу и очередь. Должен быть включен параметр CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION!
#define CONFIG_THINGSPEAK_STATIC_ALLOCATION 1
// EN: Stack size for the task sending data to thingspeak.com
// RU: Размер стека для задачи отправки данных на thingspeak.com
#define CONFIG_THINGSPEAK_STACK_SIZE 2048
// EN: Queue size for task sending data to thingspeak.com
// RU: Размер очереди для задачи отправки данных на thingspeak.com
#define CONFIG_THINGSPEAK_QUEUE_SIZE 8
// EN: Time to wait for writing to the send data queue on thingspeak.com
// RU: Время ожидания записи в очередь отправки данных на thingspeak.com
#define CONFIG_THINGSPEAK_QUEUE_WAIT 100
// EN: Time to wait for writing to the send data queue on thingspeak.com
// RU: Приоритет задачи отправки данных на thingspeak.com
#define CONFIG_THINGSPEAK_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
// EN: Processor core for the task of sending data to thingspeak.com
// RU: Ядро процессора для задачи отправки данных на thingspeak.com
#define CONFIG_THINGSPEAK_CORE 1
// EN: Number of attempts to send data to thingspeak.com
// RU: Количество попыток отправки данных на thingspeak.com
#define CONFIG_THINGSPEAK_MAX_ATTEMPTS 3
