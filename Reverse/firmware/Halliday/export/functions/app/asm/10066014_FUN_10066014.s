; FUN_10066014 @ 0x10066014 size=34
  cmp.w r0,#0xe10
  push {r4,lr}
  bls 0x1006602a
  mov.w r1,#0x100
  ldr r3,[0x10066038]
  ldr r2,[0x1006603c]
  ldr r0,[0x10066040]
  bl 0x10117c88
  movw r3,#0x70a0
  pop.w {r4,lr}
  ldr r3,[r3,#0x20]
  bx r3
