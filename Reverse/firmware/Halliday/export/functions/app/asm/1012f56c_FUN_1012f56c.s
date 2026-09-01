; FUN_1012f56c @ 0x1012f56c size=26
  push {r3,lr}
  cbz r0,0x1012f582
  movs r2,#0x0
  movs r1,#0x4
  ldr r0,[r0,#0x0]
  bl 0x1012ef56
  subs r0,#0x1
  it ne
  mov.ne r0,#0x1
  pop {r3,pc}
  movs r0,#0x1
  b 0x1012f580
