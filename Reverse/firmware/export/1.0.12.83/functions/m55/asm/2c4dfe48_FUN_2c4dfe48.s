; FUN_2c4dfe48 @ 0x2c4dfe48 size=128
  push {r4,r5,lr}
  movs r3,#0x1
  sub sp,#0x2c
  mov r4,r1
  ldr r5,[r0,#0x4]
  cmp r5,r3
  ble 0x2c4dfe68
  ldr r1,[r0,#0x0]
  add.w r2,r1,r3, lsl #0x3
  ldr.w r1,[r1,r3,lsl #0x3]
  cmp r1,r4
  beq 0x2c4dfec2
  adds r3,#0x1
  b 0x2c4dfe52
  movs r2,#0x1
  movs r1,#0x85
  movw r0,#0xa2fd
  bl 0x2c4e34f4
  ldr r3,[0x2c4dfec8]
  lsrs r2,r4,#0x18
  ldr r0,[0x2c4dfecc]
  ldr r3,[r3,#0x8]
  add.w r2,r3,r2, lsl #0x3
  str r2,[sp,#0x24]
  ubfx r2,r4,#0x10,#0x8
  add.w r2,r3,r2, lsl #0x3
  str r2,[sp,#0x20]
  ubfx r2,r4,#0x8,#0x8
  add.w r2,r3,r2, lsl #0x3
  str r2,[sp,#0x1c]
  uxtb r2,r4
  add.w r3,r3,r2, lsl #0x3
  strd r4,r3,[sp,#0x14]
  ldr r3,[0x2c4dfed0]
  str r3,[sp,#0x10]
  mov.w r3,#0x1300
  str r3,[sp,#0xc]
  ldr r3,[0x2c4dfed4]
  str r3,[sp,#0x8]
  movs r3,#0x85
  str r3,[sp,#0x4]
  ldr r3,[0x2c4dfed8]
  str r3,[sp,#0x0]
  movs r3,#0x0
  mov r2,r3
  mov r1,r3
  bl 0x2c4e0504
  movs r2,#0x0
  mov r0,r2
  add sp,#0x2c
  pop {r4,r5,pc}
