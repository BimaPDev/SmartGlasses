; FUN_2c49d154 @ 0x2c49d154 size=34
  push {r4,lr}
  ldr r4,[0x2c49d178]
  ldr r3,[r4,#0x48]
  cmp r3,#0x1
  bne 0x2c49d172
  ldr r3,[0x2c49d17c]
  ldr r0,[r3,#0x0]
  cmp r0,#0x0
  blt 0x2c49d168
  pop {r4,pc}
  mov r0,r4
  bl 0x2c49cbf8
  ldr r0,[r4,#0x20]
  pop {r4,pc}
  movs r0,#0x14
  pop {r4,pc}
