; FUN_2c626be8 @ 0x2c626be8 size=36
  cbz r0,0x2c626c0a
  push {r4,lr}
  ldrb r3,[r0,#0x10]
  mov r4,r0
  cbnz r3,0x2c626bfc
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c62bea8
  bl 0x2c62de2c
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c62bea8
  bx lr
