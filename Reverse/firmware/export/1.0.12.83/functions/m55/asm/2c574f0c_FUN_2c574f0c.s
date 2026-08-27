; FUN_2c574f0c @ 0x2c574f0c size=44
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r6,r2
  sub sp,#0x64
  ldr r3,[0x2c5751c4]
  mov r5,r1
  ldr r2,[0x2c5751c8]
  mov r4,r0
  movs r0,#0x4
  strd r1,r6,[sp,#0x8]
  ldr r1,[0x2c5751cc]
  strd r2,r3,[sp,#0x0]
  movs r2,#0x7a
  ldr r1,[r1,#0x0]
  str r1,[sp,#0x5c]
  mov.w r1,#0x0
  ldr r1,[0x2c5751d0]
  bl 0x2c62c82c
