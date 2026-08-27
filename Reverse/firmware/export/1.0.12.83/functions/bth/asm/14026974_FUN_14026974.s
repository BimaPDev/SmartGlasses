; FUN_14026974 @ 0x14026974 size=196
  cmp r0,#0x1
  bhi 0x14026a22
  push {r4,r5,r6,r7,lr}
  mov r3,r0
  ldr r4,[0x14026a38]
  mov.w lr,#0x1
  ldrb r2,[r4,r0]
  movs r0,#0x0
  add.w r12,r1,r3, lsl #0x1
  ldr r6,[0x14026a3c]
  ldr r5,[0x14026a40]
  lsl.w r1,lr,r1
  bic.w r1,r2,r1
  str.w r0,[r6,r12,lsl #0x2]
  str.w r0,[r5,r12,lsl #0x2]
  strb r1,[r4,r3]
  cmp r1,#0x0
  bne 0x14026a20
  ldr r2,[0x14026a44]
  ldrsb r2,[r2,r3]
  cmp r2,r0
  blt 0x140269c6
  ldr r0,[0x14026a48]
  lsrs r1,r2,#0x5
  and r2,r2,#0x1f
  lsl.w r2,lr,r2
  adds r1,#0x20
  str.w r2,[r0,r1,lsl #0x2]
  dsb #0xf
  isb #0xf
  ldr r2,[0x14026a4c]
  ldrsb r2,[r2,r3]
  cmp r2,#0x0
  blt 0x140269ea
  movs r0,#0x1
  ldr r4,[0x14026a48]
  lsrs r1,r2,#0x5
  and r2,r2,#0x1f
  adds r1,#0x20
  lsl.w r2,r0,r2
  str.w r2,[r4,r1,lsl #0x2]
  dsb #0xf
  isb #0xf
  cbz r3,0x14026a26
  mov.w r2,#0x40000000
  mov.w r1,#0x4000
  mov.w r7,#0x10000
  str.w r1,[r2,#0xa4]
  movs r2,#0x0
  mov.w r6,#0x40000000
  ldr r0,[0x14026a50]
  str.w r7,[r6,#0xa4]
  str.w r2,[r0,r3,lsl #0x2]
  mov r0,r2
  ldr r1,[0x14026a54]
  ldr r5,[0x14026a58]
  ldr r4,[0x14026a5c]
  add.w r1,r1,r3, lsl #0x4
  str.w r2,[r5,r3,lsl #0x2]
  str r2,[r1,#0xc]
  strb r2,[r4,r3]
  pop {r4,r5,r6,r7,pc}
  movs r0,#0x1
  bx lr
  mov.w r2,#0x40000000
  mov.w r1,#0x2000
  mov.w r7,#0x8000
  str.w r1,[r2,#0xa4]
  b 0x140269fc
