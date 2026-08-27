; FUN_2c49d278 @ 0x2c49d278 size=36
  push {r4,lr}
  ldr r4,[0x2c49d29c]
  ldr r3,[r4,#0x48]
  cmp r3,#0x1
  bne 0x2c49d296
  ldr r3,[0x2c49d2a0]
  ldr r0,[r3,#0x0]
  cmp r0,#0x0
  ble 0x2c49d28c
  pop {r4,pc}
  mov r0,r4
  bl 0x2c49ce4c
  ldr r0,[r4,#0x14]
  pop {r4,pc}
  mov.w r0,#0xffffffff
  pop {r4,pc}
