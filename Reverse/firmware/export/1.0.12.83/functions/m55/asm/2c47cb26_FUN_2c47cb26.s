; FUN_2c47cb26 @ 0x2c47cb26 size=26
  push {r4,lr}
  ldr r1,[r0,#0x0]
  mov r4,r0
  cbz r1,0x2c47cb34
  movs r0,#0x3
  bl 0x2c472680
  mov r1,r4
  movs r0,#0x3
  pop.w {r4,lr}
  b.w 0x2c472680
