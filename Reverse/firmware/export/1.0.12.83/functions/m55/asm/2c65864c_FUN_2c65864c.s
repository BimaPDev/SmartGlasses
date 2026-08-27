; FUN_2c65864c @ 0x2c65864c size=28
  push {r4,lr}
  mov r4,r0
  mov r0,r1
  bne 0x2c65865a
  ldr r0,[r4,#0x24]
  adds r3,r0,#0x1
  beq 0x2c658660
  ldr r1,[r4,#0x20]
  bl 0x2c66dd1c
  mov.w r3,#0xffffffff
  str r3,[r4,#0x24]
  pop {r4,pc}
