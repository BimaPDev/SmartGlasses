; FUN_2c4bbb34 @ 0x2c4bbb34 size=72
  push {r4,lr}
  str.w r3,[r0,#0x84]
  dsb #0xf
  ldr.w r3,[r0,#0x80]
  movw r4,#0x3fe0
  ubfx r12,r3,#0xd,#0xf
  ubfx lr,r3,#0x3,#0xa
  lsl.w r12,r12,#0x5
  and.w r1,r12,r4
  mov r3,lr
  orr.w r2,r1,r3, lsl #0x1e
  subs r3,#0x1
  str.w r2,[r0,#0x274]
  adds r2,r3,#0x1
  bne 0x2c4bbb58
  sub.w r12,r12,#0x20
  cmn r12,#0x20
  bne 0x2c4bbb52
  dsb #0xf
  isb #0xf
  movs r0,#0x0
  pop {r4,pc}
