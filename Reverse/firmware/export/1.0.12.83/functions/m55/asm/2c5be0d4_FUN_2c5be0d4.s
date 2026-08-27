; FUN_2c5be0d4 @ 0x2c5be0d4 size=44
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r0,[0x2c5be388]
  mov r5,r1
  ldr.w r11,[0x2c5be3a0]
  movs r2,#0xe5
  ldr r1,[0x2c5be38c]
  mov r3,r11
  vpush {d8}
  sub sp,#0xb4
  strd r0,r11,[sp,#0x0]
  ldr r0,[0x2c5be390]
  ldr r0,[r0,#0x0]
  str r0,[sp,#0xac]
  mov.w r0,#0x0
  movs r0,#0x4
  bl 0x2c62c82c
