; FUN_1005cb80 @ 0x1005cb80 size=36
  cmp r0,#0x2
  mov r1,r0
  push {r3,lr}
  beq 0x1005cb8c
  cmp r0,#0x4
  bne 0x1005cb92
  ldr r3,[0x1005cba4]
  ldr r0,[r3,#0x0]
  pop {r3,pc}
  cmp r0,#0x1
  bne 0x1005cb9a
  ldr r3,[0x1005cba8]
  b 0x1005cb8e
  ldr r0,[0x1005cbac]
  bl 0x10119dc2
  movs r0,#0x0
  b 0x1005cb90
