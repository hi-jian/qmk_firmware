/* Copyright 2020 BINEPAD
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "bn003.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // #define X_KP_1               59
    // #define X_KP_2               5a
    // #define X_KP_3               5b
    // #define X_KP_4               5c
    // #define X_KP_5               5d
    // #define X_KP_6               5e
    // #define X_KP_7               5f
    // #define X_KP_8               60
    // #define X_KP_9               61
    // #define X_KP_0               62


    if (record->event.pressed) {
        send_unicode_string("\u6211\u662f\u4e2d\u56fd\u4ebaChina");
        return false;
    }
    return true;
}