; FUN_2c49d0d8 @ 0x2c49d0d8 size=40
  push {r4,lr}
  ldr r4,[0x2c49d100]
  ldr r3,[r4,#0x48]
  cmp r3,#0x1
  bne 0x2c49d0fa
  ldr r2,[0x2c49d104]
  subw r3,r3,#0xbb8
  ldr r0,[r2,#0x0]
  cmp r0,r3
  blt 0x2c49d0f0
  pop {r4,pc}
  mov r0,r4
  bl 0x2c49cb44
  ldr r0,[r4,#0x2c]
  pop {r4,pc}
  mov.w r0,#0xffffffff
  pop {r4,pc}
