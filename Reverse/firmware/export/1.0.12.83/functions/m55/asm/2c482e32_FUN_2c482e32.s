; FUN_2c482e32 @ 0x2c482e32 size=44
  push {r4,lr}
  ldrb r3,[r3,#0x0]
  mov r4,r0
  strb r1,[r2,#0x0]
  cbz r3,0x2c482e46
  mov r0,r4
  bl 0x2c4835ac
  cbnz r0,0x2c482e54
  pop {r4,pc}
  bl 0x2c4829e0
  mov r0,r4
  bl 0x2c4835ac
  cmp r0,#0x0
  beq 0x2c482e44
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c482d1c
