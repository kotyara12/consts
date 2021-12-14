#pragma once
#include "project_config.h"

// EN: Maximum number of events that can be assigned to one sensor
// RU: Максимальное количество событий, которое можно назначить на один сенсор
#define CONFIG_ALARM_MAX_EVENTS 4

// EN: Timeouts for maintaining the active state of sensors (for sensors that transmit only an alarm signal, without a reset signal)
// RU: Таймауты поддержания активного состояния сенсоров (для датчиков, которые передают только сигнал тревоги, без сигнала сброса)
#define CONFIG_ALARM_TIMEOUT_RF_PIR_MOTION   1000
#define CONFIG_ALARM_TIMEOUT_RF_DOOR         10000
#define CONFIG_ALARM_TIMEOUT_RF_TAMPER       1000
#define CONFIG_ALARM_TIMEOUT_RF_LOW_BAT      3600000

// EN: Use static memory allocation for the fire alarm task
// RU: Использовать статическое выделение памяти для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_STATIC_ALLOCATION 1
// EN: Stack size for the fire alarm task
// RU: Размер стека для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_STACK_SIZE 3078
// EN: Queue size for the fire alarm task
// RU: Размер очереди для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_QUEUE_SIZE 32
// EN: The priority of the fire alarm task
// RU: Приоритет задачи задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY+3
// EN: Processor core for the fire alarm task
// RU: Ядро процессора для задачи охранно-пожарной сигнализации
#define CONFIG_ALARM_CORE 1

// EN: Telegram notification templates
// RU: Шаблоны уведомлений в Telegram
#define CONFIG_NOTIFY_TELEGRAM_ALARM_SENSOR_UNDEFINED_TEMPLATE "🟡 Получена команда от неизвестного датчика ОПС\n\n<code>Значение: 0x%.8X / %d</code>"
#define CONFIG_NOTIFY_TELEGRAM_ALARM_COMMAND_UNDEFINED_TEMPLATE "🟡 Получена неизвестная команда от датчика ОПС\n\n<code>Датчик:   %s\nЗначение: 0x%.8X / %d</code>"

// EN: Flash mode on input signal
// RU: Режим вспышек при входящем сигнале
#define CONFIG_ALARM_INCOMING_QUANTITY 3
#define CONFIG_ALARM_INCOMING_DURATION 50
#define CONFIG_ALARM_INCOMING_INTERVAL 50
