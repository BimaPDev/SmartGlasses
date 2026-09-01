; FUN_1013655c @ 0x1013655c size=24
  push {r3,lr}
  bl 0x100d456c
  cbz r0,0x1013656e
  ldrb.w r0,[r0,#0x45]
  ubfx r0,r0,#0x5,#0x1
  pop {r3,pc}
  mvn r0,#0x4
  b 0x1013656c
