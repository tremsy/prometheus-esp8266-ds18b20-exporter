#pragma once

// Debug mode is enabled if not zero
#define DEBUG_MODE 0
// Board name
#define BOARD_NAME "ESP8266"
// Temperature sensor name
#define TEMPERATURE_SENSOR_NAME "DS18B20/BME280"
// Sea-level pressure
#define SEALEVELPRESSURE_HPA 1013.25
// GPIO pin for DS18B20
#define DS18B20_PIN 4
// GPIO pin for BME280 SCL/SCK
#define BME_SCK 14
// GPIO pin for BME280 SDO/MISO
#define BME_MISO 12
// GPIO pin for BME280 SDA/MOSI
#define BME_MOSI 13
// GPIO pin for BME280 CSB/CS
#define BME_CS 2
// How long to cache the sensor results, in milliseconds
#define READ_INTERVAL 5000
// How many times to try to read the sensor before returning an error
#define READ_TRY_COUNT 5
// Wi-Fi SSID (required)
#define WIFI_SSID ""
// Wi-Fi password (required)
#define WIFI_PASSWORD ""
// Hostname for DHCP DDNS, overrides the default (uncomment to enable)
// #define WIFI_HOSTNAME "my_host_name"
// Use static IPv4 addressing, disable for DHCPv4
#define WIFI_IPV4_STATIC true
// Static IPv4 address
#define WIFI_IPV4_ADDRESS 192, 168, 1, 15
// Static IPv4 gateway address
#define WIFI_IPV4_GATEWAY 192, 168, 1, 1
// Static IPv4 subnet mask
#define WIFI_IPV4_SUBNET_MASK 255, 255, 255, 0
// Static IPv4 primary DNS server
#define WIFI_IPV4_DNS_1 1, 1, 1, 1
// Static IPv4 secondary DNS server
#define WIFI_IPV4_DNS_2 1, 0, 0, 1
// HTTP server port
#define HTTP_SERVER_PORT 80
// HTTP metrics endpoint
#define HTTP_METRICS_ENDPOINT "/metrics"
// Prometheus namespace, aka metric prefix
#define PROM_NAMESPACE "iot"
