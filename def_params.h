#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ------------------------------------------- EN - Common parameters ----------------------------------------------------
// -------------------------------------------- RU - Общие параметры -----------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Parameters for the "silent" mode
// RU: Параметры для "тихого" режима
#if defined(CONFIG_SILENT_MODE_ENABLE) && CONFIG_SILENT_MODE_ENABLE
#if defined(CONFIG_SILENT_MODE_EXTENDED) && CONFIG_SILENT_MODE_EXTENDED
  #define CONFIG_SILENT_MODE_PGROUP_KEY "silent_mode"
  #define CONFIG_SILENT_MODE_PGROUP_TOPIC "silent_mode"
  #define CONFIG_SILENT_MODE_PGROUP_FRIENDLY "Тихий режим"
  #define CONFIG_SILENT_MODE_ENABLE_TOPIC "enable"
  #define CONFIG_SILENT_MODE_ENABLE_FRIENDLY "Разрешить переключение в тихий режим"
  #define CONFIG_SILENT_MODE_TIMESPAN_TOPIC "timespan"
  #define CONFIG_SILENT_MODE_TIMESPAN_FRIENDLY "Интервал времени суток без звуковых и световых оповещений"
#else
  #define CONFIG_SILENT_MODE_TOPIC "silent_mode"
  #define CONFIG_SILENT_MODE_FRIENDLY "Интервал времени суток без звуковых и световых оповещений"
#endif // CONFIG_SILENT_MODE_EXTENDED
#endif // CONFIG_SILENT_MODE_ENABLE

// EN: Parameters for multi-tariff mode
// RU: Параметры для мультитарифного режима
#if defined(CONFIG_MULTI_TARIFF_ENABLE) && CONFIG_MULTI_TARIFF_ENABLE
#define CONFIG_MULTI_TARIFF_GROUP_KEY   "mtariff"
#define CONFIG_MULTI_TARIFF_GROUP_TOPIC "multitariff"
#define CONFIG_MULTI_TARIFF_GROUP_NAME  "Мультитарифный режим"
#define CONFIG_MULTI_TARIFF_DAY_KEY   "tday"
#define CONFIG_MULTI_TARIFF_DAY_TOPIC "tariff_day"
#define CONFIG_MULTI_TARIFF_DAY_NAME  "Пиковая (дневная) зона"
#define CONFIG_MULTI_TARIFF_SELF_KEY   "tself"
#define CONFIG_MULTI_TARIFF_SELF_TOPIC "tariff_self"
#define CONFIG_MULTI_TARIFF_SELF_NAME  "Полупиковая зона"
#define CONFIG_MULTI_TARIFF_NIGHT_KEY   "tnight"
#define CONFIG_MULTI_TARIFF_NIGHT_TOPIC "tariff_night"
#define CONFIG_MULTI_TARIFF_NIGHT_NAME  "Ночная зона"
#define CONFIG_MULTI_TARIFF_TIMESPAN_TOPIC "timespan"
#define CONFIG_MULTI_TARIFF_TIMESPAN_NAME  "Интервал"
#define CONFIG_MULTI_TARIFF_TIMESPAN_1_TOPIC "timespan1"
#define CONFIG_MULTI_TARIFF_TIMESPAN_1_NAME  "Интервал 1"
#define CONFIG_MULTI_TARIFF_TIMESPAN_2_TOPIC "timespan2"
#define CONFIG_MULTI_TARIFF_TIMESPAN_2_NAME  "Интервал 2"
#define CONFIG_MULTI_TARIFF_TIMESPAN_3_TOPIC "timespan3"
#define CONFIG_MULTI_TARIFF_TIMESPAN_3_NAME  "Интервал 3"
#endif // CONFIG_MULTI_TARIFF_ENABLE

// -----------------------------------------------------------------------------------------------------------------------
// -------------------------------------------- EN - Sensor parameters ---------------------------------------------------
// ------------------------------------------- RU - Параметры сенсоров ---------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
#define CONFIG_SENSOR_PGROUP_ROOT_KEY "sens"
#define CONFIG_SENSOR_PGROUP_ROOT_TOPIC "sensors"
#define CONFIG_SENSOR_PGROUP_ROOT_FRIENDLY "Сенсоры"
// EN: Parameter group - intervals of data publication on various services
// RU: Группа параметров - интервалы публикации данных на различных сервисах
#define CONFIG_SENSOR_PGROUP_INTERVALS_KEY "intv"
#define CONFIG_SENSOR_PGROUP_INTERVALS_TOPIC "intervals"
#define CONFIG_SENSOR_PGROUP_INTERVALS_FRIENDLY "Интервалы отправки данных"
// EN: The interval for publishing data on the MQTT server
// RU: Интервал публикации данных на MQTT сервере
#define CONFIG_SENSOR_PARAM_INTERVAL_MQTT_KEY "mqtt"
#define CONFIG_SENSOR_PARAM_INTERVAL_MQTT_FRIENDLY "Интервал отправки данных с сенсоров на MQTT брокер"
// EN: The interval for publishing data on the open-monitoring.online
// RU: Интервал публикации данных на open-monitoring.online
#define CONFIG_SENSOR_PARAM_INTERVAL_OPENMON_KEY "openmon"
#define CONFIG_SENSOR_PARAM_INTERVAL_OPENMON_FRIENDLY "Интервал отправки данных с сенсоров на open-monitoring.online"
// EN: The interval for publishing data on the thingspeak.com
// RU: Интервал публикации данных на thingspeak.com
#define CONFIG_SENSOR_PARAM_INTERVAL_THINGSPEAK_KEY "thingspeak"
#define CONFIG_SENSOR_PARAM_INTERVAL_THINGSPEAK_FRIENDLY "Интервал отправки данных с сенсоров на thingspeak.com"
// EN: The interval for publishing data on your hosting
// RU: Интервал публикации данных на своем хостинге
#define CONFIG_SENSOR_PARAM_INTERVAL_HOSTING_KEY "site"
#define CONFIG_SENSOR_PARAM_INTERVAL_HOSTING_FRIENDLY "Интервал отправки данных с сенсоров на хостинге"
// EN: The parameter of the sensor, with which you can correct the value (if it is known that the sensor is "lying")
// RU: Параметр сенсора, с помощью которого можно подкорректировать значение (если известно, что сенсор "врет")
#define CONFIG_SENSOR_PARAM_OFFSET_KEY "offset"
#define CONFIG_SENSOR_PARAM_OFFSET_FRIENDLY "Корректировка значения"
// EN: Sensor parameter to multiply the raw value by to get the actual value)
// RU: Параметр сенсора, на который следует умножить raw значение для получения действительного значения)
#define CONFIG_SENSOR_PARAM_COEF_KEY "factor"
#define CONFIG_SENSOR_PARAM_COEF_FRIENDLY "Множитель"
// EN: Sensor parameter responsible for selecting the type of value filter
// RU: Параметр сенсора, отвечающий за выбор типа фильтра значений
#define CONFIG_SENSOR_PARAM_FILTERMODE_KEY "filter_mode"
#define CONFIG_SENSOR_PARAM_FILTERMODE_FRIENDLY "Тип фильтра"
// EN: Sensor parameter responsible for the size of the value filter buffer
// RU: Параметр сенсора, отвечающий за размер буфера фильтра значений
#define CONFIG_SENSOR_PARAM_FILTERSIZE_KEY "filter_size"
#define CONFIG_SENSOR_PARAM_FILTERSIZE_FRIENDLY "Размер буфера фильтра"
#define CONFIG_SENSOR_PARAM_FILTERSIZE_MAX 32767
// EN: Input data range type for conversion in % for soil moisture sensors
// RU: Тип диапазона входных данных для пересчета в % для сенсоров влажности почвы
#define CONFIG_SENSOR_PARAM_RANGETYPE_KEY "range_type"
#define CONFIG_SENSOR_PARAM_RANGETYPE_FRIENDLY "Тип диапазона"
// EN: Width (size) of the range of input data for conversion in % for soil moisture sensors
// RU: Ширина (размер) диапазона входных данных для пересчета в % для сенсоров влажности почвы
#define CONFIG_SENSOR_PARAM_RANGESIZE_KEY "range_size"
#define CONFIG_SENSOR_PARAM_RANGESIZE_FRIENDLY "Ширина диапазона"
// EN: Input data value corresponding to 0% for soil moisture sensors
// RU: Значение входных данных, соответствующее 0% для сенсоров влажности почвы
#define CONFIG_SENSOR_PARAM_LEVELMIN_KEY "range_0"
#define CONFIG_SENSOR_PARAM_LEVELMIN_FRIENDLY "Значение 0%"
// EN: Input data value corresponding to 100% for soil moisture sensors
// RU: Значение входных данных, соответствующее 100% для сенсоров влажности почвы
#define CONFIG_SENSOR_PARAM_LEVELMAX_KEY "range_100"
#define CONFIG_SENSOR_PARAM_LEVELMAX_FRIENDLY "Значение 100%"
// EN: Built-in sensor heater parameters
// RU: Параметры встроенного нагревателя сенсора
#define CONFIG_SENSOR_PARAM_HEATER_GROUP_KEY "htr"
#define CONFIG_SENSOR_PARAM_HEATER_GROUP_TOPIC "heater"
#define CONFIG_SENSOR_PARAM_HEATER_GROUP_FRIENDLY "Встроенный нагреватель"
// EN: Sensor heater preset temperature
// RU: Заданная температура нагревателя сенсора
#define CONFIG_SENSOR_PARAM_HEATER_TEMP_KEY "temp"
#define CONFIG_SENSOR_PARAM_HEATER_TEMP_FRIENDLY "Температура"
// EN: Sensor heater duration in milliseconds
// RU: Длительность работы нагревателя сенсора в миллисекундах
#define CONFIG_SENSOR_PARAM_HEATER_DUR_KEY "duration"
#define CONFIG_SENSOR_PARAM_HEATER_DUR_FRIENDLY "Длительность"
// EN: Lower value limit for air quality sensor
// RU: Нижняя граница значений для сенсора качества воздуха
#define CONFIG_SENSOR_PARAM_GAS_LIMIT_BAD_KEY "limit_bad"
#define CONFIG_SENSOR_PARAM_GAS_LIMIT_BAD_FRIENDLY "Нижняя граница"
// EN: Higher value limit for air quality sensor
// RU: Верхняя граница значений для сенсора качества воздуха
#define CONFIG_SENSOR_PARAM_GAS_LIMIT_GOOD_KEY "limit_good"
#define CONFIG_SENSOR_PARAM_GAS_LIMIT_GOOD_FRIENDLY "Верхняя граница"
// EN: Higher value limit for air quality sensor
// RU: Верхняя граница значений для сенсора качества воздуха
#define CONFIG_SENSOR_PARAM_GAS_LIMIT_AUTOSHIFT_KEY "limit_autoshift"
#define CONFIG_SENSOR_PARAM_GAS_LIMIT_AUTOSHIFT_FRIENDLY "Автосдвиг границ"
// EN: Humidity contribution to total IAQ
// RU: Коэффициент вклада влажности в общее значение IAQ
#define CONFIG_SENSOR_PARAM_GAS_HUM_RATIO_KEY "hum_ratio"
#define CONFIG_SENSOR_PARAM_GAS_HUM_RATIO_FRIENDLY "Коэффициент влажности"
