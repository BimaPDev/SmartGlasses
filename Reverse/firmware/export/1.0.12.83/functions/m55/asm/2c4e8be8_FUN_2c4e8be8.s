; FUN_2c4e8be8 @ 0x2c4e8be8 size=42
  push {r4,r5,lr}
  mov r5,r1
  sub sp,#0x14
  ldr r0,[r1,#0x0]
  bl 0x2c4efeec
  mov r4,r0
  ldr r0,[r5,#0x4]
  bl 0x2c4efeec
  ldr r1,[0x2c4e8c28]
  ldr r2,[0x2c4e8c2c]
  mov r5,r0
  ldr r3,[0x2c4e8c30]
  str r0,[sp,#0x8]
  movs r0,#0x4
  strd r1,r4,[sp,#0x0]
  movs r1,#0x29
  bl 0x2c673d88
