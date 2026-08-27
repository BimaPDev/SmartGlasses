; FUN_2c504aac @ 0x2c504aac size=28
  push {r4,lr}
  bl 0x2c478b68
  cbz r0,0x2c504ac6
  mov r4,r0
  movs r0,#0x1
  bl 0x2c471604
  ldr r1,[0x2c504ac8]
  ldr r3,[r4,#0x58]
  pop.w {r4,lr}
  bx r3
  pop {r4,pc}
