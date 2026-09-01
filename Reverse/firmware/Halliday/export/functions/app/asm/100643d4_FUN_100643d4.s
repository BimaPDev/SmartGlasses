; FUN_100643d4 @ 0x100643d4 size=32
  ldr r3,[0x100643f4]
  mov r1,r0
  ldr r0,[r3,#0x0]
  push {r4,lr}
  cbnz r0,0x100643ea
  movs r1,#0x7d
  ldr r3,[0x100643f8]
  ldr r2,[0x100643fc]
  ldr r0,[0x10064400]
  bl 0x10117c88
  ldr r2,[r0,#0x8]
  pop.w {r4,lr}
  ldr r2,[r2,#0x8]
  bx r2
