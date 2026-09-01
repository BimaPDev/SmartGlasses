; FUN_101365fe @ 0x101365fe size=18
  push {r3,lr}
  bl 0x100d456c
  cbz r0,0x1013660e
  ldrb.w r0,[r0,#0x44]
  and r0,r0,#0x1
  pop {r3,pc}
