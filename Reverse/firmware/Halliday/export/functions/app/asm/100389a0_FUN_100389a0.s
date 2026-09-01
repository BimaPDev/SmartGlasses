; FUN_100389a0 @ 0x100389a0 size=58
  push {r0,r1,r2,r4,r5,lr}
  ldr r3,[0x100389dc]
  ldr r5,[0x100389e0]
  mov r4,r0
  ldr r2,[0x100389e4]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[r5,#0x0]
  ldr.w r1,[r2,r0,lsl #0x2]
  ldr r0,[r3,#0x10]
  bl 0x10097998
  cmp r4,#0x2
  itt ne
  ldr.ne r3,[r5,#0x0]
  strb.ne.w r4,[r3,#0x57]
  ldr r3,[0x100389dc]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x100389d6
  bl 0x1013cdc0
  add sp,#0xc
  pop {r4,r5,pc}
