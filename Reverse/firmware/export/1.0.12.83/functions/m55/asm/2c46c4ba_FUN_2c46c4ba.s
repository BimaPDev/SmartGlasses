; FUN_2c46c4ba @ 0x2c46c4ba size=32
  push {r4,lr}
  ldr r3,[r0,#0xc]
  mov r4,r0
  subs r3,#0x1
  str r3,[r0,#0xc]
  cbz r3,0x2c46c4c8
  pop {r4,pc}
  ldr r3,[r0,#0x20]
  cbz r3,0x2c46c4d0
  ldr r1,[r0,#0x24]
  blx r3
  ldr r3,[r4,#0x4]
  mov r0,r4
  pop.w {r4,lr}
  bx r3
