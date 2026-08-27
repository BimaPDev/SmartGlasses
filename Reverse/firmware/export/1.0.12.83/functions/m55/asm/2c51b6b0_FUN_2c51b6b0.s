; FUN_2c51b6b0 @ 0x2c51b6b0 size=28
  push {r4,r5,lr}
  ldr r4,[r0,#0x18]
  sub sp,#0xc
  cbz r4,0x2c51b6e2
  ldr r0,[0x2c51b6e8]
  movs r2,#0xf3
  ldr r1,[0x2c51b6ec]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c51b6f0]
  bl 0x2c62c82c
  add sp,#0xc
  pop {r4,r5,pc}
