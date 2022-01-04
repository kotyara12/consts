#pragma once
#include "project_config.h"

// EN: Maximum number of events that can be assigned to one sensor
// RU: Максимальное количество событий, которое можно назначить на один сенсор
#define CONFIG_ALARM_MAX_EVENTS 4

// EN: Timeouts for maintaining the active state of sensors (for sensors that transmit only an alarm signal, without a reset signal)
// RU: Таймауты поддержания активного состояния сенсоров (для датчиков, которые передают только сигнал тревоги, без сигнала сброса)
#define CONFIG_ALARM_TIMEOUT_RF_BUTTON       5000
#define CONFIG_ALARM_TIMEOUT_RF_RCONTROL     3000
#define CONFIG_ALARM_TIMEOUT_RF_PIR_MOTION   3000
#define CONFIG_ALARM_TIMEOUT_RF_PERM         10000
#define CONFIG_ALARM_TIMEOUT_RF_DOOR         10000
#define CONFIG_ALARM_TIMEOUT_RF_TAMPER       10000
#define CONFIG_ALARM_TIMEOUT_RF_LOW_BAT      3600000

// EN: Siren and flasher duration in seconds
// RU: Длительность работы сирены и флешера в секундах
#define CONFIG_ALARM_DURATION_SIREN 60
#define CONFIG_ALARM_DURATION_FLASH 300

// EN: Timeout of waiting for completion of a packet of codes from wireless sensors
// RU: Таймаут ожидания завершения пакета кодов с беспроводных сенсоров
#define CONFIG_ALARM_TIMEOUT_ISR 500
#define CONFIG_ALARM_TIMEOUT_RF 500
// EN: The number of codes in a row, after which data processing begins without waiting for the completion of the batch
// RU: Количество кодов подряд, после которого начинается обработка данных без ожидания завершения пакета
#define CONFIG_ALARM_THRESHOLD_RF 3
#define CONFIG_ALARM_THRESHOLD_ISR 1

#define CONFIG_ALARM_MQTT_TOPIC_SECURITY "security"

// EN: MQTT - publishing status
// RU: MQTT - публикация статуса
#define CONFIG_ALARM_MQTT_TOPIC_STATUS_LOCAL 0
#define CONFIG_ALARM_MQTT_TOPIC_STATUS_QOS 2
#define CONFIG_ALARM_MQTT_TOPIC_STATUS_RETAINED 1

#define CONFIG_ALARM_MQTT_TOPIC_STATUS "status"

// EN: MQTT - publishing events
// RU: MQTT - публикация событий
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_LOCAL 0
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_QOS 2
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_RETAINED 1

#define CONFIG_ALARM_MQTT_TOPIC_EVENTS "events"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_TYPE "type"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_STATUS "status"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_JSON "json"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_JSON_TEMPLATE "{\"status\":%d,\"time\":\"%s\",\"unixtime\":%d,\"count\":%d}"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_ALARM "alarm"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_TAMPER "tamper"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_POWER "power"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_BATTERY "lowbat"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_CONTROL_ON "control/on"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_CONTROL_OFF "control/off"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_CONTROL_PERIMETER "control/perimeter"
#define CONFIG_ALARM_MQTT_TOPIC_EVENTS_ASE_CONTROL_OUTBUILDINGS "control/outbuildings"

// EN: Settings
// RU: Параметры
#define CONFIG_ALARM_PARAMS_ROOT_KEY "security"
#define CONFIG_ALARM_PARAMS_ROOT_TOPIC "security"
#define CONFIG_ALARM_PARAMS_ROOT_FRIENDLY "Сигнализация"

#define CONFIG_ALARM_PARAMS_MODE_KEY "mode"
#define CONFIG_ALARM_PARAMS_MODE_FRIENDLY "Режим"
#define CONFIG_ALARM_PARAMS_SIREN_DUR_KEY "siren_duration"
#define CONFIG_ALARM_PARAMS_SIREN_DUR_FRIENDLY "Длительность звучания сирены"
#define CONFIG_ALARM_PARAMS_FLASHER_DUR_KEY "flash_duration"
#define CONFIG_ALARM_PARAMS_FLASHER_DUR_FRIENDLY "Длительность световых вспышек"
#define CONFIG_ALARM_PARAMS_BUZZER_KEY "buzzer"
#define CONFIG_ALARM_PARAMS_BUZZER_FRIENDLY "Звуковой сигнал на пульте"

#define CONFIG_ALARM_PARAMS_QOS 2
#define CONFIG_ALARM_PARAMS_MIN_DURATION 0
#define CONFIG_ALARM_PARAMS_MAX_DURATION 3600

// EN: Text descriptions of security modes
// RU: Текстовые описания режимов охраны
#define CONFIG_ALARM_MODE_DISABLED "Охрана отключена"
#define CONFIG_ALARM_MODE_ARMED "Полная охрана"
#define CONFIG_ALARM_MODE_PERIMETER "Охрана периметра"
#define CONFIG_ALARM_MODE_OUTBUILDINGS "Внешние помещения"

#define CONFIG_ALARM_SIREN_DISABLED "Отключена"
#define CONFIG_ALARM_SIREN_ENABLED "Включена"

// EN: Text descriptions of security events
// RU: Текстовые описания событий охраны
#define CONFIG_ALARM_EVENT_MESSAGE_TAMPER "⚠️ Попытка взлома датчика"
#define CONFIG_ALARM_EVENT_MESSAGE_DOOROPEN "🚨 Открыта дверь"
#define CONFIG_ALARM_EVENT_MESSAGE_MOTION "🚨 Обнаружено движение"
#define CONFIG_ALARM_EVENT_MESSAGE_GAS "🚨 Обнаружена утечка газа"
#define CONFIG_ALARM_EVENT_MESSAGE_SMOKE "🚨 Обнаружено задымление"
#define CONFIG_ALARM_EVENT_MESSAGE_WATER "🚨 Протечка воды"
#define CONFIG_ALARM_EVENT_MESSAGE_POWER_ON "🟩 Электропитание восстановлено"
#define CONFIG_ALARM_EVENT_MESSAGE_POWER_OFF "🟨 Электропитание отключено"
#define CONFIG_ALARM_EVENT_MESSAGE_LOW_BATTERY "🔋 Низкий уровень заряда батареи"
#define CONFIG_ALARM_EVENT_MESSAGE_BUTTON "🔔 Нажата тревожная кнопка"
#define CONFIG_ALARM_EVENT_MESSAGE_RCTRL_OFF "🔓 Пульт: режим охраны отключен"
#define CONFIG_ALARM_EVENT_MESSAGE_RCTRL_ON "🔒 Пульт: режим охраны включен" 
#define CONFIG_ALARM_EVENT_MESSAGE_RCTRL_PERIMETER "🟡 Пульт: режим охраны периметра"
#define CONFIG_ALARM_EVENT_MESSAGE_RCTRL_OUTBUILDINGS "🟡 Пульт: режим охраны внешних помещений"

// EN: Text descriptions of security events
// RU: Текстовые описания канала управления
#define CONFIG_ALARM_SOURCE_STORED "EEPROM"
#define CONFIG_ALARM_SOURCE_BUTTONS "Панель управления"
#define CONFIG_ALARM_SOURCE_RCONTROL "Пульт"
#define CONFIG_ALARM_SOURCE_MQTT "Интернет"

// EN: Telegram notifications when switching the security mode
// RU: Уведомления в Telegram при переключении режима охраны
#define CONFIG_NOTIFY_TELEGRAM_ALARM_MODE_DISABLED "🔓 Охрана <b>отключена</b> ( <b>%s</b> )"
#define CONFIG_NOTIFY_TELEGRAM_ALARM_MODE_ARMED "🔒 Охрана <b>включена</b> ( <b>%s</b> )"
#define CONFIG_NOTIFY_TELEGRAM_ALARM_MODE_PERIMETER "🟡 Включена <b>охрана периметра</b> ( <b>%s</b> )"
#define CONFIG_NOTIFY_TELEGRAM_ALARM_MODE_OUTBUILDINGS "🟡 Включена <b>охрана внешних помещений</b> ( <b>%s</b> )"

// EN: Telegram notification templates
// RU: Шаблоны уведомлений в Telegram
#define CONFIG_NOTIFY_TELEGRAM_ALARM_CANCELED "🔕 Тревога <b>отключена</b> ( <b>%s</b> )"
#define CONFIG_NOTIFY_TELEGRAM_ALARM_TEMPLATE "<b>%s</b>\n\n<code>Сенсор:   </code><b>%s</b>\n<code>Зона:     </code><b>%s</b>\n<code>Режим:    </code><b>%s</b>\n<code>Сирена:   </code><b>%s</b>\n<code>Время:    </code><b>%s</b>\n<code>Тревоги:  </code><b>%d</b>"
#define CONFIG_NOTIFY_TELEGRAM_ALARM_SENSOR_UNDEFINED_TEMPLATE "🟡 Получена команда от неизвестного датчика ОПС\n\n<code>Протокол: %d\nЗначение: 0x%.8X\nАдрес:    0x%.8X\nКоманда:  0x%02X</code>"
#define CONFIG_NOTIFY_TELEGRAM_ALARM_COMMAND_UNDEFINED_TEMPLATE "🟡 Получена неизвестная команда от датчика ОПС\n\n<code>Датчик:   %s\nЗначение: 0x%.8X\nАдрес:    0x%.8X\nКоманда:  0x%02X</code>"

// EN: LED flash mode on input signal
// RU: Режим вспышек светодиода при входящем сигнале
#define CONFIG_ALARM_INCOMING_QUANTITY 3
#define CONFIG_ALARM_INCOMING_DURATION 50
#define CONFIG_ALARM_INCOMING_INTERVAL 50

// EN: Flash mode of the flasher in alarm mode
// RU: Режим вспышек извещателя в режиме тревоги
#define CONFIG_ALARM_ALARM_QUANTITY 1
#define CONFIG_ALARM_ALARM_DURATION 500
#define CONFIG_ALARM_ALARM_INTERVAL 500

// EN: Flash mode of the flasher in perimeter armed mode
// RU: Режим вспышек извещателя в режиме частичной охраны
#define CONFIG_ALARM_PARTIAL_QUANTITY 2
#define CONFIG_ALARM_PARTIAL_DURATION 100
#define CONFIG_ALARM_PARTIAL_INTERVAL 5000

// EN: Flash mode of the flasher in full armed mode without alarms
// RU: Режим вспышек извещателя в режиме полной охраны без тревог
#define CONFIG_ALARM_ARMED_QUANTITY 1
#define CONFIG_ALARM_ARMED_DURATION 100
#define CONFIG_ALARM_ARMED_INTERVAL 5000

// EN: Flash mode of the flasher in full armed mode with alarms
// RU: Режим вспышек извещателя в режиме полной охраны c тревогами
#define CONFIG_ALARM_WARNING_QUANTITY 3
#define CONFIG_ALARM_WARNING_DURATION 200
#define CONFIG_ALARM_WARNING_INTERVAL 5000

// EN: Siren signal when full armed mode is on
// RU: Сигнал сирены при включении режима полной охраны
#define CONFIG_ALARM_SIREN_ARMED_QUANTITY 1
#define CONFIG_ALARM_SIREN_ARMED_DURATION 250
#define CONFIG_ALARM_SIREN_ARMED_INTERVAL 250
#define CONFIG_ALARM_BUZZER_ARMED_FREQUENCY 1568
#define CONFIG_ALARM_BUZZER_ARMED_DURATION 250
#define CONFIG_ALARM_BUZZER_ARMED_QUANTITY 1

// EN: Siren sound when partial arming is on
// RU: Сигнал сирены при включении режима частичной охраны
#define CONFIG_ALARM_SIREN_PARTIAL_QUANTITY 0
#define CONFIG_ALARM_SIREN_PARTIAL_DURATION 250
#define CONFIG_ALARM_SIREN_PARTIAL_INTERVAL 250
#define CONFIG_ALARM_BUZZER_PARTIAL_FREQUENCY 1568
#define CONFIG_ALARM_BUZZER_PARTIAL_DURATION 250
#define CONFIG_ALARM_BUZZER_PARTIAL_QUANTITY 2

// EN: Siren sound when disarming without alarms
// RU: Сигнал сирены при отключении режима охраны без тревог
#define CONFIG_ALARM_SIREN_DISABLED_NORMAL_QUANTITY 3
#define CONFIG_ALARM_SIREN_DISABLED_NORMAL_DURATION 125
#define CONFIG_ALARM_SIREN_DISABLED_NORMAL_INTERVAL 125
#define CONFIG_ALARM_BUZZER_DISABLED_NORMAL_FREQUENCY 1568
#define CONFIG_ALARM_BUZZER_DISABLED_NORMAL_DURATION 125
#define CONFIG_ALARM_BUZZER_DISABLED_NORMAL_QUANTITY 3

// EN: Siren sound when disarming with alarms
// RU: Сигнал сирены при отключении режима охраны с тревогами
#define CONFIG_ALARM_SIREN_DISABLED_WARNING_QUANTITY 5
#define CONFIG_ALARM_SIREN_DISABLED_WARNING_DURATION 125
#define CONFIG_ALARM_SIREN_DISABLED_WARNING_INTERVAL 125
#define CONFIG_ALARM_BUZZER_DISABLED_WARNING_FREQUENCY 1568
#define CONFIG_ALARM_BUZZER_DISABLED_WARNING_DURATION 125
#define CONFIG_ALARM_BUZZER_DISABLED_WARNING_QUANTITY 5

// EN: Buzzer sound on alarm
// RU: Сигнал зуммера при тревоге
#define CONFIG_ALARM_BUZZER_ALARM_FREQUENCY 1568
#define CONFIG_ALARM_BUZZER_ALARM_DURATION 500
#define CONFIG_ALARM_BUZZER_ALARM_QUANTITY 5

// EN: Buzzer sound when alarm is canceled
// RU: Сигнал зуммера при отмене тревоги
#define CONFIG_ALARM_BUZZER_ALARM_CLEAR_FREQUENCY 1568
#define CONFIG_ALARM_BUZZER_ALARM_CLEAR_DURATION 125
#define CONFIG_ALARM_BUZZER_ALARM_CLEAR_QUANTITY 3
