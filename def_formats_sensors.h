#pragma once

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------- EN - Sensor data formats --------------------------------------------------
// --------------------------------------- RU - Форматы данных для сенсоров ----------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
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
#define CONFIG_FORMAT_TIMESTAMP_L "%d.%m.%Y %H:%M:%S"
// EN: Format for outputting timestamp in compressed format
// RU: Формат для вывода отметки времени в сжатом формате
#define CONFIG_FORMAT_TIMESTAMP_S "%d|%H:%M"
// EN: Format for outputting value + time
// RU: Формат для вывода значения + время
#define CONFIG_FORMAT_TSVALUE "%s\n%s"
// EN: Temperature format
// RU: Формат для температуры
#define CONFIG_FORMAT_TEMP_VALUE "%.3f"
// EN: Temperature units (0 - C, 1 - F)
// RU: Единицы измерения для температуры
#define CONFIG_FORMAT_TEMP_UNIT UNIT_TEMP_CELSIUS
// EN: Format for temperature as a string
// RU: Формат для температуры в виде строки
#define CONFIG_FORMAT_TEMP_STRING "%.2f°С"
// EN: Air humidity format
// RU: Формат для влажности воздуха
#define CONFIG_FORMAT_HUMIDITY_VALUE "%.3f"
// EN: Air humidity units (0 - %)
// RU: Единицы измерения влажности воздуха
#define CONFIG_FORMAT_HUMIDITY_UNIT 0 
// EN: Format for air humidity as a string
// RU: Формат для влажности воздуха в виде строки
#define CONFIG_FORMAT_HUMIDITY_STRING "%.2f%%"
// EN: Air pressure format
// RU: Формат для давления воздуха
#define CONFIG_FORMAT_PRESSURE_VALUE "%.3f"
// EN: Air pressure units (0 - Pa, 1 - hPa, 2 - mmHg)
// RU: Единицы измерения для давления воздуха
#define CONFIG_FORMAT_PRESSURE_UNIT UNIT_PRESSURE_MMHG 
// EN: Format for air pressure as a string
// RU: Формат для давления воздуха в виде строки
#define CONFIG_FORMAT_PRESSURE_STRING "%.1f"
// EN: Air quality format
// RU: Формат для качества воздуха
#define CONFIG_FORMAT_IAQ_VALUE "%.1f"
// EN: Format for air quality as a string
// RU: Формат для качества воздуха в виде строки
#define CONFIG_FORMAT_IAQ_STRING "%.1f"
// EN: Format for two values (e.g. temperature and humidity) in one bottle
// RU: Формат для двух значений (например температуры и влажности) в одном флаконе
#define CONFIG_FORMAT_MIXED_STRING2 "%s\n%s"
// EN: Format for three values (e.g. temperature, humidity and pressure) in one bottle
// RU: Формат для трех значений (например температуры, влажности и давления) в одном флаконе
#define CONFIG_FORMAT_MIXED_STRING3 "%s\n%s\n%s"
// EN: Format for ping response time
// RU: Формат для времени ответа пинга
#define CONFIG_FORMAT_PING_TIMERESP_VALUE "%d"
// EN: Format for ping response time as a string
// RU: Формат для времени ответа пинга в виде строки
#define CONFIG_FORMAT_PING_TIMERESP_STRING "%d ms"
// EN: Format for ping response time
// RU: Формат для времени ответа пинга
#define CONFIG_FORMAT_PING_LOSS_VALUE "%.1f"
// EN: Format for ping response time as a string
// RU: Формат для времени ответа пинга в виде строки
#define CONFIG_FORMAT_PING_LOSS_STRING "%.1f% %"
// EN: Format for three values (status, delay, loss) in one topic
// RU: Формат для трех значений (статус, задержка, потери) в одном топике
#define CONFIG_FORMAT_PING_MIXED "%s\nt: %d ms\nl: %.0f% %"
// EN: Ping statuses
// RU: Надписи для статусов пинга
#define CONFIG_FORMAT_PING_OK "🙂"
#define CONFIG_FORMAT_PING_BAD "😨"
#define CONFIG_FORMAT_PING_UNAVAILABLED "😡"

