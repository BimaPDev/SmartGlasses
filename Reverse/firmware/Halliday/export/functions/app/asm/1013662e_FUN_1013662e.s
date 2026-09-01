; FUN_1013662e @ 0x1013662e size=16
  push {r3,lr}
  bl 0x100d456c
  cbz r0,0x1013663c
  ldrb.w r0,[r0,#0x38]
  lsrs r0,r0,#0x7
  pop {r3,pc}
