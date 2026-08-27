; FUN_2c141980 @ 0x2c141980 size=64
  push {r3,r4,r5,lr}
  ldr r3,[r0,#0x8]
  cbz r3,0x2c1419be
  mov r4,r0
  add.w r2,r0,#0xc
  ldrexh r3,[r2]
  cbnz r3,0x2c141998
  clrex
  b 0x2c1419a2
  subs r1,r3,#0x1
  strexh r5,r1,[r2]
  cbz r5,0x2c1419a2
  b 0x2c14198c
  uxth r3,r3
  cbz r3,0x2c1419be
  bl 0x2c14089c
  movs r2,#0x0
  mov r1,r2
  bl 0x2c140ec8
  mov r0,r4
  ldrh r1,[r4,#0xc]
  pop.w {r3,r4,r5,lr}
  b.w 0x2c13eed8
  pop {r3,r4,r5,pc}
