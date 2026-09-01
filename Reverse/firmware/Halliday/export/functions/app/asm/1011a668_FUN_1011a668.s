; FUN_1011a668 @ 0x1011a668 size=38
  push {r3,r4,r5,lr}
  mov r5,r0
  mov r4,r1
  bl 0x100568d0
  movw r3,#0x4252
  cmp.w r3,r0, lsr #0x10
  ittet eq
  bic.eq r3,r0,#0xff
  strh.eq r3,[r5,#0x0]
  mov.ne.w r0,#0xffffffff
  strb.eq r0,[r4,#0x0]
  it eq
  mov.eq r0,#0x0
  pop {r3,r4,r5,pc}
