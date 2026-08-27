; FUN_2c49d108 @ 0x2c49d108 size=36
  push {r4,lr}
  ldr r4,[0x2c49d12c]
  ldr r3,[r4,#0x48]
  cmp r3,#0x1
  bne 0x2c49d126
  ldr r3,[0x2c49d130]
  ldr r0,[r3,#0x0]
  cmp r0,#0x0
  ble 0x2c49d11c
  pop {r4,pc}
  mov r0,r4
  bl 0x2c49ce4c
  ldr r0,[r4,#0x14]
  pop {r4,pc}
  mov.w r0,#0xffffffff
  pop {r4,pc}
