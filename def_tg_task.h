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
// EN: Priority of the task of sending notifications to Telegram
// RU: Приоритет задачи отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
// EN: The processor core for the task of sending notifications to Telegram
// RU: Ядро процессора для задачи отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_CORE 1
// EN: Number of attempts to send notifications to Telegram
// RU: Количество попыток отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_MAX_ATTEMPTS 10
// EN: The interval between attempts to send notifications to Telegram
// RU: Интервал между попытками отправки уведомлений в Telegram
#define CONFIG_TELEGRAM_ATTEMPTS_INTERVAL 3000
// EN: WiFi availability timeout
// RU: Время ожидания доступности WiFi
#define CONFIG_TELEGRAM_WIFI_TIMEOUT 1000*60*60
// EN: Internet availability timeout
// RU: Время ожидания доступности интернета
#define CONFIG_TELEGRAM_INTERNET_TIMEOUT 1000*60*10
