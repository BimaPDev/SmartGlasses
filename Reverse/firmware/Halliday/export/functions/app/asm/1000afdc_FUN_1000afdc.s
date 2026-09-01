; FUN_1000afdc @ 0x1000afdc size=34
  push {r0,r1,r2,lr}
  ldr r3,[0x1000b000]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  ldr r3,[0x1000b000]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1000aff6
  bl 0x1013cdc0
  ldr r0,[0x1000b004]
  add sp,#0xc
  pop.w pc
