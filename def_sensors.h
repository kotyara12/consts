#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------- EN - Sensors -------------------------------------------------------
// -------------------------------------------------- RU - Сенсоры -------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------
// EN: Subtopic name or JSON key for sensor status
// RU: Название субтопика или JSON-ключа для статуса сенсора
#define CONFIG_SENSOR_STATUS "status"
// EN: Subtopic name for publishing local data (for exchange between devices)
// RU: Название субтопика для публикации локальных данных (для обмена между устройствами)
#define CONFIG_SENSOR_LOCAL_EXCHANGE "sensors"
// EN: Sensor status text value
// RU: Текстовое значение статуса сенсора
#define CONFIG_SENSOR_STATUS_OK "OK"
#define CONFIG_SENSOR_STATUS_NO_INIT "NO INIT"
#define CONFIG_SENSOR_STATUS_NO_DATA "NO DATA"
#define CONFIG_SENSOR_STATUS_CONNECT "NO CONN"
#define CONFIG_SENSOR_STATUS_CALIBRATION "CAL FAILED"
#define CONFIG_SENSOR_STATUS_CRC_ERROR "CRC ERROR"
#define CONFIG_SENSOR_STATUS_BAD_DATA "BAD DATA"
#define CONFIG_SENSOR_STATUS_ERROR "ERROR"
#define CONFIG_SENSOR_STATUS_UNKNOWN "UNKNOWN"
// EN: If "1", then in case of errors replace the displayed (mixed) sensor value with the status
// RU: Если "1", то при ошибках заменять отображаемое (смешанное) значение сенсора на статус
#define CONFIG_SENSOR_STATUS_AS_MIXED_ON_ERROR 1
// EN: Subtopic name or JSON key for numeric values
// RU: Название субтопика или JSON-ключа для числовых значений
#define CONFIG_SENSOR_NUMERIC_VALUE "numeric"
// EN: Subtopic name or JSON key for formatted data
// RU: Название субтопика или JSON-ключа для форматированных данных
#define CONFIG_SENSOR_STRING_VALUE "string"
// EN: Subtopic name or JSON key for formatted data with time
// RU: Название субтопика или JSON-ключа для форматированных данных с временем
#define CONFIG_SENSOR_TIMESTRING_VALUE "tsv"
// EN: Subtopic name or JSON key for timestamp
// RU: Название субтопика или JSON-ключа для отметки времени
#define CONFIG_SENSOR_TIMESTAMP "time"
// EN: Subtopic name or JSON key for mixed value, for example "temperature + humidity"
// RU: Название субтопика или JSON-ключа для смешанного значения, например "температура + влажность"
#define CONFIG_SENSOR_DISPLAY "display"
// EN: Subtopic name or JSON key for RAW data (no correction or filtering)
// RU: Название субтопика или JSON-ключа для RAW-данных (без коррекции и фильтрации)
#define CONFIG_SENSOR_RAW_VALUE "raw"
// EN: Allow publishing of processed (filtered) data
// RU: Разрешить публикацию обработанных (фильтрованных) данных
#define CONFIG_SENSOR_FILTERED_VALUE "value"
// EN: Subtopic name or JSON key for filtered data
// RU: Название субтопика или JSON-ключа для фильтрованных данных
#define CONFIG_SENSOR_LASTVALUE "value"
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
// EN: Subtopic name or JSON key for absolute minimum and maximum
// RU: Название субтопика или JSON-ключа для абсолютного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_ENTIRELY "entirely"
// EN: Subtopic name or JSON key for weekly low and high
// RU: Название субтопика или JSON-ключа для еженедельного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_WEEKLY "weekly"
// EN: Subtopic name or JSON key for daily low and high
// RU: Название субтопика или JSON-ключа для ежедневного минимума и максимума
#define CONFIG_SENSOR_EXTREMUMS_DAILY "daily"

// EN: Text commands
// RU: Текстовые команды
#define CONFIG_SENSOR_COMMAND_KIND MK_MAIN
#define CONFIG_SENSOR_COMMAND_PRIORITY MP_INCREASED
#define CONFIG_SENSOR_COMMAND_NOTIFY 1
#define CONFIG_SENSOR_COMMAND_EXTR_RESET "clrextr"
#define CONFIG_SENSOR_COMMAND_SENSORS_PREFIX "sensors"

// EN: Sensor name for temperature
// RU: Название сенсора для температуры
#define CONFIG_SENSOR_TEMP_KEY "temp"
#define CONFIG_SENSOR_TEMP_NAME "temperature"
#define CONFIG_SENSOR_TEMP_FRIENDLY "Температура"
// EN: Sensor name for air humidity
// RU: Название сенсора для влажности воздуха
#define CONFIG_SENSOR_HUMIDITY_KEY "humd"
#define CONFIG_SENSOR_HUMIDITY_NAME "humidity"
#define CONFIG_SENSOR_HUMIDITY_FRIENDLY "Влажность"
// EN: Sensor name for air pressure
// RU: Название сенсора для давления
#define CONFIG_SENSOR_PRESSURE_KEY "pres"
#define CONFIG_SENSOR_PRESSURE_NAME "pressure"
#define CONFIG_SENSOR_PRESSURE_FRIENDLY "Давление"
// EN: Sensor name for moisture
// RU: Название сенсора для влажности почвы
#define CONFIG_SENSOR_MOISTURE_KEY "mstr"
#define CONFIG_SENSOR_MOISTURE_NAME "moisture"
#define CONFIG_SENSOR_MOISTURE_FRIENDLY "Влажность"
// EN: Sensor name for conductivity
// RU: Название сенсора для проводимости 
#define CONFIG_SENSOR_CONDUCTIVITY_KEY "cndv"
#define CONFIG_SENSOR_CONDUCTIVITY_NAME "conductivity"
#define CONFIG_SENSOR_CONDUCTIVITY_FRIENDLY "Проводимость"
// EN: Sensor name for PH
// RU: Название сенсора для PH
#define CONFIG_SENSOR_PH_KEY "ph"
#define CONFIG_SENSOR_PH_NAME "ph"
#define CONFIG_SENSOR_PH_FRIENDLY "PH"
// EN: Sensor name for nitrogen content
// RU: Название сенсора для cодержания азота
#define CONFIG_SENSOR_NITROGEN_KEY "ngc"
#define CONFIG_SENSOR_NITROGEN_NAME "nitrogen"
#define CONFIG_SENSOR_NITROGEN_FRIENDLY "Содержание азота"
// EN: Sensor name for phosphorus content
// RU: Название сенсора для cодержания фосфора
#define CONFIG_SENSOR_PHOSPHORUS_KEY "phc"
#define CONFIG_SENSOR_PHOSPHORUS_NAME "phosphorus"
#define CONFIG_SENSOR_PHOSPHORUS_FRIENDLY "Содержание фосфора"
// EN: Sensor name for potassium content
// RU: Название сенсора для cодержания фосфора
#define CONFIG_SENSOR_POTASSIUM_KEY "ptc"
#define CONFIG_SENSOR_POTASSIUM_NAME "potassium"
#define CONFIG_SENSOR_POTASSIUM_FRIENDLY "Содержание калия"
// EN: Sensor name for salinity
// RU: Название сенсора для солености
#define CONFIG_SENSOR_SALINITY_KEY "sln"
#define CONFIG_SENSOR_SALINITY_NAME "salinity"
#define CONFIG_SENSOR_SALINITY_FRIENDLY "Соленость"
// EN: Sensor name for TDS
// RU: Название сенсора для TDS
#define CONFIG_SENSOR_TDS_KEY "tds"
#define CONFIG_SENSOR_TDS_NAME "tds"
#define CONFIG_SENSOR_TDS_FRIENDLY "TDS"
// EN: Sensor name for level
// RU: Название сенсора для уровня 
#define CONFIG_SENSOR_LEVEL_KEY "lvl"
#define CONFIG_SENSOR_LEVEL_NAME "level"
#define CONFIG_SENSOR_LEVEL_FRIENDLY "Уровень"
// EN: Name of the sensor for illumination
// RU: Название сенсора для освещенности
#define CONFIG_SENSOR_LIGHT_KEY "light"
#define CONFIG_SENSOR_LIGHT_NAME "light"
#define CONFIG_SENSOR_LIGHT_FRIENDLY "Освещенность"
// EN: Name of the sensor for illumination
// RU: Название сенсора для освещенности
#define CONFIG_SENSOR_ILLUMINATION_KEY "ilm"
#define CONFIG_SENSOR_ILLUMINATION_NAME "illumination"
#define CONFIG_SENSOR_ILLUMINATION_FRIENDLY "Освещенность"
// EN: Sensor name for soil parameters
// RU: Название сенсора для параметров почвы
#define CONFIG_SENSOR_SOIL_KEY "soil"
#define CONFIG_SENSOR_SOIL_TOPIC "soil"
#define CONFIG_SENSOR_SOIL_FRIENDLY "Почва"
// EN: Sensor name for wind parameters
// RU: Название сенсора для параметров ветра
#define CONFIG_SENSOR_WIND_KEY "wind"
#define CONFIG_SENSOR_WIND_TOPIC "wind"
#define CONFIG_SENSOR_WIND_FRIENDLY "Ветер"
// EN: Name of the sensor for wind speed
// RU: Название сенсора для скорости ветра
#define CONFIG_SENSOR_WIND_SPEED_KEY "wds"
#define CONFIG_SENSOR_WIND_SPEED_NAME "wind_speed"
#define CONFIG_SENSOR_WIND_SPEED_TOPIC "speed"
#define CONFIG_SENSOR_WIND_SPEED_FULLTOPIC "wind/speed"
#define CONFIG_SENSOR_WIND_SPEED_FRIENDLY "Скорость ветра"
// EN: Name of the sensor for wind speed
// RU: Название сенсора для скорости ветра
#define CONFIG_SENSOR_WIND_STRENGTH_KEY "wdb"
#define CONFIG_SENSOR_WIND_STRENGTH_NAME "wind_strength"
#define CONFIG_SENSOR_WIND_STRENGTH_TOPIC "strength"
#define CONFIG_SENSOR_WIND_STRENGTH_FULLTOPIC "wind/strength"
#define CONFIG_SENSOR_WIND_STRENGTH_FRIENDLY "Сила ветра"
// EN: Name of the sensor for wind direction
// RU: Название сенсора для направления ветра
#define CONFIG_SENSOR_WIND_DIRECTION_KEY "wdd"
#define CONFIG_SENSOR_WIND_DIRECTION_NAME "wind_direction"
#define CONFIG_SENSOR_WIND_DIRECTION_TOPIC "direction"
#define CONFIG_SENSOR_WIND_DIRECTION_FULLTOPIC "wind/direction"
#define CONFIG_SENSOR_WIND_DIRECTION_FRIENDLY "Направление ветра"
// EN: Sensor name for precipitation amount
// RU: Название сенсора для количества осадков
#define CONFIG_SENSOR_RAINFALL_KEY "rfl"
#define CONFIG_SENSOR_RAINFALL_NAME "rainfall"
#define CONFIG_SENSOR_RAINFALL_FRIENDLY "Количество осадков"
// EN: Sensor name for air quality
// RU: Название сенсора для качества воздуха
#define CONFIG_SENSOR_IAQ_KEY "iaq"
#define CONFIG_SENSOR_IAQ_NAME "iaq"
#define CONFIG_SENSOR_IAQ_FRIENDLY "Качество воздуха"
// EN: Sensor name for PM2.5
// RU: Название сенсора для PM2.5
#define CONFIG_SENSOR_PM25_KEY "pm25"
#define CONFIG_SENSOR_PM25_NAME "pm25"
#define CONFIG_SENSOR_PM25_FRIENDLY "Запыленность воздуха 2.5 мкм"
// EN: Sensor name for PM10
// RU: Название сенсора для PM10
#define CONFIG_SENSOR_PM10_KEY "pm10"
#define CONFIG_SENSOR_PM10_NAME "pm10"
#define CONFIG_SENSOR_PM10_FRIENDLY "Запыленность воздуха 10 мкм"
// EN: Sensor name for air quality
// RU: Название сенсора для качества воздуха
#define CONFIG_SENSOR_TVOC_KEY "tvoc"
#define CONFIG_SENSOR_TVOC_NAME "tvoc"
#define CONFIG_SENSOR_TVOC_FRIENDLY "Качество воздуха"
// EN: Sensor name for CO2
// RU: Название сенсора для CO2
#define CONFIG_SENSOR_CO2_KEY "co2"
#define CONFIG_SENSOR_CO2_NAME "co2"
#define CONFIG_SENSOR_CO2_FRIENDLY "CO2"
// EN: Sensor name for ADC
// RU: Название сенсора для ADC
#define CONFIG_SENSOR_ADC_KEY "adc"
#define CONFIG_SENSOR_ADC_NAME "adc"
#define CONFIG_SENSOR_ADC_FRIENDLY "ADC"
// EN: Sensor name for voltage
// RU: Название сенсора для напряжения
#define CONFIG_SENSOR_VOLTAGE_KEY "vol"
#define CONFIG_SENSOR_VOLTAGE_NAME "voltage"
#define CONFIG_SENSOR_VOLTAGE_FRIENDLY "Напряжение"
// EN: Sensor name for power
// RU: Название сенсора для мощности
#define CONFIG_SENSOR_POWER_KEY "pow"
#define CONFIG_SENSOR_POWER_NAME "power"
#define CONFIG_SENSOR_POWER_FRIENDLY "Мощность"
// EN: Sensor name for volume
// RU: Название сенсора для объема
#define CONFIG_SENSOR_VOLUME_KEY "vol"
#define CONFIG_SENSOR_VOLUME_NAME "volume"
#define CONFIG_SENSOR_VOLUME_FRIENDLY "Объем"

// EN: Names of parameters to save in NVS
// RU: Названия параметров для сохранения в NVS
#define CONFIG_SENSOR_NVS_ITEMS "sext_%s_%d"

#define CONFIG_SENSOR_NVS_EXTREMUM_DAY_MIN_TIME "day.min.time"
#define CONFIG_SENSOR_NVS_EXTREMUM_DAY_MIN_RAW "day.min.raw"
#define CONFIG_SENSOR_NVS_EXTREMUM_DAY_MIN_FLT "day.min.flt"
#define CONFIG_SENSOR_NVS_EXTREMUM_DAY_MAX_TIME "day.max.time"
#define CONFIG_SENSOR_NVS_EXTREMUM_DAY_MAX_RAW "day.max.raw"
#define CONFIG_SENSOR_NVS_EXTREMUM_DAY_MAX_FLT "day.max.flt"

#define CONFIG_SENSOR_NVS_EXTREMUM_WEEK_MIN_TIME "week.min.time"
#define CONFIG_SENSOR_NVS_EXTREMUM_WEEK_MIN_RAW "week.min.raw"
#define CONFIG_SENSOR_NVS_EXTREMUM_WEEK_MIN_FLT "week.min.flt"
#define CONFIG_SENSOR_NVS_EXTREMUM_WEEK_MAX_TIME "week.max.time"
#define CONFIG_SENSOR_NVS_EXTREMUM_WEEK_MAX_RAW "week.max.raw"
#define CONFIG_SENSOR_NVS_EXTREMUM_WEEK_MAX_FLT "week.max.flt"

#define CONFIG_SENSOR_NVS_EXTREMUM_ALL_MIN_TIME "all.min.time"
#define CONFIG_SENSOR_NVS_EXTREMUM_ALL_MIN_RAW "all.min.raw"
#define CONFIG_SENSOR_NVS_EXTREMUM_ALL_MIN_FLT "all.min.flt"
#define CONFIG_SENSOR_NVS_EXTREMUM_ALL_MAX_TIME "all.max.time"
#define CONFIG_SENSOR_NVS_EXTREMUM_ALL_MAX_RAW "all.max.raw"
#define CONFIG_SENSOR_NVS_EXTREMUM_ALL_MAX_FLT "all.max.flt"
