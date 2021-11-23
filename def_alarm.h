#pragma once
#include "project_config.h"

// EN: Use static memory allocation for the fire alarm task
// RU: Использовать статическое выделение памяти для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_STATIC_ALLOCATION 1
// EN: Stack size for the fire alarm task
// RU: Размер стека для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_STACK_SIZE 3072
// EN: Queue size for the fire alarm task
// RU: Размер очереди для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_QUEUE_SIZE 32
// EN: The priority of the fire alarm task
// RU: Приоритет задачи задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY + 3
// EN: Processor core for the fire alarm task
// RU: Ядро процессора для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_CORE 1
