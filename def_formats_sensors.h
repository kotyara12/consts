#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------- EN - Sensor data formats --------------------------------------------------
// --------------------------------------- RU - Форматы данных для сенсоров ----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// RU: Empty value (NaN)
// RU: Пустое значение (NaN)
#define CONFIG_FORMAT_EMPTY "---"
// EN: Format for displaying hours and minutes
// RU: Формат для вывода часов и минут
#define CONFIG_FORMAT_TIMEINT "%.2d:%.2d"
// EN: Format for scanning hours and minutes
// RU: Формат для сканирования часов и минут
#define CONFIG_FORMAT_TIMEINT_SCAN "%u%c%u"
// EN: Format for displaying a time interval
// RU: Формат для вывода интервала времени
#define CONFIG_FORMAT_TIMESPAN "%.2d:%.2d-%.2d:%.2d"
// EN: Format for scanning a time interval
// RU: Формат для сканирования интервала времени
#define CONFIG_FORMAT_TIMESPAN_SCAN "%u%c%u %c %u%c%u"
// EN: Format for outputting timestamp in long format
// RU: Формат для вывода отметки времени в длинном формате
#define CONFIG_FORMAT_TIMESTAMP_L "%d.%m.%y %H:%M"
// EN: Format for outputting timestamp in compressed format
// RU: Формат для вывода отметки времени в сжатом формате
#define CONFIG_FORMAT_TIMESTAMP_S "%d|%H:%M"
// EN: Format for outputting value + time
// RU: Формат для вывода значения + время
#define CONFIG_FORMAT_TSVALUE "%s" CONFIG_JSON_CHAR_EOL "%s"
// EN: Temperature format
// RU: Формат для температуры
#define CONFIG_FORMAT_TEMP_VALUE "%.2f"
// EN: Temperature units (0 - C, 1 - F)
// RU: Единицы измерения для температуры
#define CONFIG_FORMAT_TEMP_UNIT UNIT_TEMP_CELSIUS
// EN: Format for temperature as a string
// RU: Формат для температуры в виде строки
#define CONFIG_FORMAT_TEMP_STRING "%.2f°С"
// EN: Air humidity format
// RU: Формат для влажности воздуха
#define CONFIG_FORMAT_HUMIDITY_VALUE "%.2f"
// EN: Air humidity units (0 - %)
// RU: Единицы измерения влажности воздуха
#define CONFIG_FORMAT_HUMIDITY_UNIT 0 
// EN: Format for air humidity as a string
// RU: Формат для влажности воздуха в виде строки
#define CONFIG_FORMAT_HUMIDITY_STRING "%.2f%%"
// EN: Air pressure format
// RU: Формат для давления воздуха
#define CONFIG_FORMAT_PRESSURE_VALUE "%.1f"
// EN: Air pressure units (0 - Pa, 1 - hPa, 2 - mmHg)
// RU: Единицы измерения для давления воздуха
#define CONFIG_FORMAT_PRESSURE_UNIT UNIT_PRESSURE_MMHG 
// EN: Format for air pressure as a string
// RU: Формат для давления воздуха в виде строки
#define CONFIG_FORMAT_PRESSURE_STRING "%.0fмм"
// EN: Air quality format
// RU: Формат для качества воздуха
#define CONFIG_FORMAT_IAQ_VALUE "%.1f"
// EN: Format for air quality as a string
// RU: Формат для качества воздуха в виде строки
#define CONFIG_FORMAT_IAQ_STRING "%.1f"
// EN: ADC default format
// RU: Формат для ADC по умолчанию
#define CONFIG_FORMAT_ADC_VALUE "%.3f"
// EN: Format for ADC default as a string
// RU: Формат для ADC по умолчанию в виде строки
#define CONFIG_FORMAT_ADC_STRING "%.3f"
// EN: Voltage format
// RU: Формат для напряжения
#define CONFIG_FORMAT_VOLTAGE_VALUE "%.2f"
// EN: Format for voltage as a string
// RU: Формат для напряжения в виде строки
#define CONFIG_FORMAT_VOLTAGE_STRING "%.2fВ"
/********************************************************************************************
// EN: Format for single values 
// RU: Формат для одного значения
#define CONFIG_FORMAT_MIXED_STRING1 "%s"
// EN: Format for two values (e.g. temperature and humidity) in one bottle
// RU: Формат для двух значений (например температуры и влажности) в одном флаконе
#define CONFIG_FORMAT_MIXED_STRING2 "%s" CONFIG_JSON_CHAR_EOL "%s"
// EN: Format for three values (e.g. temperature, humidity and pressure) in one bottle
// RU: Формат для трех значений (например температуры, влажности и давления) в одном флаконе
#define CONFIG_FORMAT_MIXED_STRING3 "%s" CONFIG_JSON_CHAR_EOL "%s" CONFIG_JSON_CHAR_EOL "%s"
********************************************************************************************/
