; FUN_2c49616a @ 0x2c49616a size=18
  push {r3,lr}
  ldr r3,[0x2c496180]
  ldr r0,[r2,#0x0]
  strb r1,[r3,#0x0]
  cbz r0,0x2c496178
  bl 0x2c64723c
  movs r0,#0x1
  pop {r3,pc}
