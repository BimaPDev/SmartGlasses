; FUN_100105cc @ 0x100105cc size=60
  push {r0,r1,r2,r4,r5,lr}
  mov r3,r0
  ldr r0,[0x10010608]
  adds r4,r3,#0x2
  ldr r0,[r0,#0x0]
  str r0,[sp,#0x4]
  mov.w r0,#0x0
  movs r0,#0x0
  cmp r0,r2
  bne 0x100105f0
  ldr r3,[0x10010608]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0x4]
  eors r2,r3
  beq 0x10010604
  bl 0x1013cdc0
  ldrsh.w r5,[r3,r0,lsl #0x2]
  strh.w r5,[r3,r0,lsl #0x1]
  ldrsh.w r5,[r4,r0,lsl #0x2]
  strh.w r5,[r1,r0,lsl #0x1]
  adds r0,#0x1
  b 0x100105de
  add sp,#0xc
  pop {r4,r5,pc}
