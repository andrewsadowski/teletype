#ifndef _EDIT_MODE_H_
#define _EDIT_MODE_H_

#include "stdbool.h"
#include "stdint.h"

void set_edit_mode(void);
void set_edit_mode_script(uint8_t new_script);
uint8_t get_edit_script(void);
void edit_mode_refresh(void);
void process_edit_keys(uint8_t key, uint8_t mod_key, bool is_held_key);
void screen_mutes_updated(void);
uint8_t screen_refresh_edit(void);

#endif
