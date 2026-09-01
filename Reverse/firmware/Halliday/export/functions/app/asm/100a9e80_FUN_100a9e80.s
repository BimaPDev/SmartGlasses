; FUN_100a9e80 @ 0x100a9e80 size=20
  push {r4,lr}
  ldr r4,[0x100a9e94]
  ldr r0,[r4,#0x0]
  bl 0x1012d608
  cmp r0,#0x0
  itt le
  mov.le r3,#0x1
  strb.le r3,[r4,#0x5]
  pop {r4,pc}
