#ifndef IOTA_H
#define IOTA_H

#include "quantum.h"
#include <stddef.h>
#ifdef __AVR__
#include <avr/io.h>
#include <avr/interrupt.h>
#endif

bool iota_mcp23017_init(void);
bool iota_mcp23017_make_ready(void);
uint16_t iota_mcp23017_read(void);
bool iota_mcp23017_enable_interrupts(void);

#endif
