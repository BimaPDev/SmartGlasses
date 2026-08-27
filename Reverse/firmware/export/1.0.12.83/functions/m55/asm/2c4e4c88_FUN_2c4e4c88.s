; FUN_2c4e4c88 @ 0x2c4e4c88 size=32
  push {r3,r4,r5,lr}
  ldr r3,[r0,#0x28]
  mov r5,r0
  mov r4,r1
  cbz r3,0x2c4e4ca6
  ldr r1,[r1,#0x0]
  cbz r1,0x2c4e4ca6
  movs r2,#0x0
  bl 0x2c4e4f4c
  ldr r3,[r5,#0x28]
  ldr r0,[r4,#0x0]
  blx r3
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r3,r4,r5,pc}
