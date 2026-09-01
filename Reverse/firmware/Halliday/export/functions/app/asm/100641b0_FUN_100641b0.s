; FUN_100641b0 @ 0x100641b0 size=32
  ldr r3,[0x100641d0]
  mov r1,r0
  ldr r0,[r3,#0x0]
  push {r4,lr}
  cbnz r0,0x100641c6
  movs r1,#0x96
  ldr r3,[0x100641d4]
  ldr r2,[0x100641d8]
  ldr r0,[0x100641dc]
  bl 0x10117c88
  ldr r2,[r0,#0x8]
  pop.w {r4,lr}
  ldr r2,[r2,#0x4]
  bx r2
