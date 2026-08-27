; FUN_2c5aba84 @ 0x2c5aba84 size=42
  push {r4,lr}
  movs r0,#0x1
  bl 0x2c63bbfc
  bl 0x2c5abf68
  bl 0x2c5ac3f0
  cbz r0,0x2c5aba98
  pop {r4,pc}
  mov r4,r0
  bl 0x2c5abf68
  mov r1,r4
  pop.w {r4,lr}
  b.w 0x2c5ac3e8
  str.w r1,[r0,#0x184]
  bx lr
