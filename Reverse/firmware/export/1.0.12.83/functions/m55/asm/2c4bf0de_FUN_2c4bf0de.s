; FUN_2c4bf0de @ 0x2c4bf0de size=40
  push {r3,lr}
  bhi 0x2c4bf0fa
  lsls r3,r0,#0x1c
  and r2,r0,#0xf
  bmi 0x2c4bf100
  ldr r3,[0x2c4bf108]
  adds r2,#0x8
  ldr.w r3,[r3,r1,lsl #0x2]
  add.w r2,r3,r2, lsl #0x5
  ldr r0,[r2,#0x4]
  pop {r3,pc}
  ldr r0,[0x2c4bf10c]
  bl 0x2c673ca8
  ldr r0,[0x2c4bf110]
  bl 0x2c673ca8
