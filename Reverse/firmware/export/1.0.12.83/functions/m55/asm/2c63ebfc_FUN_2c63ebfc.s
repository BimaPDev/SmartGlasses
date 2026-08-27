; FUN_2c63ebfc @ 0x2c63ebfc size=34
  push {r4,lr}
  bl 0x2c640dc0
  cbz r0,0x2c63ec16
  ldr r4,[0x2c63ec20]
  ldr r0,[r4,#0x0]
  bl 0x2c62be40
  ldr r0,[r4,#0x0]
  pop.w {r4,lr}
  b.w 0x2c62be74
  movs r0,#0x1
  bl 0x2c640ccc
  b 0x2c63ec04
