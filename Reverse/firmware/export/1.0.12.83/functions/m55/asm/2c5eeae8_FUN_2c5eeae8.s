; FUN_2c5eeae8 @ 0x2c5eeae8 size=32
  push {r4,lr}
  ldr r4,[r0,#0x18]
  sub sp,#0x8
  cbz r4,0x2c5eeb12
  ldr r3,[r4,#0x0]
  cbz r3,0x2c5eeb12
  ldr r2,[0x2c5eeb18]
  movs r0,#0x4
  ldr r1,[0x2c5eeb1c]
  str r2,[sp,#0x0]
  movs r2,#0xd8
  ldr r3,[0x2c5eeb20]
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
