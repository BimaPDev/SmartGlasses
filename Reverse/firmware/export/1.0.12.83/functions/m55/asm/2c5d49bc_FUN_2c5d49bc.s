; FUN_2c5d49bc @ 0x2c5d49bc size=36
  push {r4,lr}
  ldr r4,[r0,#0xc]
  sub sp,#0x8
  cbz r4,0x2c5d49ea
  ldr.w r3,[r4,#0x284]
  cbz r3,0x2c5d49ea
  ldr r0,[0x2c5d49f0]
  movw r2,#0x22e
  ldr r3,[0x2c5d49f4]
  ldr r1,[0x2c5d49f8]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
