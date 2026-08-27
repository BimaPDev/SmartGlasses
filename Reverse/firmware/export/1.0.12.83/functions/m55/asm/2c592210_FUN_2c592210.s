; FUN_2c592210 @ 0x2c592210 size=36
  push {r4,r5,r6,lr}
  ldr r3,[0x2c59225c]
  sub sp,#0x18
  mov r5,r2
  mov r6,r1
  str r3,[sp,#0x4]
  mov r4,r0
  ldr r2,[r0,#0xc]
  movs r0,#0x4
  str r2,[sp,#0x8]
  ldr r2,[0x2c592260]
  strd r1,r5,[sp,#0xc]
  str r2,[sp,#0x0]
  movs r2,#0xce
  ldr r1,[0x2c592264]
  bl 0x2c62c82c
