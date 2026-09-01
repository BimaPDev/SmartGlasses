; FUN_1004375c @ 0x1004375c size=42
  push {r0,r1,r2,lr}
  ldr r2,[0x10043788]
  mov r3,r1
  ldr r2,[r2,#0x0]
  str r2,[sp,#0x4]
  mov.w r2,#0x0
  ldr r2,[0x10043788]
  ldr r1,[r2,#0x0]
  ldr r2,[sp,#0x4]
  eors r1,r2
  beq 0x10043778
  bl 0x1013cdc0
  movs r2,#0x0
  movs r1,#0x83
  add sp,#0xc
  pop.w lr
  b.w 0x10138bb8
