; FUN_14038878 @ 0x14038878 size=28
  push {r3,lr}
  mov r3,r0
  ldr r2,[0x14038894]
  movw r0,#0xfc77
  strb r3,[r2,#0x0]
  movs r1,#0x8
  bl 0x1403282c
  pop.w {r3,lr}
  movs r0,#0x10
  b.w 0x140e5398
