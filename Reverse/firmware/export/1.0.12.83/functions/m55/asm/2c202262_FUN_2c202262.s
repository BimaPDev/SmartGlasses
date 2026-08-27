; FUN_2c202262 @ 0x2c202262 size=38
  push {r1,r2,r3,r4,r5,r6,r7,lr}
  movs r0,r0
  ldrh r0,[r0,#0x38]
  add r3,sp,#0x3f0
  sub sp,#0x1fc
  lsls r0,r0,#0x18
  movs r0,#0xfc
  subs r0,r0,r0
  lsls r2,r7,#0x3
  b 0x2c2022b6
  vmla.i32 q0,q14,d0[0x0]
  lsls r0,r0,#0xc
  mcr2 p3,0x5,pc,cr13,cr12,0x5
  movs r0,r0
  movs r0,r0
  movs r0,r0
  asrs r6,r3,#0x3
