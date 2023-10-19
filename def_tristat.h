#pragma once
#include "project_config.h"
#include "def_formats_datetime.h"

// EN: String identifiers for JSON
// RU: Строковые идентификаторы для JSON
#define CONFIG_TRISTAT_0 "low"
#define CONFIG_TRISTAT_1 "middle"
#define CONFIG_TRISTAT_2 "high"
#define CONFIG_TRISTAT_CHANGED "changed"
#define CONFIG_TRISTAT_STATUS "status"
#define CONFIG_TRISTAT_TIMESTAMP "timestamps"

// EN: Timestamp format
// RU: Формат отметок времени
#define CONFIG_TRISTAT_TIMESTAMP_BUF_SIZE CONFIG_FORMAT_STRFTIME_DTS_BUFFER_SIZE
#define CONFIG_TRISTAT_TIMESTAMP_FORMAT CONFIG_FORMAT_DTS

