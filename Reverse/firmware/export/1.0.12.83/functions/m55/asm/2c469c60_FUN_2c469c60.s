; FUN_2c469c60 @ 0x2c469c60 size=30
  push {r4,lr}
  ldr r4,[0x2c469cc0]
  sub sp,#0x8
  ldr r3,[r4,#0x0]
  cbz r3,0x2c469cbc
  ldr r0,[0x2c469cc4]
  movs r1,#0xb2
  ldr r3,[0x2c469cc8]
  str r0,[sp,#0x0]
  movs r0,#0x4
  ldr r2,[0x2c469ccc]
  bl 0x2c673d88
  add sp,#0x8
  pop {r4,pc}
