; FUN_100b65f0 @ 0x100b65f0 size=34
  push {r4,lr}
  mov r4,r0
  cbnz r0,0x100b660e
  push {r0,r1,r2,r3}
  movs r3,#0x5c
  ldr r2,[0x100b6614]
  ldr r1,[0x100b6618]
  ldr r0,[0x100b661c]
  bl 0x10119dc2
  pop {r0,r1,r2,r3}
  movs r1,#0x5c
  ldr r0,[0x100b6614]
  bl 0x1011a1f0
  ldr r0,[r4,#0x4]
  pop {r4,pc}
