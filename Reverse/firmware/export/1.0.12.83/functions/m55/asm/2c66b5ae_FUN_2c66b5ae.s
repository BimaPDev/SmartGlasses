; FUN_2c66b5ae @ 0x2c66b5ae size=36
  push {r4,lr}
  mov r4,r1
  ldrsh.w r1,[r1,#0xe]
  bl 0x2c670688
  adds r3,r0,#0x1
  ldrh r3,[r4,#0xc]
  itete ne
  str.ne r0,[r4,#0x54]
  bic.eq r3,r3,#0x1000
  orr.ne r3,r3,#0x1000
  strh.eq r3,[r4,#0xc]
  it ne
  strh.ne r3,[r4,#0xc]
  pop {r4,pc}
