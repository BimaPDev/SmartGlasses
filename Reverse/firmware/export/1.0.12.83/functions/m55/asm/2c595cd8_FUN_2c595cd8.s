; FUN_2c595cd8 @ 0x2c595cd8 size=28
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x34]
  bl 0x2c5945b8
  cbz r0,0x2c595ce6
  pop {r4,pc}
  mov r1,r0
  movs r2,#0x1
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x2c595b74
