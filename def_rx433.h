#pragma once
#include "project_config.h"

#define CONFIG_RX433_STATIC_ALLOCATION 1
// EN: Stack size for the task of sending data to open-monitoring.online
// RU: Размер стека для задачи отправки данных на open-monitoring.online
#define CONFIG_RX433_STACK_SIZE 3072
// EN: Queue size for the task of sending data to open-monitoring.online
// RU: Размер очереди для задачи отправки данных на open-monitoring.online
#define CONFIG_RX433_QUEUE_SIZE 32
// EN: The priority of the task of sending data to open-monitoring.online
// RU: Приоритет задачи отправки данных на open-monitoring.online
#define CONFIG_RX433_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY + 3
// EN: Processor core for the task of sending data to open-monitoring.online
// RU: Ядро процессора для задачи отправки данных на open-monitoring.online
#define CONFIG_RX433_CORE 1
