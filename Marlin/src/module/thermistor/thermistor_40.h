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
// Temptable measured using a fluke meter
//
const short temptable_40[][2] PROGMEM = {
  { OV(   1), 848 },
  { OV(  26), 300 },
  { OV(  32), 290 },
  { OV(  38), 280 },
  { OV(  44), 270 },
  { OV(  50), 260 },
  { OV(  54), 250 },
  { OV(  60), 240 },
  { OV(  70), 230 },
  { OV(  84), 220 },
  { OV(  99), 210 },
  { OV( 120), 200 },
  { OV( 145), 190 },
  { OV( 174), 180 },
  { OV( 212), 170 },
  { OV( 258), 160 },
  { OV( 309), 150 },
  { OV( 371), 140 },
  { OV( 442), 130 },
  { OV( 513), 120 },
  { OV( 593), 110 },
  { OV( 674), 100 },
  { OV( 750),  90 },
  { OV( 818),  80 },
  { OV( 875),  70 },
  { OV( 920),  60 },
  { OV( 957),  50 },
  { OV( 980),  40 },
  { OV( 997),  30 },
  { OV(1006),  20 },
  { OV(1014),  10 },
  { OV(1018),  0 }
};
