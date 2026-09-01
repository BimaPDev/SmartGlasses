; FUN_1012daac @ 0x1012daac size=32
  push {r4,lr}
  lsrs r4,r1,#0x1
  ldrsb r3,[r0,r4]
  lsls r1,r1,#0x1f
  ittet mi
  and.mi r3,r3,#0xf
  orr.mi.w r2,r3,r2, lsl #0x4
  and.pl r3,r3,#0xf0
  uxtb.mi r2,r2
  it pl
  orr.pl r2,r3
  strb r2,[r0,r4]
  pop {r4,pc}
