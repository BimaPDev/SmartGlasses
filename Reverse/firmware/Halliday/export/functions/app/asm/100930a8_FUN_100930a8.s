; FUN_100930a8 @ 0x100930a8 size=38
  movs r2,#0x1
  push {r3,lr}
  ldr r3,[0x100930d0]
  ldr r0,[0x100930d4]
  strb r2,[r3,#0x0]
  bl 0x1012b06a
  ldr r3,[0x100930d8]
  cbnz r0,0x100930c4
  ldr r0,[r3,#0x0]
  pop.w {r3,lr}
  b.w 0x1012b322
  ldr r0,[r3,#0x0]
  pop.w {r3,lr}
  b.w 0x1012b32c
