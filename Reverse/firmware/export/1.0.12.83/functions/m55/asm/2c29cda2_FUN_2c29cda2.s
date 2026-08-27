; FUN_2c29cda2 @ 0x2c29cda2 size=28
  push {r0,r1,r2,r3,r4,r6,lr}
  ldrsb r5,[r2,r5]
  strb r0,[r7,r7]
  lsls r5,r2,#0x1
  lsls r0,r0,#0x4
  lsls r0,r5,#0x3
  cmp r7,#0x0
  lsls r0,r0,#0x1
  movs r0,r0
  blt 0x2c29cdb8
  movs r0,r0
  asrs r0,r0,#0x20
  movs r0,r0
  movs r0,r0
