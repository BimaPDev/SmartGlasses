/* firmware.ld — the shipped image as a BSP.
 *
 * Absolute symbols for functions already living in platform_tester.bin 1.0.12.83.
 * Link against this and your code can call the vendor's LVGL / display / libc
 * directly instead of reimplementing them.
 *
 * Thumb bit: every address has |1 set so the linker treats the target as Thumb
 * (a BL/BLX to an even address would try to switch to ARM state and fault).
 *
 * All addresses byte-verified against the binary — see analysis/ADDRESS_AUDIT.md.
 * VERSION-LOCKED to 1.0.12.83. These move between builds; re-derive for 1.0.7/1.0.11.
 */

/* ---- LVGL core ---------------------------------------------------------- */
lv_obj_create           = 0x2C606A10 | 1;
lv_obj_set_size         = 0x2C607048 | 1;
lv_obj_set_style_radius = 0x2C62C7E8 | 1;
lv_label_create         = 0x2C637344 | 1;
lv_label_set_text       = 0x2C638730 | 1;
lv_timer_create         = 0x2C62BDD8 | 1;
lv_timer_pause          = 0x2C62BE40 | 1;

/* Do NOT call this on a freshly created object — see BATT_CIRCLE_POSTMORTEM.md */
fw_obj_style_helper     = 0x2C603A04 | 1;

/* ---- libc --------------------------------------------------------------- */
fw_snprintf             = 0x2C66B450 | 1;

/* ---- battery / SOC ------------------------------------------------------ */
fw_soc_getter           = 0x2C48A2C4 | 1;   /* returns state-of-charge */
fw_soc_getter_thunk     = 0x2C5D68D8 | 1;   /* push {r3,lr}; bl getter; pop {r3,pc} */

/* ---- HUD widget internals ----------------------------------------------- */
fw_time_battery_ctor    = 0x2C5D931C | 1;   /* customTimeAndBatteryWidget ctor.
                                               RUNS DURING BOOT/SPLASH. Creating
                                               LVGL objects here bootloops. */
fw_spec_widget_factory  = 0x2C5D9C78 | 1;   /* case 3 -> ctor */

/* ---- data (RAM / SRAM — NOT flash offsets) ------------------------------ */
fw_soc_u16              = 0x3C408A6E;       /* live state-of-charge, u16 */
fw_lv_obj_class         = 0x3C3F2CAC;       /* lv_obj class descriptor */
fw_dock_color_ptr       = 0x3D6940D0;       /* do not deref during boot UI */
fw_spec_widget_slots    = 0x3C43B9E0;       /* RAM ctor table, 16-byte records */
fw_standby_widget_ids   = 0x3C43C8B4;       /* RAM, 0x330 bytes, stride 8 */
