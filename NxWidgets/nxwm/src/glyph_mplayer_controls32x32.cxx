/********************************************************************************************
 * NxWidgets/nxwm/src/glyph_mediaplayer32x32.cxx
 *
 *   Copyright (C) 2013 Ken Pettit. All rights reserved.
 *   Author: Ken Pettit <pettitkd@gmail.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name NuttX, NxWidgets, nor the names of its contributors
 *    me be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ********************************************************************************************/

/********************************************************************************************
 * Included Files
 ********************************************************************************************/

/* Automatically NuttX bitmap file. */
/* Generated from play_music.png by bitmap_converter.py. */

#include <nuttx/config.h>

#include <sys/types.h>
#include <stdint.h>
#include <stdbool.h>

#include <nuttx/nx/nxglib.h>
#include <nuttx/video/fb.h>
#include <nuttx/video/rgbcolors.h>

#include "crlepalettebitmap.hxx"

#include "nxwmconfig.hxx"
#include "nxwmglyphs.hxx"


/********************************************************************************************
 * Pre-Processor Definitions
 ********************************************************************************************/

#define BITMAP_WIDTH 32
#define BITMAP_HEIGHT 32
#define BITMAP_PALETTESIZE 8

using namespace NxWM;

/* RGB24 (8-8-8) Colors */

static const NXWidgets::nxwidget_pixel_t palette[BITMAP_PALETTESIZE] =
{
  CONFIG_NXWM_DEFAULT_BACKGROUNDCOLOR, MKRGB( 11, 24,108), MKRGB( 63, 90,192), MKRGB(121,136,250),
  MKRGB(224,234,244), MKRGB( 69, 80,149), MKRGB(127,169,239), MKRGB(152,174,207),
};

static const NXWidgets::nxwidget_pixel_t hilight_palette[BITMAP_PALETTESIZE] =
{
  CONFIG_NXWM_DEFAULT_BACKGROUNDCOLOR, MKRGB( 61, 74,158), MKRGB(113,140,242), MKRGB(171,186,255),
  MKRGB(255,255,255), MKRGB(119,130,199), MKRGB(177,219,255), MKRGB(202,224,255),
};

/* Bitmap definition for the "Play" button */

static const NXWidgets::SRlePaletteBitmapEntry play_bitmap[] =
{
  { 32,   0},                                                              /* Row 0 */
  { 14,   0}, {  4,   7}, { 14,   0},                                      /* Row 1 */
  { 10,   0}, { 12,   7}, { 10,   0},                                      /* Row 2 */
  {  8,   0}, {  3,   6}, {  9,   7}, {  3,   6}, {  1,   7}, {  8,   0},  /* Row 3 */
  {  7,   0}, {  7,   6}, {  4,   7}, {  7,   6}, {  7,   0},              /* Row 4 */
  {  6,   0}, {  3,   3}, { 13,   6}, {  4,   3}, {  6,   0},              /* Row 5 */
  {  5,   0}, {  6,   3}, {  9,   6}, {  7,   3}, {  5,   0},              /* Row 6 */
  {  4,   0}, {  1,   2}, { 22,   3}, {  1,   2}, {  4,   0},              /* Row 7 */
  {  3,   0}, {  1,   5}, { 23,   3}, {  1,   2}, {  1,   5}, {  3,   0},  /* Row 8 */
  {  3,   0}, {  3,   2}, {  5,   3}, {  1,   6}, { 13,   3}, {  4,   2},
  {  3,   0},                                                              /* Row 9 */
  {  2,   0}, {  1,   5}, {  6,   2}, {  2,   3}, {  2,   4}, {  1,   6},
  {  9,   3}, {  6,   2}, {  1,   5}, {  2,   0},                          /* Row 10 */
  {  2,   0}, {  1,   5}, {  8,   2}, {  1,   7}, {  3,   4}, {  1,   6},
  {  2,   2}, {  1,   3}, { 10,   2}, {  1,   5}, {  2,   0},              /* Row 11 */
  {  1,   0}, {  4,   5}, {  6,   2}, {  1,   7}, {  4,   4}, {  1,   7},
  {  1,   3}, {  8,   2}, {  4,   5}, {  2,   0},                          /* Row 12 */
  {  1,   0}, {  7,   5}, {  3,   2}, {  1,   7}, {  6,   4}, {  1,   7},
  {  3,   2}, {  8,   5}, {  2,   0},                                      /* Row 13 */
  {  1,   0}, {  9,   5}, {  1,   2}, {  1,   7}, {  8,   4}, {  1,   7},
  {  8,   5}, {  1,   1}, {  1,   5}, {  1,   0},                          /* Row 14 */
  {  1,   0}, {  4,   1}, {  6,   5}, {  1,   7}, { 10,   4}, {  1,   7},
  {  3,   5}, {  4,   1}, {  1,   5}, {  1,   0},                          /* Row 15 */
  {  1,   0}, {  8,   1}, {  2,   5}, {  1,   7}, { 10,   4}, {  1,   7},
  {  7,   1}, {  1,   5}, {  1,   0},                                      /* Row 16 */
  {  1,   0}, { 10,   1}, {  1,   7}, {  9,   4}, {  1,   5}, {  8,   1},
  {  1,   5}, {  1,   0},                                                  /* Row 17 */
  {  1,   0}, { 10,   1}, {  1,   7}, {  7,   4}, {  1,   5}, { 10,   1},
  {  2,   0},                                                              /* Row 18 */
  {  1,   0}, {  1,   5}, {  9,   1}, {  1,   7}, {  5,   4}, {  1,   7},
  { 12,   1}, {  2,   0},                                                  /* Row 19 */
  {  2,   0}, {  9,   1}, {  1,   7}, {  4,   4}, {  1,   5}, { 13,   1},
  {  2,   0},                                                              /* Row 20 */
  {  2,   0}, {  9,   1}, {  1,   7}, {  2,   4}, {  1,   7}, {  1,   2},
  { 13,   1}, {  1,   5}, {  2,   0},                                      /* Row 21 */
  {  2,   0}, {  1,   5}, {  8,   1}, {  1,   7}, {  1,   4}, {  1,   5},
  {  6,   2}, {  9,   1}, {  3,   0},                                      /* Row 22 */
  {  3,   0}, {  7,   1}, {  1,   2}, {  1,   5}, { 10,   2}, {  6,   1},
  {  1,   5}, {  3,   0},                                                  /* Row 23 */
  {  4,   0}, {  4,   1}, { 16,   2}, {  4,   1}, {  4,   0},              /* Row 24 */
  {  4,   0}, {  1,   5}, {  2,   1}, { 18,   2}, {  2,   1}, {  5,   0},  /* Row 25 */
  {  5,   0}, {  1,   5}, {  1,   1}, { 19,   2}, {  1,   5}, {  5,   0},  /* Row 26 */
  {  6,   0}, {  1,   5}, { 18,   2}, {  7,   0},                          /* Row 27 */
  {  8,   0}, { 15,   2}, {  1,   5}, {  8,   0},                          /* Row 28 */
  {  9,   0}, {  1,   5}, { 12,   2}, { 10,   0},                          /* Row 29 */
  { 12,   0}, {  8,   2}, { 12,   0},                                      /* Row 30 */
  { 32,   0},                                                              /* Row 31 */
};

const struct NXWidgets::SRlePaletteBitmap NxWM::g_mplayerPlayBitmap =
{
  CONFIG_NXWIDGETS_BPP,
  CONFIG_NXWIDGETS_FMT,
  BITMAP_PALETTESIZE,
  BITMAP_WIDTH,
  BITMAP_HEIGHT,
  {palette, hilight_palette},
  play_bitmap
};

/* Bitmap definition for the "Pause" button */

static const NXWidgets::SRlePaletteBitmapEntry pause_bitmap[] =
{
  { 32,   0},                                                              /* Row 0 */
  { 14,   0}, {  4,   7}, { 14,   0},                                      /* Row 1 */
  { 10,   0}, { 12,   7}, { 10,   0},                                      /* Row 2 */
  {  8,   0}, {  4,   6}, {  8,   7}, {  4,   6}, {  8,   0},              /* Row 3 */
  {  7,   0}, {  7,   6}, {  3,   7}, {  8,   6}, {  7,   0},              /* Row 4 */
  {  6,   0}, {  3,   3}, { 13,   6}, {  4,   3}, {  6,   0},              /* Row 5 */
  {  5,   0}, {  6,   3}, {  9,   6}, {  7,   3}, {  5,   0},              /* Row 6 */
  {  4,   0}, {  1,   2}, { 22,   3}, {  1,   2}, {  4,   0},              /* Row 7 */
  {  3,   0}, {  1,   5}, { 23,   3}, {  1,   2}, {  1,   5}, {  3,   0},  /* Row 8 */
  {  3,   0}, {  3,   2}, { 19,   3}, {  4,   2}, {  3,   0},              /* Row 9 */
  {  2,   0}, {  1,   5}, {  5,   2}, {  2,   3}, {  1,   6}, {  3,   4},
  {  3,   3}, {  1,   7}, {  2,   4}, {  1,   7}, {  2,   3}, {  6,   2},
  {  1,   5}, {  2,   0},                                                  /* Row 10 */
  {  2,   0}, {  1,   5}, {  7,   2}, {  1,   7}, {  3,   4}, {  1,   7},
  {  1,   2}, {  1,   3}, {  4,   4}, {  1,   3}, {  7,   2}, {  1,   5},
  {  2,   0},                                                              /* Row 11 */
  {  1,   0}, {  4,   5}, {  5,   2}, {  1,   7}, {  3,   4}, {  1,   7},
  {  1,   2}, {  1,   3}, {  4,   4}, {  1,   6}, {  4,   2}, {  4,   5},
  {  2,   0},                                                              /* Row 12 */
  {  1,   0}, {  8,   5}, {  1,   2}, {  1,   7}, {  3,   4}, {  1,   7},
  {  1,   2}, {  1,   5}, {  4,   4}, {  1,   5}, {  1,   2}, {  7,   5},
  {  2,   0},                                                              /* Row 13 */
  {  1,   0}, {  9,   5}, {  1,   7}, {  3,   4}, {  1,   7}, {  1,   2},
  {  1,   5}, {  4,   4}, {  8,   5}, {  1,   1}, {  1,   5}, {  1,   0},  /* Row 14 */
  {  1,   0}, {  4,   1}, {  5,   5}, {  1,   7}, {  3,   4}, {  1,   7},
  {  2,   5}, {  4,   4}, {  5,   5}, {  4,   1}, {  1,   5}, {  1,   0},  /* Row 15 */
  {  1,   0}, {  9,   1}, {  1,   7}, {  3,   4}, {  1,   7}, {  2,   5},
  {  4,   4}, {  1,   5}, {  8,   1}, {  1,   5}, {  1,   0},              /* Row 16 */
  {  1,   0}, {  9,   1}, {  1,   7}, {  3,   4}, {  1,   7}, {  1,   1},
  {  1,   5}, {  4,   4}, {  1,   5}, {  8,   1}, {  1,   5}, {  1,   0},  /* Row 17 */
  {  1,   0}, {  9,   1}, {  1,   7}, {  3,   4}, {  1,   7}, {  1,   1},
  {  1,   5}, {  4,   4}, {  1,   5}, {  8,   1}, {  2,   0},              /* Row 18 */
  {  1,   0}, {  1,   5}, {  8,   1}, {  1,   7}, {  3,   4}, {  1,   7},
  {  1,   1}, {  1,   5}, {  4,   4}, {  1,   5}, {  8,   1}, {  2,   0},  /* Row 19 */
  {  2,   0}, {  8,   1}, {  1,   7}, {  3,   4}, {  1,   7}, {  1,   1},
  {  1,   5}, {  4,   4}, {  1,   5}, {  8,   1}, {  2,   0},              /* Row 20 */
  {  2,   0}, {  8,   1}, {  1,   7}, {  3,   4}, {  1,   7}, {  1,   1},
  {  1,   2}, {  4,   4}, {  1,   5}, {  7,   1}, {  1,   5}, {  2,   0},  /* Row 21 */
  {  2,   0}, {  1,   5}, {  7,   1}, {  1,   7}, {  3,   4}, {  1,   6},
  {  1,   1}, {  1,   2}, {  4,   4}, {  1,   2}, {  7,   1}, {  3,   0},  /* Row 22 */
  {  3,   0}, {  7,   1}, {  1,   2}, {  3,   6}, {  4,   2}, {  2,   6},
  {  2,   2}, {  6,   1}, {  1,   5}, {  3,   0},                          /* Row 23 */
  {  4,   0}, {  4,   1}, { 16,   2}, {  4,   1}, {  4,   0},              /* Row 24 */
  {  4,   0}, {  1,   5}, {  2,   1}, { 18,   2}, {  2,   1}, {  5,   0},  /* Row 25 */
  {  5,   0}, {  1,   5}, {  1,   1}, {  6,   2}, {  6,   2}, {  7,   2},
  {  1,   5}, {  5,   0},                                                  /* Row 26 */
  {  6,   0}, {  1,   5}, {  4,   2}, {  1,   5}, {  8,   2}, {  1,   5},
  {  4,   2}, {  7,   0},                                                  /* Row 27 */
  {  8,   0}, {  3,   2}, {  4,   2}, {  2,   2}, {  4,   2}, {  2,   2},
  {  1,   5}, {  8,   0},                                                  /* Row 28 */
  {  9,   0}, {  1,   5}, {  3,   2}, {  6,   2}, {  3,   2}, { 10,   0},  /* Row 29 */
  { 12,   0}, {  8,   2}, { 12,   0},                                      /* Row 30 */
  { 32,   0},                                                              /* Row 31 */
};

const struct NXWidgets::SRlePaletteBitmap NxWM::g_mplayerPauseBitmap =
{
  CONFIG_NXWIDGETS_BPP,
  CONFIG_NXWIDGETS_FMT,
  BITMAP_PALETTESIZE,
  BITMAP_WIDTH,
  BITMAP_HEIGHT,
  {palette, hilight_palette},
  pause_bitmap
};

/* Bitmap definition for "Rewind" control */

static const NXWidgets::SRlePaletteBitmapEntry rew_bitmap[] =
{
  { 32,   0},                                                              /* Row 0 */
//  { 14,   0}, {  3,   4}, {  1,   7}, { 14,   0},                          /* Row 1 */
  { 14,   0}, {  4,   7}, { 14,   0},                                      /* Row 1 */
  { 10,   0}, { 12,   7}, { 10,   0},              /* Row 2 */
  {  8,   0}, {  1,   7}, {  3,   6}, {  8,   7},
  {  3,   6}, {  1,   7}, {  8,   0},                                      /* Row 3 */
  {  7,   0}, {  7,   6}, {  3,   7}, {  8,   6}, {  7,   0},              /* Row 4 */
  {  6,   0}, {  3,   3}, { 13,   6}, {  4,   3}, {  6,   0},              /* Row 5 */
  {  5,   0}, {  6,   3}, {  9,   6}, {  7,   3}, {  5,   0},              /* Row 6 */
  {  4,   0}, { 23,   3}, {  1,   2}, {  4,   0},                          /* Row 7 */
  {  3,   0}, {  1,   5}, { 23,   3}, {  1,   2}, {  1,   5}, {  3,   0},  /* Row 8 */
  {  3,   0}, {  3,   2}, { 18,   3}, {  5,   2}, {  3,   0},              /* Row 9 */
  {  2,   0}, {  1,   5}, {  5,   2}, {  6,   3}, {  1,   6}, {  7,   3},
  {  2,   2}, {  2,   6}, {  3,   2}, {  1,   5}, {  2,   0},              /* Row 10 */
  {  2,   0}, {  1,   5}, {  9,   2}, {  1,   6}, {  2,   4}, {  1,   3},
  {  1,   2}, {  2,   3}, {  3,   2}, {  1,   6}, {  2,   4}, {  1,   6},
  {  3,   2}, {  1,   5}, {  2,   0},                                      /* Row 11 */
  {  1,   0}, {  2,   5}, {  7,   2}, {  1,   6}, {  4,   4}, {  1,   3},
  {  4,   2}, {  1,   3}, {  1,   7}, {  3,   4}, {  1,   7}, {  3,   2},
  {  1,   5}, {  2,   0},                                                  /* Row 12 */
  {  1,   0}, {  5,   5}, {  2,   2}, {  1,   5}, {  1,   7}, {  5,   4},
  {  1,   5}, {  3,   2}, {  1,   7}, {  5,   4}, {  1,   7}, {  1,   2},
  {  3,   5}, {  2,   0},                                                  /* Row 13 */
  {  1,   0}, {  6,   5}, {  1,   7}, {  7,   4}, {  1,   5}, {  1,   2},
  {  1,   7}, {  7,   4}, {  1,   7}, {  3,   5}, {  1,   1}, {  1,   5},
  {  1,   0},                                                              /* Row 14 */
  {  1,   0}, {  4,   1}, {  1,   7}, {  9,   4}, {  1,   7}, {  9,   4},
  {  1,   7}, {  4,   1}, {  1,   5}, {  1,   0},                          /* Row 15 */
  {  1,   0}, {  4,   1}, {  1,   5}, {  9,   4}, {  1,   7}, {  9,   4},
  {  1,   5}, {  4,   1}, {  1,   5}, {  1,   0},                          /* Row 16 */
  {  1,   0}, {  6,   1}, {  1,   5}, {  7,   4}, {  1,   5}, {  1,   1},
  {  1,   5}, {  7,   4}, {  1,   5}, {  4,   1}, {  1,   5}, {  1,   0},  /* Row 17 */
  {  1,   0}, {  8,   1}, {  1,   7}, {  5,   4}, {  1,   5}, {  3,   1},
  {  1,   7}, {  5,   4}, {  1,   5}, {  4,   1}, {  2,   0},              /* Row 18 */
  {  1,   0}, {  1,   5}, {  8,   1}, {  1,   5}, {  4,   4}, {  1,   5},
  {  4,   1}, {  1,   5}, {  4,   4}, {  1,   5}, {  4,   1}, {  2,   0},  /* Row 19 */
  {  2,   0}, { 10,   1}, {  1,   7}, {  2,   4}, {  1,   2}, {  6,   1},
  {  1,   7}, {  2,   4}, {  1,   5}, {  4,   1}, {  2,   0},              /* Row 20 */
  {  2,   0}, { 11,   1}, {  1,   5}, {  1,   4}, {  1,   2}, {  7,   1},
  {  1,   5}, {  1,   7}, {  1,   5}, {  3,   1}, {  1,   5}, {  2,   0},  /* Row 21 */
  {  2,   0}, {  1,   5}, {  9,   1}, {  1,   2}, {  1,   1}, {  6,   2},
  {  9,   1}, {  3,   0},                                                  /* Row 22 */
  {  3,   0}, {  7,   1}, { 12,   2}, {  6,   1}, {  1,   5}, {  3,   0},  /* Row 23 */
  {  4,   0}, {  5,   1}, { 14,   2}, {  5,   1}, {  4,   0},              /* Row 24 */
  {  4,   0}, {  1,   5}, {  2,   1}, { 18,   2}, {  2,   1}, {  5,   0},  /* Row 25 */
  {  5,   0}, {  1,   5}, {  1,   1}, {  6,   2}, {  6,   2}, {  7,   2},
  {  1,   5}, {  5,   0},                                                  /* Row 26 */
  {  6,   0}, {  1,   5}, {  4,   2}, {  1,   5}, {  8,   2}, {  1,   5},
  {  4,   2}, {  7,   0},                                                  /* Row 27 */
  {  8,   0}, {  3,   2}, {  3,   2}, {  4,   2}, {  3,   2}, {  2,   2},
  {  1,   5}, {  8,   0},                                                  /* Row 28 */
  {  9,   0}, {  1,   5}, {  3,   2}, {  6,   2}, {  2,   2}, {  1,   5},
  { 10,   0},                                                              /* Row 29 */
  { 12,   0}, {  3,   2}, {  2,   2}, {  3,   2}, { 12,   0},              /* Row 30 */
  { 32,   0},                                                              /* Row 31 */
};

const struct NXWidgets::SRlePaletteBitmap NxWM::g_mplayerRewBitmap =
{
  CONFIG_NXWIDGETS_BPP,
  CONFIG_NXWIDGETS_FMT,
  BITMAP_PALETTESIZE,
  BITMAP_WIDTH,
  BITMAP_HEIGHT,
  {palette, hilight_palette},
  rew_bitmap
};

/* Bitmap definition for "Forward" control */

static const NXWidgets::SRlePaletteBitmapEntry fwd_bitmap[] =
{
  { 32,   0},                                                              /* Row 0 */
  { 14,   0}, {  4,   7}, { 14,   0},                                      /* Row 1 */
  { 10,   0}, { 12,   7}, { 10,   0},                                      /* Row 2 */
  {  8,   0}, {  1,   7}, {  3,   6}, {  8,   7},
  {  3,   6}, {  1,   7}, {  8,   0},                                      /* Row 3 */
  {  7,   0}, {  7,   6}, {  3,   7}, {  8,   6}, {  7,   0},              /* Row 4 */
  {  6,   0}, {  3,   3}, { 13,   6}, {  4,   3}, {  6,   0},              /* Row 5 */
  {  5,   0}, {  6,   3}, { 10,   6}, {  6,   3}, {  5,   0},              /* Row 6 */
  {  4,   0}, {  1,   2}, { 22,   3}, {  1,   2}, {  4,   0},              /* Row 7 */
  {  3,   0}, {  1,   5}, { 23,   3}, {  1,   2}, {  1,   5}, {  3,   0},  /* Row 8 */
  {  3,   0}, {  3,   2}, { 19,   3}, {  4,   2}, {  3,   0},              /* Row 9 */
  {  2,   0}, {  1,   5}, {  3,   2}, {  2,   6}, {  2,   2}, {  7,   3},
  {  1,   6}, {  5,   3}, {  6,   2}, {  1,   5}, {  2,   0},              /* Row 10 */
  {  2,   0}, {  1,   5}, {  3,   2}, {  1,   7}, {  2,   4}, {  1,   3},
  {  2,   2}, {  3,   3}, {  1,   2}, {  1,   6}, {  2,   4}, {  1,   6},
  {  9,   2}, {  1,   5}, {  2,   0},                                      /* Row 11 */
  {  1,   0}, {  2,   5}, {  3,   2}, {  1,   7}, {  3,   4}, {  1,   7},
  {  5,   2}, {  1,   6}, {  4,   4}, {  1,   5}, {  7,   2}, {  1,   5},
  {  2,   0},                                                              /* Row 12 */
  {  1,   0}, {  4,   5}, {  1,   2}, {  1,   7}, {  5,   4}, {  1,   7},
  {  3,   2}, {  1,   6}, {  5,   4}, {  1,   7}, {  1,   5}, {  2,   2},
  {  4,   5}, {  2,   0},                                                  /* Row 13 */
  {  1,   0}, {  1,   5}, {  1,   1}, {  2,   5}, {  1,   1}, {  1,   7},
  {  7,   4}, {  1,   7}, {  1,   2}, {  1,   5}, {  7,   4}, {  1,   7},
  {  4,   5}, {  1,   1}, {  1,   5}, {  1,   0},                          /* Row 14 */
  {  1,   0}, {  5,   1}, {  1,   7}, {  9,   4}, {  1,   7}, {  9,   4},
  {  1,   5}, {  3,   1}, {  1,   5}, {  1,   0},                          /* Row 15 */
  {  1,   0}, {  5,   1}, {  1,   7}, {  8,   4}, {  2,   7}, {  8,   4},
  {  1,   7}, {  4,   1}, {  1,   5}, {  1,   0},                          /* Row 16 */
  {  1,   0}, {  5,   1}, {  1,   5}, {  7,   4}, {  1,   5}, {  1,   1},
  {  1,   5}, {  7,   4}, {  1,   5}, {  5,   1}, {  1,   5}, {  1,   0},  /* Row 17 */
  {  1,   0}, {  5,   1}, {  1,   5}, {  5,   4}, {  1,   7}, {  3,   1},
  {  1,   5}, {  5,   4}, {  1,   7}, {  7,   1}, {  2,   0},              /* Row 18 */
  {  1,   0}, {  1,   5}, {  4,   1}, {  1,   5}, {  3,   4}, {  1,   7},
  {  1,   2}, {  4,   1}, {  1,   5}, {  4,   4}, {  1,   5}, {  8,   1},
  {  2,   0},                                                              /* Row 19 */
  {  2,   0}, {  4,   1}, {  1,   5}, {  2,   4}, {  1,   5}, {  6,   1},
  {  1,   5}, {  2,   4}, {  1,   7}, { 10,   1}, {  2,   0},              /* Row 20 */
  {  2,   0}, {  4,   1}, {  2,   7}, {  8,   1}, {  1,   5}, {  1,   4},
  {  1,   2}, { 10,   1}, {  1,   5}, {  2,   0},                          /* Row 21 */
  {  2,   0}, {  1,   5}, {  9,   1}, {  6,   2}, {  1,   1}, {  1,   2},
  {  9,   1}, {  3,   0},                                                  /* Row 22 */
  {  3,   0}, {  7,   1}, { 12,   2}, {  6,   1}, {  1,   5}, {  3,   0},  /* Row 23 */
  {  4,   0}, {  5,   1}, { 14,   2}, {  5,   1}, {  4,   0},              /* Row 24 */
  {  4,   0}, {  1,   5}, {  2,   1}, { 18,   2}, {  2,   1}, {  5,   0},  /* Row 25 */
  {  5,   0}, {  1,   5}, {  1,   1}, {  6,   2}, {  6,   2}, {  7,   2},
  {  1,   5}, {  5,   0},                                                  /* Row 26 */
  {  6,   0}, {  1,   5}, {  4,   2}, {  1,   5}, {  8,   2}, {  1,   5},
  {  4,   2}, {  7,   0},                                                  /* Row 27 */
  {  8,   0}, {  3,   2}, {  3,   2}, {  4,   2}, {  3,   2}, {  2,   2},
  {  1,   5}, {  8,   0},                                                  /* Row 28 */
  {  9,   0}, {  1,   5}, {  3,   2}, {  6,   2}, {  2,   2}, {  1,   5},
  { 10,   0},                                                              /* Row 29 */
  { 12,   0}, {  3,   2}, {  2,   2}, {  3,   2}, { 12,   0},              /* Row 30 */
  { 32,   0},                                                              /* Row 31 */
};

const struct NXWidgets::SRlePaletteBitmap NxWM::g_mplayerFwdBitmap =
{
  CONFIG_NXWIDGETS_BPP,
  CONFIG_NXWIDGETS_FMT,
  BITMAP_PALETTESIZE,
  BITMAP_WIDTH,
  BITMAP_HEIGHT,
  {palette, hilight_palette},
  fwd_bitmap
};

static const NXWidgets::SRlePaletteBitmapEntry vol_bitmap[] =
{
  { 22,   0},                                                              /* Row 0 */
  {  9,   0}, {  5,   7}, {  8,   0},                                      /* Row 1 */
  {  6,   0}, {  2,   6}, {  6,   7}, {  2,   6}, {  1,   7}, {  5,   0},  /* Row 2 */
  {  4,   0}, {  2,   3}, {  9,   6}, {  3,   3}, {  4,   0},              /* Row 3 */
  {  3,   0}, {  5,   3}, {  6,   6}, {  5,   3}, {  3,   0},              /* Row 4 */
  {  3,   0}, { 16,   3}, {  3,   0},                                      /* Row 5 */
  {  2,   0}, {  2,   2}, { 13,   3}, {  3,   2}, {  2,   0},              /* Row 6 */
  {  1,   0}, {  1,   5}, {  4,   2}, { 10,   3}, {  4,   2}, {  1,   5},
  {  1,   0},                                                              /* Row 7 */
  {  1,   0}, {  2,   5}, { 15,   2}, {  3,   5}, {  1,   0},              /* Row 8 */
  {  1,   0}, {  5,   5}, { 10,   2}, {  5,   5}, {  1,   0},              /* Row 9 */
  {  1,   0}, {  2,   1}, { 15,   5}, {  3,   1}, {  1,   0},              /* Row 10 */
  {  1,   0}, {  5,   1}, { 10,   5}, {  5,   1}, {  1,   0},              /* Row 11 */
  {  1,   0}, { 20,   1}, {  1,   0},                                      /* Row 12 */
  {  1,   0}, { 20,   1}, {  1,   0},                                      /* Row 13 */
  {  1,   0}, { 19,   1}, {  1,   5}, {  1,   0},                          /* Row 14 */
  {  1,   0}, {  1,   5}, {  7,   1}, {  1,   5}, {  4,   2}, {  6,   1},
  {  2,   0},                                                              /* Row 15 */
  {  2,   0}, {  5,   1}, {  8,   2}, {  4,   1}, {  1,   5}, {  2,   0},  /* Row 16 */
  {  3,   0}, {  2,   1}, { 12,   2}, {  2,   1}, {  3,   0},              /* Row 17 */
  {  3,   0}, {  1,   5}, {  1,   1}, { 13,   2}, {  1,   5}, {  3,   0},  /* Row 18 */
  {  6,   0}, { 10,   2}, {  1,   5}, {  5,   0},                          /* Row 19 */
  {  6,   0}, {  1,   5}, {  8,   2}, {  7,   0},                          /* Row 20 */
  { 22,   0},                                                              /* Row 21 */
};

const struct NXWidgets::SRlePaletteBitmap NxWM::g_mplayerVolBitmap =
{
  CONFIG_NXWIDGETS_BPP,
  CONFIG_NXWIDGETS_FMT,
  BITMAP_PALETTESIZE,
  22,
  22,
  {hilight_palette, hilight_palette},
  vol_bitmap
};
