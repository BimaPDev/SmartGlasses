; FUN_14051668 @ 0x14051668 size=24
  push {r3,lr}
  movs r0,#0x0
  bl 0x1404a1b4
  ldrb.w r0,[r0,#0xda]
  sub.w r0,r0,#0x1
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
