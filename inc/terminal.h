/*
 * terminal.h
 *
 *  Created on: May 9, 2017
 *      Author: Jarek
 */

#ifndef TERMINAL_H_
#define TERMINAL_H_

#define TERM_DEF_BG		\x1b[49m	// default background
#define TERM_DEF_FG		\x1b[39m	// default foreground

#define BOLD			\x1b[1m		// bold
#define UNDERLINE		\x1b[4m		// underlined
#define BLINK			\x1b[5m		// blink
#define NO_UNDERLINE	\x1b[24m	// no underlined
#define NO_BLINK		\x1b[25m	// no blink

#define FG_BLACK 		\x1b[30m
#define BG_BLACK		\x1b[40m
#define FG_RED			\x1b[31m
#define BG_RED			\x1b[41m
#define FG_GREEN		\x1b[32m
#define BG_GREEN		\x1b[42m
#define FG_YELLOW		\x1b[33m
#define BG_YELLOW		\x1b[43m
#define FG_BLUE			\x1b[34m
#define BG_BLUE			\x1b[44m
#define FG_MAGENTA		\x1b[35m
#define BG_MAGENTA		\x1b[45m
#define FG_CYAN			\x1b[36m
#define BG_CYAN			\x1b[46m
#define FG_WHITE		\x1b[37m
#define BG_WHITE		\x1b[47m

#define CLEAR_ALL
#define CLEAR_LINE

#define HOME			/x1b[H
#define SHOW_CURSOR		/x1b[?25h
#define HIDE_CURSOR		/x1b[?25l
#define _cursor_pos(row,column)	_puts();

#endif /* TERMINAL_H_ */
