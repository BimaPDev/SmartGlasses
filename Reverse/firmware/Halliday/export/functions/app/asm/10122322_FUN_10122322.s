; FUN_10122322 @ 0x10122322 size=44
  push {r4,lr}
  mov r4,r0
  ldrb r1,[r0,#0x1]
  movs r0,#0x0
  mov r2,r0
  adds r1,#0x1
  lsls r1,r1,#0x5
  cmp r2,#0x2
  ite eq
  mov.eq r2,#0x3
  ldrb.ne r3,[r4,r2]
  add.w r2,r2,#0x1
  ittt ne
  add.ne.w r3,r3,r0, lsl #0xf
  add.ne.w r3,r3,r0, lsr #0x1
  uxth.ne r0,r3
  cmp r1,r2
  bhi 0x10122330
  pop {r4,pc}
