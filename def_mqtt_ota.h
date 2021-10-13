#pragma once
#include "project_config.h"

// EN: Topic name for OTA updates
// RU: Название топика для OTA обновлений
#define CONFIG_MQTT_OTA_TOPIC "ota"
// EN: Friendly name for OTA updates
// RU: Понятное имя для OTA обновлений
#define CONFIG_MQTT_OTA_NAME "OTA"
// EN: TLS certificate for the OTA update server
// RU: TLS-сертификат для сервера OTA обновлений
#define CONFIG_MQTT_OTA_PEM_START "_binary_isrg_root_x1_pem_start"
#define CONFIG_MQTT_OTA_PEM_END "_binary_isrg_root_x1_pem_start"
// EN: QOS for OTA updates topic
// RU: QOS для топика OTA обновлений
#define CONFIG_MQTT_OTA_QOS 2
// EN: Save the last sent data on the broker
// RU: Сохранять на брокере последние отправленные данные
#define CONFIG_MQTT_OTA_RETAINED 0
// EN: Number of update attempts
// RU: Количество попыток обновления
#define CONFIG_MQTT_OTA_ATTEMPTS 3
// EN: Delay between update attempts
// RU: Задержка между попытками обновления
#define CONFIG_MQTT_OTA_DELAY 3000
