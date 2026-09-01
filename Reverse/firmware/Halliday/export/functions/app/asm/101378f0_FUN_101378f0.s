; FUN_101378f0 @ 0x101378f0 size=28
  push {r4,lr}
  mov r4,r0
  movw r2,#0x4e20
  movs r3,#0x0
  bl 0x1013cbaa
  ldrb.w r1,[r4,#0x40]
  ldr r0,[r4,#0x30]
  pop.w {r4,lr}
  b.w 0x1013770c
