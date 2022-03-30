#ifndef SCREEN_H
#define SCREEN_H
#include "../cpu/types.h"
#define VIDEO_ADDRESS 0xb8000
#define MAX_ROWS (uint8_t) 0x19
#define MAX_COLS (uint8_t) 0x50
#define WHITE_ON_BLACK 0x0f
#define RED_ON_WHITE 0xf4

#define REG_SCREEN_CTRL 0x3d4
#define REG_SCREEN_DATA 0x3d5

void clear_screen();
int kprint_at(char *message, int col, int row);
int kprint(char *message);
int kprint_backspace();

#endif