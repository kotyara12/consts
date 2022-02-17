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
#define CONFIG_MQTT_WRITE_BUFFER_SIZE 4098      
// EN: Receive buffer size in bytes
// RU: Размер буфера приема в байтах
#define CONFIG_MQTT_READ_BUFFER_SIZE 256      
// EN: The maximum message size that can be sent through the outbox. Messages larger than this size will be sent directly to the task context
// RU: Максимальный размер сообщения, который может быть отправлен через outbox. Сообщения больше этого размера, будут отправлены напрямую, в контекст задачи
#define CONFIG_MQTT_MAX_OUTBOX_MESSAGE_SIZE 1024
// EN: The maximum size of the outbox send queue. If the outbox already has the specified number of messages, then an attempt will be made to send directly
// RU: Максимальный размер очереди отправки outbox. Если в outbox уже есть заданное количество сообщений, то будет предпринята попытка прямой отправки
#define CONFIG_MQTT_MAX_OUTBOX_SIZE 4
// EN: MQTT task stack size
// RU: Параметры задачи MQTT
#define CONFIG_MQTT_CLIENT_STACK_SIZE 4098
#define CONFIG_MQTT_CLIENT_PRIORITY CONFIG_DEFAULT_TASK_PRIORITY
#define CONFIG_MQTT_CLIENT_CORE 1

