; FUN_14002c48 @ 0x14002c48 size=34
  ldr r3,[0x14002cf4]
  ldr r2,[r3,#0x0]
  ldr r3,[sp,#0xc]
  eors r2,r3
  mov.w r3,#0x0
  bne.w 0x14002cf0
  add sp,#0x14
  pop.w {r4,r5,r6,r7,r8,r9,pc}
  movs r0,#0x0
  b 0x14002b9e
  bl 0x14003370
  adds r1,#0xbc
  movs r0,#0x50
