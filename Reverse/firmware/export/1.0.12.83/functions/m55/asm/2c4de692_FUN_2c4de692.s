; FUN_2c4de692 @ 0x2c4de692 size=28
  push {r4,lr}
  ldr r2,[r1,#0x0]
  mov r4,r1
  cbz r2,0x2c4de6ac
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x14]
  blx r3
  ldr r3,[r0,#0x0]
  mov r1,r4
  ldr r3,[r3,#0x10]
  blx r3
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
