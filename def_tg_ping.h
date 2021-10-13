#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - Telegram notify ---------------------------------------------------
// ------------------------------------------- RU - Уведомления в Telegram -----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Telegram hostname API to check availability
// RU: Имя хоста Telegram API для проверки доступности
#define CONFIG_TELEGRAM_HOST_CHECK "api.telegram.org"
// EN: The number of "lost" pings before the notification is sent to the event loop
// RU: Количество "потерянных" пингов, прежде чем будет отправлено уведомление в цикл событий
#define CONFIG_TELEGRAM_HOST_CHECK_LIMIT 3
#define CONFIG_TELEGRAM_HOST_CHECK_DURATION 300
#define CONFIG_TELEGRAM_HOST_CHECK_LOSS 50.0
