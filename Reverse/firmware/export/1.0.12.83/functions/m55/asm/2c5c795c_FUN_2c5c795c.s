; FUN_2c5c795c @ 0x2c5c795c size=44
  adds r0,#0x8
  b.w 0x2c5d4f50
  push {r3,lr}
  bl 0x2c5c685c
  pop.w {r3,lr}
  b.w 0x2c5c6d64
  ldr.w r2,[r0,#0x258]
  cbz r2,0x2c5d4f64
  add.w r3,r0,#0x148
  subs r0,r2,r3
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
  mov r0,r2
  bx lr
