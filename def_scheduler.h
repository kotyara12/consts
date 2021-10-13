#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------- EN - Scheduler ------------------------------------------------------
// ------------------------------------------------- RU - Расписания -----------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Allow static memory allocation for the scheduler task
// RU: Разрешить статическое выделение памяти под задачу расписаний
#define CONFIG_SCHEDULER_STATIC_ALLOCATION 1
// EN: Stack size of the scheduler task
// RU: Размер стека задачи расписаний
#define CONFIG_SCHEDULER_STACK_SIZE 3072
// EN: Scheduler task priority
// RU: Приоритет задачи расписаний
#define CONFIG_SCHEDULER_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
// EN: Processor core of the scheduler task
// RU: Процессорное ядро задачи расписаний
#define CONFIG_SCHEDULER_CORE 1
// EN: The interval between scheduler cycles in milliseconds. The smaller, the higher the accuracy, but the higher the load on the processor
// RU: Интервал между циклами шедулера в миллисекундах. Чем меньше, тем выше точность, но выше нагрузка на процессор
#define CONFIG_SCHEDULER_DELAY 100
