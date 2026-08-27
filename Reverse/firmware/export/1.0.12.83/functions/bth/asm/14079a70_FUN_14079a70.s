; FUN_14079a70 @ 0x14079a70 size=36
  ldr r0,[r0,#0x24]
  cbnz r0,0x14079a78
  movs r0,#0x0
  bx lr
  push {r3,lr}
  bl 0x1408b24c
  cbz r0,0x14079a90
  ldrb.w r0,[r0,#0x96]
  sub.w r0,r0,#0x9
  clz r0,r0
  lsrs r0,r0,#0x5
  pop {r3,pc}
  movs r0,#0x0
  pop {r3,pc}
