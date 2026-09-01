; FUN_100a8cf8 @ 0x100a8cf8 size=22
  push {r3,lr}
  cbnz r0,0x100a8d0a
  mov.w r1,#0x37c
  ldr r3,[0x100a8d10]
  ldr r2,[0x100a8d14]
  ldr r0,[0x100a8d18]
  bl 0x10117c88
  ldr r0,[r0,#0x18]
  pop {r3,pc}
