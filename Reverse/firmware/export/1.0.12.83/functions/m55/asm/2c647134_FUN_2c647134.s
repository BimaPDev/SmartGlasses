; FUN_2c647134 @ 0x2c647134 size=64
  push {r3,r4,r5,lr}
  ldr r3,[r0,#0x8]
  cbz r3,0x2c647172
  mov r4,r0
  add.w r2,r0,#0xc
  ldrexh r3,[r2]
  cbnz r3,0x2c64714c
  clrex
  b 0x2c647156
  subs r1,r3,#0x1
  strexh r5,r1,[r2]
  cbz r5,0x2c647156
  b 0x2c647140
  uxth r3,r3
  cbz r3,0x2c647172
  bl 0x2c645b54
  movs r2,#0x0
  mov r1,r2
  bl 0x2c64621c
  ldrh r1,[r4,#0xc]
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x2c643b54
  pop {r3,r4,r5,pc}
