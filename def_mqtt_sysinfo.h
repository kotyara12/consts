#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ----------------------------------------- EN - MQTT system information ------------------------------------------------
// ---------------------------------------- RU - MQTT системная информация -----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Allow periodic publication of system information
// RU: Разрешить периодическую публикацию системной информации
#define CONFIG_MQTT_SYSINFO_ENABLE 1
#if CONFIG_MQTT_SYSINFO_ENABLE
// EN: System information topic name
// RU: Название топика системной информации
#define CONFIG_MQTT_SYSINFO_TOPIC "sysinfo"
#define CONFIG_MQTT_SYSINFO_INTERVAL 60000           
#define CONFIG_MQTT_SYSINFO_LOCAL 0
#define CONFIG_MQTT_SYSINFO_QOS 0
#define CONFIG_MQTT_SYSINFO_RETAINED 1
#endif // CONFIG_MQTT_SYSINFO_ENABLE
