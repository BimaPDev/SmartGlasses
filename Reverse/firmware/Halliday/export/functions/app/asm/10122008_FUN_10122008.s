; FUN_10122008 @ 0x10122008 size=32
  movs r3,#0x0
  push {r4,r5,lr}
  movs r4,#0x1c
  ldr r5,[r0,#0xc]
  mov r0,r3
  mla r4,r4,r1,r5
  cmp r0,r1
  bne 0x1012201e
  adds r0,r3,r2
  pop {r4,r5,pc}
  ldrb.w r5,[r4,#0x30]
  adds r0,#0x1
  add r3,r5
  b 0x10122016
