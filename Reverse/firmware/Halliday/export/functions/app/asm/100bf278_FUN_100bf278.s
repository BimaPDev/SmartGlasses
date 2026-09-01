; FUN_100bf278 @ 0x100bf278 size=28
  push {r4,lr}
  mov r4,r0
  ldr r3,[0x100bf294]
  ldrb r2,[r3,#0xc]
  bfi r2,r0,#0x1,#0x1
  strb r2,[r3,#0xc]
  bl 0x100be204
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x100c1208
