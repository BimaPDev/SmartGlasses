; FUN_100530d8 @ 0x100530d8 size=58
  push {r0,r1,r2,lr}
  ldr r3,[0x10053114]
  cmp r0,#0xa
  ldr r3,[r3,#0x0]
  str r3,[sp,#0x4]
  mov.w r3,#0x0
  bhi 0x10053108
  ldr r3,[0x10053118]
  ldrb r3,[r3,r0]
  cmp r3,r1
  bls 0x10053108
  ldr r3,[0x1005311c]
  ldr.w r3,[r3,r0,lsl #0x2]
  ldr.w r0,[r3,r1,lsl #0x2]
  ldr r3,[0x10053114]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x1005310c
  bl 0x1013cdc0
  movs r0,#0x0
  b 0x100530fa
  add sp,#0xc
  pop.w pc
