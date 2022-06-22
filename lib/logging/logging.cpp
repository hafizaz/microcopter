#include "Arduino.h"
#include <logging.h>


void setup_logging(void) {
#if SERIALLOG_ENABLED
    Serial.begin(SERIALLOG_FREQUENCY);
#endif
}

void log_debug(String msg) {
#if SERIALLOG_ENABLED && SERIALLOG_LVL_DEBUG
    Serial.write(msg);
#endif
}

void log_info(String msg) {
#if SERIALLOG_ENABLED && SERIALLOG_LVL_INFO
    Serial.write(msg);
#endif
}

void log_error(String msg) {
#if SERIALLOG_ENABLED && SERIALLOG_LVL_ERROR
    Serial.write(msg);
#endif
}