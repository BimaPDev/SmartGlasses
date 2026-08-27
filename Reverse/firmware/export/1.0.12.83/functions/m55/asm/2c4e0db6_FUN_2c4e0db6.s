; FUN_2c4e0db6 @ 0x2c4e0db6 size=36
  push {r4,lr}
  ldr r3,[r0,#0x0]
  mov r4,r0
  ldr.w r0,[r3,#-0xc]
  add.w r1,r4,#0x18c
  add r0,r4
  bl 0x2c4de692
  movs r3,#0x0
  mov r0,r4
  str.w r3,[r4,#0x188]
  pop.w {r4,lr}
  b.w 0x2c4e0044
