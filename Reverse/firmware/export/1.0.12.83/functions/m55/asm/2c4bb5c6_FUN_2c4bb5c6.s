; FUN_2c4bb5c6 @ 0x2c4bb5c6 size=26
  push {r3,lr}
  bhi 0x2c4bb5d8
  add.w r0,r0,r0, lsl #0x1
  ldr r3,[0x2c4bb5e0]
  ldr.w r3,[r3,r0,lsl #0x2]
  ldr r0,[r3,#0x18]
  pop {r3,pc}
  mov r1,r0
  ldr r0,[0x2c4bb5e4]
  bl 0x2c673ca8
