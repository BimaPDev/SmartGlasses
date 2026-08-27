; FUN_2c28dbf4 @ 0x2c28dbf4 size=24
  push {r0,r1,r2,r3,r5,r6,lr}
  strb r5,[r2,r5]
  adds r0,#0x8f
  movs r0,r0
  lsrs r0,r0,#0x8
  lsls r2,r6,#0x3
  lsls r0,r0,#0x18
  lsls r1,r6,#0x3
  movs r0,r0
  adds.w r0,r11,#0x800000
  pop {pc}
