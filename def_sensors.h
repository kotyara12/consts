#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------- EN - Sensors -------------------------------------------------------
// -------------------------------------------------- RU - Сенсоры -------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Subtopic name or JSON key for sensor status
// RU: Название субтопика или JSON-ключа для статуса сенсора
#define CONFIG_SENSOR_STATUS "status"
// EN: Sensor status text value
// RU: Текстовое значение статуса сенсора
#define CONFIG_SENSOR_STATUS_NAN "NO DATA"
#define CONFIG_SENSOR_STATUS_OK "OK"
#define CONFIG_SENSOR_STATUS_TIMEOUT "TIMEOUT"
#define CONFIG_SENSOR_STATUS_CALIBRATION "SENSOR FAILED"
#define CONFIG_SENSOR_STATUS_CRC_ERROR "CRC ERROR"
#define CONFIG_SENSOR_STATUS_ERROR "ERROR"
#define CONFIG_SENSOR_STATUS_UNKNOWN "UNKNOWN"
// EN: If "1", then in case of errors replace the displayed (mixed) sensor value with the status
// RU: Если "1", то при ошибках заменять отображаемое (смешанное) значение сенсора на статус
#define CONFIG_SENSOR_STATUS_AS_MIXED_ON_ERROR 1
// EN: Subtopic name or JSON key for numeric values
// RU: Название субтопика или JSON-ключа для числовых значений
#define CONFIG_SENSOR_NUMERIC_VALUE "numeric"
// EN: Allow publication of sensor status
// RU: Разрешить публикацию форматированных данных в виде строки
#define CONFIG_SENSOR_STRING_ENABLE 1
// EN: Subtopic name or JSON key for formatted data
// RU: Название субтопика или JSON-ключа для форматированных данных
#define CONFIG_SENSOR_STRING_VALUE "string"
// EN: Allow the publication of formatted data as "value + time"
// RU: Разрешить публикацию форматированных данных в виде "значение + время"
#define CONFIG_SENSOR_TIMESTRING_ENABLE 1
// EN: Subtopic name or JSON key for formatted data with time
// RU: Название субтопика или JSON-ключа для форматированных данных с временем
#define CONFIG_SENSOR_TIMESTRING_VALUE "tsv"
// EN: Allow the publication of the time stamp of reading data from the sensor
// RU: Разрешить публикацию отметки времени чтения данных с сенсора
#define CONFIG_SENSOR_TIMESTAMP_ENABLE 1
// EN: Subtopic name or JSON key for timestamp
// RU: Название субтопика или JSON-ключа для отметки времени
#define CONFIG_SENSOR_TIMESTAMP "time"
// EN: Allow publishing of mixed value, for example "temperature + humidity"
// RU: Разрешить публикацию смешанного значения, например "температура + влажность"
#define CONFIG_SENSOR_DISPLAY_ENABLED 1
// EN: Subtopic name or JSON key for mixed value, for example "temperature + humidity"
// RU: Название субтопика или JSON-ключа для смешанного значения, например "температура + влажность"
#define CONFIG_SENSOR_DISPLAY "display"
// EN: Allow publishing of raw RAW data (no correction or filtering): 0 - only processed value, 1 - always both values, 2 - only when there is processing
// RU: Разрешить публикацию необработанных RAW-данных (без коррекции и фильтрации): 0 - только обработанное значение, 1 - всегда оба значения, 2 - только когда есть обработка
#define CONFIG_SENSOR_RAW_ENABLE 1
// EN: Subtopic name or JSON key for RAW data (no correction or filtering)
// RU: Название субтопика или JSON-ключа для RAW-данных (без коррекции и фильтрации)
#define CONFIG_SENSOR_RAW_VALUE "raw"
// EN: Allow publishing of processed (filtered) data
// RU: Разрешить публикацию обработанных (фильтрованных) данных
#define CONFIG_SENSOR_FILTERED_VALUE "value"
// EN: Subtopic name or JSON key for filtered data
// RU: Название субтопика или JSON-ключа для фильтрованных данных
#define CONFIG_SENSOR_LASTVALUE "value"
// EN: Allow dew point calculation and publication
// RU: Разрешить вычисление и публикацию точки росы
#define CONFIG_SENSOR_DEWPOINT_ENABLE 1
// EN: Subtopic name or JSON key for dew point
// RU: Название субтопика или JSON-ключа для точки росы
#define CONFIG_SENSOR_DEWPOINT "dewpoint"
// EN: Subtopic name or JSON key for minimum value
// RU: Название субтопика или JSON-ключа для минимального значения
#define CONFIG_SENSOR_MINIMAL "min"
// EN: Subtopic name or JSON key for maximum value
// RU: Название субтопика или JSON-ключа для максимального значения
#define CONFIG_SENSOR_MAXIMAL "max"
// EN: Subtopic name or JSON key for extreme values (detected minimum and maximum)
// RU: Название субтопика или JSON-ключа для экстремумов (обнаруженных минимума и максимума)
#define CONFIG_SENSOR_EXTREMUS "extremums"
// EN: Allow publication of absolute minimum and maximum
// RU: Разрешить публикацию абсолютного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_ENTIRELY_ENABLE 1
// EN: Subtopic name or JSON key for absolute minimum and maximum
// RU: Название субтопика или JSON-ключа для абсолютного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_ENTIRELY "entirely"
// EN: Allow publication of weekly minimum and maximum
// RU: Разрешить публикацию еженедельного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_WEEKLY_ENABLE 1
// EN: Subtopic name or JSON key for weekly low and high
// RU: Название субтопика или JSON-ключа для еженедельного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_WEEKLY "weekly"
// EN: Allow publication of daily minimum and maximum
// RU: Разрешить публикацию ежедневного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_DAILY_ENABLE 1
// EN: Subtopic name or JSON key for daily low and high
// RU: Название субтопика или JSON-ключа для ежедневного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_DAILY "daily"
// EN: Publish extremums only when they are changed
// RU: Публиковать экстеремумы только при их изменении
#define CONFIG_SENSOR_EXTREMUMS_OPTIMIZED 1

// EN: Sensor name for temperature
// RU: Название сенсора для температуры
#define CONFIG_SENSOR_TEMP_NAME "temperature"
#define CONFIG_SENSOR_TEMP_KEY "temp"
#define CONFIG_SENSOR_TEMP_FRIENDLY "Температура"
// EN: Sensor name for air humidity
// RU: Название сенсора для влажности воздуха
#define CONFIG_SENSOR_HUMIDITY_NAME "humidity"
#define CONFIG_SENSOR_HUMIDITY_KEY "humd"
#define CONFIG_SENSOR_HUMIDITY_FRIENDLY "Влажность"
// EN: Sensor name for moisture
// RU: Название сенсора для влажности почвы
#define CONFIG_SENSOR_MOISTURE_NAME "moisture"
#define CONFIG_SENSOR_MOISTURE_KEY "mstr"
#define CONFIG_SENSOR_MOISTURE_FRIENDLY "Влажность"
// EN: Sensor name for air pressure
// RU: Название сенсора для давления
#define CONFIG_SENSOR_PRESSURE_NAME "pressure"
#define CONFIG_SENSOR_PRESSURE_KEY "pres"
#define CONFIG_SENSOR_PRESSURE_FRIENDLY "Давление"
// EN: Sensor name for air quality
// RU: Название сенсора для качества воздуха
#define CONFIG_SENSOR_IAQ_NAME "iaq"
#define CONFIG_SENSOR_IAQ_KEY "iaq"
#define CONFIG_SENSOR_IAQ_FRIENDLY "Качество воздуха"
