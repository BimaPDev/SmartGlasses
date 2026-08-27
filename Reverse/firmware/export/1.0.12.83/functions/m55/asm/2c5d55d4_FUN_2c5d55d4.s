; FUN_2c5d55d4 @ 0x2c5d55d4 size=38
  push {r4,lr}
  ldr r4,[r0,#0xc]
  cbz r4,0x2c5d55e8
  ldr.w r0,[r4,#0x25c]
  bl 0x2c62be40
  ldrb.w r3,[r4,#0x260]
  cbnz r3,0x2c5d55ea
  pop {r4,pc}
  movs r2,#0x0
  mov r0,r4
  movs r3,#0x1
  mov r1,r2
  pop.w {r4,lr}
  b.w 0x2c5d51e4
