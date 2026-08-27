; FUN_2c5df27c @ 0x2c5df27c size=38
  cbz r1,0x2c5df2ba
  push {r4,r5,lr}
  mov r4,r1
  ldrb.w r2,[r1,#0x21]
  ldr r3,[r1,#0xc]
  sub sp,#0x14
  ldr r1,[0x2c5df460]
  mov r5,r0
  movs r0,#0x4
  str r1,[sp,#0x0]
  ldr r1,[0x2c5df464]
  strd r3,r2,[sp,#0x4]
  movs r2,#0x25
  ldr r3,[0x2c5df468]
  bl 0x2c62c82c
  bx lr
