#pragma once

#include "project_config.h"

// EN: Default task priority
// RU: Приоритет задачи "по умолчанию"
#ifndef CONFIG_DEFAULT_TASK_PRIORITY
#define CONFIG_DEFAULT_TASK_PRIORITY 5
#endif

// EN: Priorities of applied tasks
// RU: Приоритеты прикладных задач
#define CONFIG_TASK_PRIORITY_SENSORS        CONFIG_DEFAULT_TASK_PRIORITY + 8     // 13
#define CONFIG_TASK_PRIORITY_ALARM          CONFIG_DEFAULT_TASK_PRIORITY + 10    // 15

// EN: Priorities of system tasks
// RU: Приоритеты системных задач
#define CONFIG_EVENT_LOOP_PRIORITY          ESP_TASKD_EVENT_PRIO + 5             // 10
#define CONFIG_TASK_PRIORITY_OTA            ESP_TASK_PRIO_MAX - 5                // 20
#define CONFIG_TASK_PRIORITY_LED            CONFIG_DEFAULT_TASK_PRIORITY + 12    // 17
#define CONFIG_TASK_PRIORITY_BEEP           CONFIG_DEFAULT_TASK_PRIORITY + 13    // 18
#define CONFIG_TASK_PRIORITY_PING           CONFIG_DEFAULT_TASK_PRIORITY - 3     // 02
#define CONFIG_TASK_PRIORITY_PINGER         CONFIG_DEFAULT_TASK_PRIORITY - 3     // 02
#define CONFIG_TASK_PRIORITY_MQTT_CLIENT    CONFIG_DEFAULT_TASK_PRIORITY         // 05
#define CONFIG_TASK_PRIORITY_TELEGRAM       CONFIG_DEFAULT_TASK_PRIORITY + 1     // 06
#define CONFIG_TASK_PRIORITY_DATASEND       CONFIG_DEFAULT_TASK_PRIORITY         // 05

// EN: Processor core of applied tasks
// RU: Процессорное ядро прикладных задач
#define CONFIG_TASK_CORE_SENSORS            1
#define CONFIG_TASK_CORE_ALARM              1

// EN: Processor core of system tasks
// RU: Процессорное ядро системных задач
#define CONFIG_EVENT_LOOP_CORE              0
#define CONFIG_TASK_CORE_OTA                1
#define CONFIG_TASK_CORE_LED                1
#define CONFIG_TASK_CORE_BEEP               0
#define CONFIG_TASK_CORE_PING               1
#define CONFIG_TASK_CORE_PINGER             1
#define CONFIG_TASK_CORE_MQTT_CLIENT        1
#define CONFIG_TASK_CORE_TELEGRAM           1
#define CONFIG_TASK_CORE_DATASEND           1
