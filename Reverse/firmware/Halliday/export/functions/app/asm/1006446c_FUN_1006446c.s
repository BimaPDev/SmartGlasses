; FUN_1006446c @ 0x1006446c size=32
  ldr r3,[0x1006448c]
  mov r1,r0
  ldr r0,[r3,#0x0]
  push {r4,lr}
  cbnz r0,0x10064482
  movs r1,#0xa6
  ldr r3,[0x10064490]
  ldr r2,[0x10064494]
  ldr r0,[0x10064498]
  bl 0x10117c88
  ldr r2,[r0,#0x8]
  pop.w {r4,lr}
  ldr r2,[r2,#0x4]
  bx r2
