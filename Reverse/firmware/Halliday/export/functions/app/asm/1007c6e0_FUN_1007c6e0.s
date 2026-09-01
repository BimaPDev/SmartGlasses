; FUN_1007c6e0 @ 0x1007c6e0 size=26
  push {r3,lr}
  bl 0x1007c690
  pop.w {r3,lr}
  uxth r0,r0
  orr r1,r0,#0x10600
  orr r1,r1,#0x20
  ldr r0,[0x1007c6fc]
  b.w 0x1007c100
