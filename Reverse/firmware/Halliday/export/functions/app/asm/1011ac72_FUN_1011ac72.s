; FUN_1011ac72 @ 0x1011ac72 size=42
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x8]
  mov.w r2,#0xffffffff
  mov.w r3,#0xffffffff
  add.w r0,r0,#0x2f4
  bl 0x1011ac40
  mov r0,r4
  bl 0x100582d0
  ldr r0,[r4,#0x8]
  pop.w {r4,lr}
  add.w r0,r0,#0x2f4
  b.w 0x1011ab56
