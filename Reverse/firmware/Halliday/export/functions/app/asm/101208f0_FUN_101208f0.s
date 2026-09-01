; FUN_101208f0 @ 0x101208f0 size=32
  push {r4,lr}
  ldr r0,[r0,#0xc]
  ldr r0,[r0,#0x0]
  ldrb r4,[r0,#0x9]
  cbz r4,0x1012090c
  ldrb r0,[r0,#0xa]
  cbz r0,0x1012090a
  udiv r3,r3,r4
  movs r0,#0x1
  str r3,[r1,#0x0]
  ldr r3,[sp,#0x8]
  str r3,[r2,#0x0]
  pop {r4,pc}
  mov r0,r4
  b 0x1012090a
