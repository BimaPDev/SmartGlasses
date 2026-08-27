; FUN_140434e0 @ 0x140434e0 size=26
  ldr r3,[0x140434fc]
  rsb r0,r0,r0, lsl #0x3
  add.w r0,r3,r0, lsl #0x3
  ldrb.w r0,[r0,#0x43e]
  sub.w r0,r0,#0x2
  clz r0,r0
  lsrs r0,r0,#0x5
  bx lr
