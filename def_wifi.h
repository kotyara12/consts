#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - Wifi networks -----------------------------------------------------
// ------------------------------------------------ RU - WiFi сети -------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
#define CONFIG_WIFI_STATIC_ALLOCATION 1
#define CONFIG_WIFI_TIMEOUT 60000
// EN: The number of attempts to reconnect to the same access point (in case of a sudden disconnection)
// RU: Количество попыток переподключиться к одной и той же точке доступа (в случае внезапного отключения)
#define CONFIG_WIFI_RECONNECT_ATTEMPTS 30
// EN: The number of connection attempts before restarting the WiFi interface (must be greater than CONFIG_WIFI_RECONNECT_ATTEMPTS)
// RU: Количество попыток подключения до перезапуска WiFi интерфейса (должно быть больше CONFIG_WIFI_RECONNECT_ATTEMPTS)
#define CONFIG_WIFI_RESTART_ATTEMPTS 100
// EN: Pause between reconnection attempts to the same access point
// RU: Пауза между попытками переподключения к одной и той же точке доступа 
#define CONFIG_WIFI_RECONNECT_DELAY 3000
