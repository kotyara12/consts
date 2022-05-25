#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - Telegram notify ---------------------------------------------------
// ------------------------------------------- RU - Уведомления в Telegram -----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: TLS certificate for Telegram API
// RU: TLS-сертификат для API Telegram
#define CONFIG_TELEGRAM_TLS_PEM_START "_binary_api_telegram_org_pem_start"
#define CONFIG_TELEGRAM_TLS_PEM_END "_binary_api_telegram_org_pem_end"
// EN: Use static memory allocation for the task and queue. CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION must be enabled!
// RU: Использовать статическое выделение памяти под задачу и очередь. Должен быть включен параметр CONFIG_FREERTOS_SUPPORT_STATIC_ALLOCATION!
#define CONFIG_TELEGRAM_STATIC_ALLOCATION 1
// EN: Stack size for the task of sending notifications to Telegram
// RU: Размер стека для задачи отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_STACK_SIZE 4098
// EN: Queue size for the task of sending notifications to Telegram
// RU: Размер очереди для задачи отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_QUEUE_SIZE 8
// EN: Time to wait for a message to be sent to the queue in milliseconds
// RU: Время ожидания отправки сообщения в очередь в миллисекундах
#define CONFIG_TELEGRAM_QUEUE_WAIT 10000
// EN: Priority of the task of sending notifications to Telegram
// RU: Приоритет задачи отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
// EN: The processor core for the task of sending notifications to Telegram
// RU: Ядро процессора для задачи отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_CORE 1
// EN: Minimum interval between two sends to Telegram
// RU: Минимальный интервал между двумя отправками в Telegram
#define CONFIG_TELEGRAM_SEND_INTERVAL 250
// EN: Minimum free heap size (in % of available space) to accommodate the send queue
// RU: Минимальный размер свободной кучи (в % от доступного объема) для размещения очереди отправки
#define CONFIG_TELEGRAM_HEAP_LIMIT 25
// EN: The interval between sending to Telegram in case the API returned an error 403
// RU: Интервал между отправками в Telegram в случае если API вернуло ошибку 403
#define CONFIG_TELEGRAM_FORBIDDEN_INTERVAL 60000
// EN: Waiting time when Internet or WiFi is not available
// RU: Время ожидания при недоступности интернет или WiFi
#define CONFIG_TELEGRAM_INTERNET_INTERVAL 60000
