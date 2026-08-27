; FUN_2c494b2c @ 0x2c494b2c size=40
  push {r4,lr}
  movs r1,#0x0
  sub sp,#0x8
  movs r0,#0x7
  bl 0x2c490020
  cbz r0,0x2c494b3e
  add sp,#0x8
  pop {r4,pc}
  ldr r4,[0x2c494b58]
  movw r1,#0x29e
  ldr r0,[0x2c494b5c]
  ldr r3,[0x2c494b60]
  ldr r2,[0x2c494b64]
  strd r0,r4,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c673d88
