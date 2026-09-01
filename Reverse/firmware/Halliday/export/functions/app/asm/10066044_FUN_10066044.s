; FUN_10066044 @ 0x10066044 size=34
  cmp.w r0,#0xe10
  push {r4,lr}
  bls 0x1006605a
  movw r1,#0x115
  ldr r3,[0x10066068]
  ldr r2,[0x1006606c]
  ldr r0,[0x10066070]
  bl 0x10117c88
  movw r3,#0x70a0
  pop.w {r4,lr}
  ldr r3,[r3,#0x24]
  bx r3
