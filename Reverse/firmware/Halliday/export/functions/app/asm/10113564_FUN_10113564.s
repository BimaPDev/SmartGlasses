; FUN_10113564 @ 0x10113564 size=28
  push {r4,lr}
  mov r4,r0
  cbnz r0,0x1011356e
  ldr r3,[0x10113580]
  ldr r4,[r3,#0x8]
  movs r2,#0x20
  add.w r0,r4,#0x78
  bl 0x1011e9f8
  movs r0,#0x0
  strb.w r0,[r4,#0x97]
  pop {r4,pc}
