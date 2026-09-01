; FUN_1012dd0c @ 0x1012dd0c size=44
  ldrd r2,r3,[r0,#0x8]
  push {r4,lr}
  mov r4,r2
  subs r1,r1,r2
  sbc.w r3,r3,r3, lsl #0x1
  lsrs r1,r1,#0xc
  orr.w r1,r1,r3, lsl #0x14
  ldrd r3,r0,[r0,#0x10]
  lsrs r3,r3,#0xc
  adds r1,#0x1
  orr.w r3,r3,r0, lsl #0x14
  cmp r1,r3
  it cc
  add.cc.w r4,r2,r1, lsl #0xc
  mov r0,r4
  pop {r4,pc}
