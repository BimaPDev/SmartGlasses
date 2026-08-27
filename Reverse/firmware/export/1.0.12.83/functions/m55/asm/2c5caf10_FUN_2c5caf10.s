; FUN_2c5caf10 @ 0x2c5caf10 size=30
  push {r2,r3,r4,r7,lr}
  subs r4,#0x16
  add r1,sp,#0x330
  subs r4,#0x16
  add r2,sp,#0xd4
  cmp r4,#0x5d
  adds r4,r6,r3
  subs r4,#0x17
  cpsid a
  subs r4,#0x16
  sbc.w r12,r4,r0, lsl #0xc
  lsrs r4,r4,#0x19
  subs r4,#0x40
  udf #0xa0
