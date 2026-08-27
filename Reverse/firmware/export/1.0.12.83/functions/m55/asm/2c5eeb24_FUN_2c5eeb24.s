; FUN_2c5eeb24 @ 0x2c5eeb24 size=38
  push {r4,lr}
  ldr r4,[r0,#0x18]
  sub sp,#0x8
  cbz r4,0x2c5eeb58
  ldrb.w r3,[r4,#0xa8]
  cbz r3,0x2c5eeb58
  ldr r3,[r4,#0x1c]
  cbz r3,0x2c5eeb58
  ldr r0,[0x2c5eeb5c]
  movs r2,#0x71
  ldr r3,[0x2c5eeb60]
  ldr r1,[0x2c5eeb64]
  str r0,[sp,#0x0]
  movs r0,#0x4
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
