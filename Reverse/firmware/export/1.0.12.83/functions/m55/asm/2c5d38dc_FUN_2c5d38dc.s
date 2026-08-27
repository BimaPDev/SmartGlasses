; FUN_2c5d38dc @ 0x2c5d38dc size=42
  push {r3,r4,r5,lr}
  mov r5,r1
  mov r4,r0
  bl 0x2c5c685c
  bl 0x2c5c6cbc
  cbz r0,0x2c5d38fc
  ldr r0,[r4,#0x30]
  cbz r0,0x2c5d38fc
  movs r1,#0x1
  cbz r5,0x2c5d38fe
  pop.w {r3,r4,r5,lr}
  b.w 0x2c606a28
  pop {r3,r4,r5,pc}
  pop.w {r3,r4,r5,lr}
  b.w 0x2c606abc
