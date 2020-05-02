/* info.h */

#ifndef INFO_H
#define INFO_H

#include "mailbox.h"

typedef struct {
   int rate;
   int min_rate;
   int max_rate;
} clock_info_t;

#define    COMPONENT_CORE 1
#define COMPONENT_SDRAM_C 2
#define COMPONENT_SDRAM_P 3
#define COMPONENT_SDRAM_I 4

unsigned int mem_info(int size);

extern int get_clock_rate(int clk_id);
/* Cached on boot, so this is safe to call at any time */
extern int get_speed();
/* Cached on boot, so this is safe to call at any time */
extern char *get_info_string();
extern void dump_useful_info();
/* Cached on boot, so this is safe to call at any time */
extern char *get_cmdline_prop(char *prop);

#endif
