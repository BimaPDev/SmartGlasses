; FUN_2c0ea850 @ 0x2c0ea850 size=20
  b 0x2c0ea7f4
  push {r0,r2,r3,r5,lr}
  asrs r7,r0
  bl 0x2b9d90b2
  adds r1,#0xff
  lsrs r5,r1,#0x8
  mrc2 p11,0x0,APSR_nzcv,cr0,cr3,0x7
  b 0x2c0ea20c
