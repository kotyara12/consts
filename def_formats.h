#pragma once
#include "project_config.h"

// EN: Line break character to use inside JSON values. "\n" "breaks" the JavaScript parser, other characters need to be converted
// RU: Символ переноса строки для использования внутри JSON-значений. "\n" "ломает" парсер JavaScript, другие символы требуют конвертации
#define CONFIG_JSON_CHAR_EOL     "\n"

// EN: Formats for numeric values
// RU: Форматы для числовых величин
#define CONFIG_FORMAT_OPT_I8     "%d"
#define CONFIG_FORMAT_OPT_U8     "%d"
#define CONFIG_FORMAT_OPT_I16    "%d"
#define CONFIG_FORMAT_OPT_U16    "%d"
#define CONFIG_FORMAT_OPT_I32    "%d"
#define CONFIG_FORMAT_OPT_U32    "%d"
#define CONFIG_FORMAT_OPT_I64    "%d"
#define CONFIG_FORMAT_OPT_U64    "%d"
#define CONFIG_FORMAT_OPT_FLOAT  "%.2f"
#define CONFIG_FORMAT_OPT_DOUBLE "%f"