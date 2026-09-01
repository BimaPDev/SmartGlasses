; FUN_1007067c @ 0x1007067c size=30
  push {r4,lr}
  mov r4,r0
  ldr r0,[0x1007069c]
  bl 0x10119dc2
  bl 0x100703d0
  sub.w r0,r4,#0x60
  mvn r1,#0x3d
  pop.w {r4,lr}
  ldr r3,[0x100706a0]
  bx r3
