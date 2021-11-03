#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - Notifies ----------------------------------------------------------
// --------------------------------------------- RU - Уведомления --------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Send notifications to Telegram when disconnecting and connecting to WiFi
// RU: Отправлять уведомления в Telegram при отключении и подключении к WiFi
#define CONFIG_NOTIFY_TELEGRAM_WIFI_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_WIFI_STATUS 0
// EN: Send notifications to Telegram when disconnecting and connecting to an MQTT broker
// RU: Отправлять уведомления в Telegram при отключении и подключении к MQTT брокеру
#define CONFIG_NOTIFY_TELEGRAM_MQTT_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_MQTT_STATUS 0
// EN: Send notifications to Telegram on MQTT client errors
// RU: Отправлять уведомления в Telegram при ошибках MQTT клиента
#define CONFIG_NOTIFY_TELEGRAM_MQTT_ERRORS 0
#define CONFIG_NOTIFY_TELEGRAM_ALERT_MQTT_ERRORS 0
// EN: Send an alert in telegram in case of problems with the Internet
// RU: Отправить оповещение в telegram при проблемах с интернетом
#define CONFIG_NOTIFY_TELEGRAM_INET_UNAVAILABLE 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_INET_UNAVAILABLE 0
// EN: Send notifications to Telegram when sending errors to thingspeak.com
// RU: Отправлять уведомления в Telegram при ошибках отправки на thingspeak.com
#define CONFIG_NOTIFY_TELEGRAM_THINGSPEAK_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_THINGSPEAK_STATUS 0
// EN: Send notifications to Telegram when sending errors to open-monitoring.online
// RU: Отправлять уведомления в Telegram при ошибках отправки на open-monitoring.online
#define CONFIG_NOTIFY_TELEGRAM_OPENMON_STATUS 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_OPENMON_STATUS 0
// EN: Send a notification to Telegram when a parameter is changed
// RU: Отправить уведомление в Telegram при изменении параметра
#define CONFIG_NOTIFY_TELEGRAM_PARAM_CHANGED 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_PARAM_CHANGED 1
// EN: Send a notification to Telegram when a command is received
// RU: Отправить уведомление в Telegram при получении команды
#define CONFIG_NOTIFY_TELEGRAM_COMMAND 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_COMMAND 1
// EN: Send a notification to Telegram when receiving an OTA update
// RU: Отправить уведомление в Telegram при получении OTA обновления
#define CONFIG_NOTIFY_TELEGRAM_OTA 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_OTA 1
// EN: Send notifications to Telegram when you enable or disable quiet mode
// RU: Отправлять уведомления в Telegram при включении и отключении тихого режима
#define CONFIG_NOTIFY_TELEGRAM_SILENT_MODE 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_SILENT_MODE 0
// EN: Allow notifications in Telegram when the sensor status changes (for example, open circuit)
// RU: Разрешить уведомления в Telegram при изменении статуса сенсора (например обрыв)
#define CONFIG_NOTIFY_TELEGRAM_SENSOR_STATE 1
#define CONFIG_NOTIFY_TELEGRAM_ALERT_SENSOR_STATE 1

