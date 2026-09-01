; FUN_10064150 @ 0x10064150 size=32
  ldr r3,[0x10064170]
  mov r1,r0
  ldr r0,[r3,#0x0]
  push {r4,lr}
  cbnz r0,0x10064166
  movs r1,#0x6c
  ldr r3,[0x10064174]
  ldr r2,[0x10064178]
  ldr r0,[0x1006417c]
  bl 0x10117c88
  ldr r2,[r0,#0x8]
  pop.w {r4,lr}
  ldr r2,[r2,#0x8]
  bx r2
