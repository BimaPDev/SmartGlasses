; FUN_2c4b48c0 @ 0x2c4b48c0 size=34
  push {r3,lr}
  movs r0,#0x10
  bl 0x2c4b44a4
  ldr r0,[0x2c4b48d4]
  pop.w {r3,lr}
  b.w 0x2c4b4ea4
  cbz r0,0x2c4b4eae
  ldr r0,[r0,#0x0]
  cbz r0,0x2c4b4eae
  b.w 0x2c64723c
  mvn r0,#0x15
  bx lr
