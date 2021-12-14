#pragma once
#include "project_config.h"

// -----------------------------------------------------------------------------------------------------------------------
// ---------------------------------------------- EN - MQTT client -------------------------------------------------------
// ---------------------------------------------- RU - MQTT клиент -------------------------------------------------------
// -----------------------------------------------------------------------------------------------------------------------

// EN: The number of attempts to connect to the server, after which an event (message) will be sent and a switch to another server will be performed
// RU: Количество попыток подключения к серверу, после чего будет отправлено событие (сообщение) и выполнено переключение на другой сервер
#define CONFIG_MQTT_CONNECT_ATTEMPTS 5
// EN: The number of attempts to publish a message to the MQTT broker
// RU: Количество попыток публикации сообщения на MQTT брокер
#define CONFIG_MQTT_PUBLISH_ATTEMPTS 10
// EN: The interval in minutes after which an attempt will be made to return to the primary server (if you switched to the reserved one)
// RU: Интервал в минутах, после которого будет предпринята попытка вернуться на основной сервер (если переключились на резервный)
#define CONFIG_MQTT_BACK_TO_PRIMARY_TIME_MINUTES 15
// EN: Send buffer size in bytes
// RU: Размер буфера отправки в байтах
#define CONFIG_MQTT_WRITE_BUFFER_SIZE 2048      
// EN: Receive buffer size in bytes
// RU: Размер буфера приема в байтах
#define CONFIG_MQTT_READ_BUFFER_SIZE 256      
// EN: MQTT task stack size
// RU: Параметры задачи MQTT
#define CONFIG_MQTT_CLIENT_STACK_SIZE 4098
#define CONFIG_MQTT_CLIENT_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
#define CONFIG_MQTT_CLIENT_CORE 1

