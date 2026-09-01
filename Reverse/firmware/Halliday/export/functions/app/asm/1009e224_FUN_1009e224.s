; FUN_1009e224 @ 0x1009e224 size=28
  push {r4,lr}
  mov.w r1,#0xffffffff
  ldr r0,[0x1009e240]
  bl 0x1011dbf4
  ldr r3,[0x1009e244]
  ldr r4,[r3,#0x0]
  cbz r4,0x1009e238
  ldr r4,[r4,#0x0]
  bl 0x1009e02c
  mov r0,r4
  pop {r4,pc}
