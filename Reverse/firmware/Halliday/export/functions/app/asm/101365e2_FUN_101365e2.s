; FUN_101365e2 @ 0x101365e2 size=28
  push {r3,lr}
  bl 0x100d456c
  cbz r0,0x101365fc
  subs r1,#0x0
  it ne
  mov.ne r1,#0x1
  ldrb.w r3,[r0,#0x44]
  bfi r3,r1,#0x0,#0x1
  strb.w r3,[r0,#0x44]
  pop {r3,pc}
