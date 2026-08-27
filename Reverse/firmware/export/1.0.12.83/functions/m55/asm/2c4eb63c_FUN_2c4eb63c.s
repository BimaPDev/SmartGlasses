; FUN_2c4eb63c @ 0x2c4eb63c size=34
  push {r4,lr}
  ldr r4,[r0,#0xc]
  sub sp,#0x8
  cbz r4,0x2c4eb66e
  ldr r2,[r4,#0x0]
  mov.w r1,#0x128
  ldr r0,[0x2c4eb674]
  str r2,[sp,#0x4]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r3,[0x2c4eb678]
  ldr r2,[0x2c4eb67c]
  bl 0x2c673d88
  add sp,#0x8
  pop {r4,pc}
