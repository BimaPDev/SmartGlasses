; FUN_1001dbac @ 0x1001dbac size=44
  push {r0,r1,r2,lr}
  ldr r3,[0x1001dbd8]
  cmp r0,#0x2
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  itet ls
  ldr.ls r3,[0x1001dbdc]
  mov.hi r0,#0x0
  ldr.ls.w r0,[r3,r0,lsl #0x2]
  ldr r3,[0x1001dbd8]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1001dbd2
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
