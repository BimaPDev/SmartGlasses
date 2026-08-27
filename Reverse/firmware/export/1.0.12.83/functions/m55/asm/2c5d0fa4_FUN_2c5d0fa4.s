; FUN_2c5d0fa4 @ 0x2c5d0fa4 size=36
  push {r4,lr}
  ldr r4,[r0,#0xc]
  sub sp,#0x8
  cbz r4,0x2c5d0fd0
  ldrb.w r0,[r4,#0x74]
  movw r2,#0x4c2
  ldr r1,[0x2c5d0fec]
  ldr r3,[0x2c5d0ff0]
  strd r1,r0,[sp,#0x0]
  ldr r1,[0x2c5d0ff4]
  movs r0,#0x4
  bl 0x2c62c82c
  add sp,#0x8
  pop {r4,pc}
