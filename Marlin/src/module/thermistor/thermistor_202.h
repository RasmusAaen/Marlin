/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

//
// Unknown 200K thermistor on a Copymaster 3D hotend
// Temptable copied from original firmware 
//
const short temptable_202[][2] PROGMEM = {
  { OV(   1), 864 },
  { OV(  35), 300 },
  { OV(  38), 295 },
  { OV(  41), 290 },
  { OV(  44), 285 },
  { OV(  47), 280 },
  { OV(  51), 275 },
  { OV(  55), 270 },
  { OV(  60), 265 },
  { OV(  65), 260 },
  { OV(  70), 255 },
  { OV(  76), 250 },
  { OV(  83), 245 },
  { OV(  90), 240 },
  { OV(  98), 235 },
  { OV( 107), 230 },
  { OV( 116), 225 },
  { OV( 127), 220 },
  { OV( 138), 215 },
  { OV( 151), 210 },
  { OV( 164), 205 },
  { OV( 179), 200 },
  { OV( 195), 195 },
  { OV( 213), 190 },
  { OV( 232), 185 },
  { OV( 253), 180 },
  { OV( 275), 175 },
  { OV( 299), 170 },
  { OV( 325), 165 },
  { OV( 352), 160 },
  { OV( 381), 155 },
  { OV( 411), 150 },
  { OV( 443), 145 },
  { OV( 476), 140 },
  { OV( 511), 135 },
  { OV( 546), 130 },
  { OV( 581), 125 },
  { OV( 617), 120 },
  { OV( 652), 115 },
  { OV( 687), 110 },
  { OV( 720), 105 },
  { OV( 753), 100 },
  { OV( 783),  95 },
  { OV( 812),  90 },
  { OV( 839),  85 },
  { OV( 864),  80 },
  { OV( 886),  75 },
  { OV( 906),  70 },
  { OV( 924),  65 },
  { OV( 940),  60 },
  { OV( 954),  55 },
  { OV( 966),  50 },
  { OV( 976),  45 },
  { OV( 985),  40 },
  { OV( 992),  35 },
  { OV( 998),  30 },
  { OV(1003),  25 },
  { OV(1007),  20 },
  { OV(1011),  15 },
  { OV(1014),  10 },
  { OV(1016),   5 },
  { OV(1018),   0 }

};
