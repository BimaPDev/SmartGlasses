; FUN_10039b40 @ 0x10039b40 size=42
  push {r0,r1,r2,lr}
  ldr r3,[0x10039b6c]
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bl 0x10039af4
  cbz r0,0x10039b56
  ldr r3,[0x10039b70]
  ldrb r0,[r3,#0xb]
  ldr r3,[0x10039b6c]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10039b64
  bl 0x1013cdc0
  add sp,#0xc
  pop.w pc
