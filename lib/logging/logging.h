#ifndef LOGGING_h
#define LOGGING_h

#include "Arduino.h"

#ifdef SERIAL_LOG
#define SERIALLOG_ENABLED       (1)
#else
#define SERIALLOG_ENABLED       (0)
#endif

#ifdef DEBUG
#define LOG_LEVEL               (0)
#elif defined(RELEASE)
#define LOG_LEVEL               (1)
#endif

#define SERIALLOG_LVL_DEBUG     (LOG_LEVEL == 0 ? 1 : 0)
#define SERIALLOG_LVL_INFO      (LOG_LEVEL <= 1 ? 1 : 0)
#define SERIALLOG_LVL_ERROR     (LOG_LEVEL <= 2 ? 1 : 0)
#define SERIALLOG_FREQUENCY     (9600)

void setup_logging(void);
void log_debug(String);
void log_info(String);
void log_error(String);
#endif