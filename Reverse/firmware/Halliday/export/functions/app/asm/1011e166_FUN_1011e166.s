; FUN_1011e166 @ 0x1011e166 size=28
  push {r3,r4,r5,lr}
  mov r4,r0
  mov r5,r2
  bl 0x1011df0c
  cmp r0,r5
  ittt ne
  ldrb.ne.w r3,[r4,#0xf0]
  orr.ne r3,r3,#0x1
  strb.ne.w r3,[r4,#0xf0]
  pop {r3,r4,r5,pc}
