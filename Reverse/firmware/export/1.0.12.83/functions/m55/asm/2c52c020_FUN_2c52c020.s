; FUN_2c52c020 @ 0x2c52c020 size=46
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr r2,[0x2c52c2e4]
  sub sp,#0x74
  ldr.w r10,[0x2c52c314]
  mov r4,r0
  mov r5,r3
  mov r8,r1
  mov r3,r10
  ldr r1,[0x2c52c2e8]
  movs r0,#0x4
  strd r2,r10,[sp,#0x0]
  ldr r2,[0x2c52c2ec]
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x6c]
  mov.w r2,#0x0
  mov.w r2,#0x200
  bl 0x2c62c82c
