/* giza - a scientific plotting layer built on cairo
 *
 * This file is (or was) part of GIZA, a scientific plotting
 * layer built on cairo.
 * GIZA comes with ABSOLUTELY NO WARRANTY.
 * This is free software; and you are welcome to redistribute
 * it under the terms of the GNU General Public License
 * (see LICENSE file for details) and the provision that
 * this notice remains intact. If you modify this file, please
 * note section 2a) of the GPLv2 states that:
 *
 *  a) You must cause the modified files to carry prominent notices
 *     stating that you changed the files and the date of any change.
 *
 * Copyright (C) 2010 James Wetter. All rights reserved.
 * Contact: wetter.j@gmail.com
 *
 */

int _giza_open_device_xw ();
void _giza_init_norm_xw ();
void _giza_flush_device_xw ();
void _giza_change_page_xw ();
void _giza_draw_background_xw ();
void _giza_close_device_xw ();
void _giza_expand_clipping_xw ();
void _giza_get_key_press_xw (int mode, int moveCurs, double xanc, double yanch, double *x, double *y, char *ch);
int _giza_init_band_xw (int mode);
