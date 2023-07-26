#pragma once
#include "project_config.h"
#include "def_formats_datetime.h"

// EN: String identifiers for JSON
// RU: Строковые идентификаторы для JSON
#define CONFIG_BINSTAT_TRUE "opened"
#define CONFIG_BINSTAT_FALSE "closed"
#define CONFIG_BINSTAT_CHANGED "changed"
#define CONFIG_BINSTAT_STATUS "status"
#define CONFIG_BINSTAT_TIMESTAMP "timestamps"

// EN: Timestamp format
// RU: Формат отметок времени
#define CONFIG_BINSTAT_TIMESTAMP_BUF_SIZE CONFIG_FORMAT_STRFTIME_DTS_BUFFER_SIZE
#define CONFIG_BINSTAT_TIMESTAMP_FORMAT CONFIG_FORMAT_DTS

