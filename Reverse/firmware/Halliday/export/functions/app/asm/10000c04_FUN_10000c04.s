; FUN_10000c04 @ 0x10000c04 size=80
  ldr r2,[0x10000c54]
  push {r4,r5,lr}
  mov r0,r2
  ldr r1,[0x10000c58]
  ldr r4,[0x10000c5c]
  movs r3,#0x0
  cmp r3,#0x1
  itt ne
  ldr.ne.w r5,[r0,r3,lsl #0x2]
  str.ne.w r5,[r1,r3,lsl #0x2]
  adds r3,#0x1
  cmp r3,#0x7
  bne 0x10000c10
  add.w r1,r1,#0x100
  cmp r1,r4
  add.w r0,r0,#0x1c
  bne 0x10000c0e
  ldr r3,[0x10000c60]
  ldr r1,[0x10000c64]
  ldr r0,[r2,#0x4]
  adds r2,#0x1c
  str r0,[r3,#0x0]
  add.w r3,r3,#0x100
  cmp r3,r1
  bne 0x10000c32
  ldr r3,[0x10000c68]
  ldr r2,[0x10000c6c]
  ldr.w r1,[r3,#0x228]
  str r1,[r2,#0x0]
  ldr.w r2,[r3,#0x224]
  ldr r3,[0x10000c70]
  str r2,[r3,#0x0]
  pop {r4,r5,pc}
