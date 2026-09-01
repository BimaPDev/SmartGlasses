; FUN_1006443c @ 0x1006443c size=32
  ldr r3,[0x1006445c]
  mov r1,r0
  ldr r0,[r3,#0x0]
  push {r4,lr}
  cbnz r0,0x10064452
  movs r1,#0x98
  ldr r3,[0x10064460]
  ldr r2,[0x10064464]
  ldr r0,[0x10064468]
  bl 0x10117c88
  ldr r2,[r0,#0x8]
  pop.w {r4,lr}
  ldr r2,[r2,#0x10]
  bx r2
