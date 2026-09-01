; FUN_1012d872 @ 0x1012d872 size=40
  push {r3,lr}
  movs r0,#0x1
  bl 0x100a2bb8
  ldr r3,[0x100a2eac]
  ldr r0,[r3,#0x0]
  adds r0,#0x38
  bl 0x1013cb84
  movs r0,#0x0
  pop {r3,pc}
  push {r3,lr}
  bl 0x100a1cc0
  bl 0x100e7ed4
  pop.w {r3,lr}
  b.w 0x100a2e94
