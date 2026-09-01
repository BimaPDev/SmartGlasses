; FUN_10064180 @ 0x10064180 size=32
  ldr r3,[0x100641a0]
  mov r1,r0
  ldr r0,[r3,#0x0]
  push {r4,lr}
  cbnz r0,0x10064196
  movs r1,#0x86
  ldr r3,[0x100641a4]
  ldr r2,[0x100641a8]
  ldr r0,[0x100641ac]
  bl 0x10117c88
  ldr r2,[r0,#0x8]
  pop.w {r4,lr}
  ldr r2,[r2,#0xc]
  bx r2
