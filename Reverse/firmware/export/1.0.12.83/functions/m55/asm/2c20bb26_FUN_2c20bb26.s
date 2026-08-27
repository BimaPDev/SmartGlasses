; FUN_2c20bb26 @ 0x2c20bb26 size=42
  push {r1,r2,r3,r4,r5,r6,r7,lr}
  movs r0,r0
  lsls r0,r0,#0x4
  lsls r4,r3,#0x3
  movs r0,r0
  vqadd.u8 d0,d2,d0
  movs r0,r0
  movs r2,r4
  movs r0,r0
  mrc2 p0,0x2,r0,cr12,cr4,0x5
  stc2 p15,cr14,[r8,#-0x264]
  ldr r7,[0x2c20bd04]
  lsls r0,r6,#0x2
  addw r0,r12,#0x1af
  lsls r0,r0,#0x8
  ldcl p0,cr0,[r9],#0x0
