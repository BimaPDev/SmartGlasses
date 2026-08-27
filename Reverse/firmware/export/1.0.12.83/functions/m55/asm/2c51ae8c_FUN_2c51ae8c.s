; FUN_2c51ae8c @ 0x2c51ae8c size=30
  push {r4,r5,lr}
  ldr r4,[r0,#0x18]
  sub sp,#0xc
  cbz r4,0x2c51aec0
  ldr r0,[0x2c51aec4]
  movw r2,#0x15f
  ldr r1,[0x2c51aec8]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c51aecc]
  bl 0x2c62c82c
  add sp,#0xc
  pop {r4,r5,pc}
