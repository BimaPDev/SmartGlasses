; FUN_10120c34 @ 0x10120c34 size=28
  push {r4,lr}
  ldr r3,[r0,#0xc]
  ldr r0,[r3,#0x0]
  ldrb r4,[r0,#0xb]
  ldrh r2,[r0,#0xe]
  muls r2,r4
  cmp r2,r1
  ite hi
  movw.hi r2,#0x1eb4
  movw.ls r2,#0x1eb8
  ldr r0,[r3,r2]
  pop {r4,pc}
