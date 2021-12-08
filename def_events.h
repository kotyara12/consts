#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ----------------------------------------------- EN - Event loop -------------------------------------------------------
// ---------------------------------------------- RU - Цикл событий ------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Static memory allocation for a group of system statuses
// RU: Статическое выделение памяти под системные статусы
#define CONFIG_STATES_STATIC_ALLOCATION 1
// EN: Create a dedicated task for the main event loop
// RU: Создать выделенную задачу для основного цикла событий
#define CONFIG_EVENT_LOOP_DEDICATED 1
#if CONFIG_EVENT_LOOP_DEDICATED
// EN: Events queue size for the main event loop
// RU: Размер очереди сообщений для основного цикла событий
#define CONFIG_EVENT_LOOP_QUEUE_SIZE 32
// EN: Stack size of the main event loop task
// RU: Размер стека задачи основного цикла событий
#define CONFIG_EVENT_LOOP_STACK_SIZE 4096 // ESP_TASKD_EVENT_STACK+1024
// EN: Main event loop task priority
// RU: Приоритет задачи основного цикла событий
#define CONFIG_EVENT_LOOP_PRIORITY ESP_TASKD_EVENT_PRIO
// EN: Processor core of the main event loop task
// RU: Процессорное ядро задачи основного цикла событий
#define CONFIG_EVENT_LOOP_CORE 0
#endif // CONFIG_EVENT_LOOP_DEDICATED

