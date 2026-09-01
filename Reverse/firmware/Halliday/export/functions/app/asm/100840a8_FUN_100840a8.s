; FUN_100840a8 @ 0x100840a8 size=28
  push {r3,lr}
  ldr r3,[0x100840c4]
  mov r2,r1
  ldrb r1,[r3,#0x0]
  cbnz r1,0x100840ba
  pop.w {r3,lr}
  b.w 0x10083e64
  ldr r0,[0x100840c8]
  bl 0x10119dc2
  movs r0,#0x0
  pop {r3,pc}
