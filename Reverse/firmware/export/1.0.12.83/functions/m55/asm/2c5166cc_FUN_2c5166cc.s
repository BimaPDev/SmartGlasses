; FUN_2c5166cc @ 0x2c5166cc size=28
  push {r4,lr}
  movs r1,#0x10
  mov r4,r0
  ldr r0,[r0,#0x0]
  bl 0x2c606bb4
  cbz r0,0x2c5166dc
  pop {r4,pc}
  ldr r0,[r4,#0x0]
  movs r1,#0x10
  pop.w {r4,lr}
  b.w 0x2c606b6c
