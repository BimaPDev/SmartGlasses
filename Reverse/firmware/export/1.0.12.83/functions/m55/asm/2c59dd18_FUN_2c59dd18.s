; FUN_2c59dd18 @ 0x2c59dd18 size=40
  push {r4,r5,r6,r7,lr}
  ldr r0,[0x2c59de00]
  sub sp,#0x34
  ldr r3,[0x2c59de04]
  mov r5,r1
  str r0,[sp,#0x0]
  ldr r2,[0x2c59de08]
  ldr r0,[0x2c59de0c]
  ldr r1,[0x2c59de10]
  strd r2,r3,[sp,#0x4]
  movw r2,#0x58e
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x2c]
  mov.w r0,#0x0
  movs r0,#0x4
  bl 0x2c62c82c
