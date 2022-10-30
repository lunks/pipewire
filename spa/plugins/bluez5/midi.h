/* Spa V4l2 dbus
 *
 * Copyright © 2022 Pauli Virtanen
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */
#ifndef SPA_BT_MIDI_H_
#define SPA_BT_MIDI_H_

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#include <spa/utils/defs.h>
#include <spa/support/log.h>

#define BLUEZ_SERVICE			"org.bluez"
#define BLUEZ_ADAPTER_INTERFACE		BLUEZ_SERVICE ".Adapter1"
#define BLUEZ_DEVICE_INTERFACE		BLUEZ_SERVICE ".Device1"
#define BLUEZ_GATT_MANAGER_INTERFACE	BLUEZ_SERVICE ".GattManager1"
#define BLUEZ_GATT_PROFILE_INTERFACE	BLUEZ_SERVICE ".GattProfile1"
#define BLUEZ_GATT_SERVICE_INTERFACE	BLUEZ_SERVICE ".GattService1"
#define BLUEZ_GATT_CHR_INTERFACE	BLUEZ_SERVICE ".GattCharacteristic1"

#define BT_MIDI_SERVICE_UUID		"03b80e5a-ede8-4b33-a751-6ce34ec4c700"
#define BT_MIDI_CHR_UUID		"7772e5db-3868-4112-a1a9-f2669d106bf3"

#endif
