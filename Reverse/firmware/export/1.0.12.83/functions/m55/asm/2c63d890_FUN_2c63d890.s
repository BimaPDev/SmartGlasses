; FUN_2c63d890 @ 0x2c63d890 size=34
  push {r4,lr}
  bl 0x2c63eb94
  cbz r0,0x2c63d8aa
  ldr r4,[0x2c63d8b4]
  ldr r0,[r4,#0x0]
  bl 0x2c62be40
  ldr r0,[r4,#0x0]
  pop.w {r4,lr}
  b.w 0x2c62be74
  movs r0,#0x1
  bl 0x2c63ea8c
  b 0x2c63d898
