; FUN_2c49d38c @ 0x2c49d38c size=40
  push {r4,lr}
  ldr r4,[0x2c49d3b4]
  ldr r3,[r4,#0x48]
  cmp r3,#0x1
  bne 0x2c49d3ae
  ldr r2,[0x2c49d3b8]
  subw r3,r3,#0xbb8
  ldr r0,[r2,#0x0]
  cmp r0,r3
  blt 0x2c49d3a4
  pop {r4,pc}
  mov r0,r4
  bl 0x2c49cb44
  ldr r0,[r4,#0x2c]
  pop {r4,pc}
  mov.w r0,#0xffffffff
  pop {r4,pc}
