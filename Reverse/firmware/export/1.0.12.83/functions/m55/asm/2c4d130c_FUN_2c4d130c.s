; FUN_2c4d130c @ 0x2c4d130c size=28
  push {r4,lr}
  mov r4,r0
  adds r0,#0x14
  bl 0x2c4d8838
  ldrh.w r3,[r4,#0x5c]
  cmp r3,r0
  bne 0x2c4d1322
  movs r0,#0x0
  pop {r4,pc}
  movw r0,#0x403
  pop {r4,pc}
