; FUN_1013659e @ 0x1013659e size=32
  push {r4,lr}
  mov r4,r1
  movs r1,#0x0
  bl 0x100d4588
  cbz r0,0x101365bc
  subs r4,#0x0
  it ne
  mov.ne r4,#0x1
  ldrb.w r3,[r0,#0x3c]
  bfi r3,r4,#0x0,#0x1
  strb.w r3,[r0,#0x3c]
  pop {r4,pc}
