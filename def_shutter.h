#pragma once
#include "project_config.h"
#include "def_formats_datetime.h"

// EN: String identifiers for JSON
// RU: Строковые идентификаторы для JSON
#define CONFIG_SHUTTER_OPEN "opened"
#define CONFIG_SHUTTER_CLOSE "closed"
#define CONFIG_SHUTTER_CHANGED "changed"
#define CONFIG_SHUTTER_STATUS "status"
#define CONFIG_SHUTTER_VALUE "steps"
#define CONFIG_SHUTTER_PERCENT "percent"
#define CONFIG_SHUTTER_MAXIMUM  "maximum"
#define CONFIG_SHUTTER_TIMESTAMP "timestamps"

// EN: Timestamp format
// RU: Формат отметок времени
#define CONFIG_SHUTTER_TIMESTAMP_BUF_SIZE CONFIG_FORMAT_STRFTIME_DTM_BUFFER_SIZE
#define CONFIG_SHUTTER_TIMESTAMP_FORMAT CONFIG_FORMAT_DTM

