; FUN_2c066c24 @ 0x2c066c24 size=38
  push {r2,r3,lr}
  str r5,[r4,#0x54]
  ldr r0,[0x2c066d38]
  ldr r2,[r0,#0x60]
  movs r7,r7
  subs r3,r2,r5
  ldrsh r0,[r4,r3]
  str r4,[r2,r5]
  movs r2,r0
  blx r4
  lsrs r6,r2,#0x17
  strb r6,[r3,r1]
  blx 0x2b878c64
  muls r0,r2
  blx r2
  lsrs r2,r2,#0x12
  b.w 0x2c883eac
