; FUN_2c46f5fc @ 0x2c46f5fc size=38
  push {r3,lr}
  movs r1,#0x9
  movs r0,#0x0
  bl 0x2c47245c
  mov r1,r0
  movs r0,#0x0
  ldr.w r3,[r1,#-0x4]
  and r3,r3,#0x3
  orr r3,r3,#0x2100000
  str.w r3,[r1,#-0x4]
  pop.w {r3,lr}
  b.w 0x2c472680
