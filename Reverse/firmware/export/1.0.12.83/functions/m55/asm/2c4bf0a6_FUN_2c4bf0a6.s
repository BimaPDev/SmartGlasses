; FUN_2c4bf0a6 @ 0x2c4bf0a6 size=38
  push {r3,lr}
  bhi 0x2c4bf0c0
  lsls r3,r0,#0x1c
  and r2,r0,#0xf
  bmi 0x2c4bf0c6
  ldr r3,[0x2c4bf0cc]
  adds r2,#0x8
  ldr.w r3,[r3,r1,lsl #0x2]
  lsls r2,r2,#0x5
  ldr r0,[r3,r2]
  pop {r3,pc}
  ldr r0,[0x2c4bf0d0]
  bl 0x2c673ca8
  ldr r0,[0x2c4bf0d4]
  bl 0x2c673ca8
