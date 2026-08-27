; FUN_2c4cb8aa @ 0x2c4cb8aa size=24
  push {r4,lr}
  ldr r3,[r0,#0x14]
  mov r4,r0
  cbz r3,0x2c4cb8b8
  adds r0,#0x14
  bl 0x2c4d3c14
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c4cf254
