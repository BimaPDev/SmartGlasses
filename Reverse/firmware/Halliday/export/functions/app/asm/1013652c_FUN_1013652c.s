; FUN_1013652c @ 0x1013652c size=18
  push {r3,lr}
  bl 0x100d4630
  cbz r0,0x1013653c
  ldrb.w r0,[r0,#0x39]
  ubfx r0,r0,#0x1,#0x1
  pop {r3,pc}
