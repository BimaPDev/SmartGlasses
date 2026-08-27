; FUN_14026764 @ 0x14026764 size=464
  push {r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  cmp r0,#0x1
  ldrb.w r12,[sp,#0x28]
  bhi.w 0x140268d8
  cmp r1,#0x1
  bhi.w 0x140268f2
  ldr r6,[0x14026934]
  mov r4,r0
  ldrb r0,[r6,r0]
  cmp r0,#0x0
  bne.w 0x140268de
  ldr r5,[0x14026938]
  ldrsb r0,[r5,r4]
  cmp r0,#0x0
  blt 0x140267ac
  mov.w lr,#0x1
  ldr.w r8,[0x1402695c]
  lsrs r7,r0,#0x5
  and r0,r0,#0x1f
  adds r7,#0x20
  lsl.w r0,lr,r0
  str.w r0,[r8,r7,lsl #0x2]
  dsb #0xf
  isb #0xf
  ldr r7,[0x1402693c]
  ldrsb r0,[r7,r4]
  cmp r0,#0x0
  blt 0x140267d8
  mov.w r9,#0x1
  ldr.w r8,[0x1402695c]
  lsr.w lr,r0,#0x5
  and r0,r0,#0x1f
  add.w lr,lr,#0x20
  lsl.w r0,r9,r0
  str.w r0,[r8,lr,lsl #0x2]
  dsb #0xf
  isb #0xf
  ldrsb r0,[r5,r4]
  ldr r5,[0x14026940]
  ldr.w r9,[0x14026960]
  ldr.w lr,[r5,#0x8]
  add.w r8,r0,#0x10
  str.w r9,[lr,r8,lsl #0x2]
  dsb #0xf
  cmp r0,#0x0
  blt.w 0x140268f8
  movs r5,#0xa0
  add.w r0,r0,#0xe0000000
  add.w r0,r0,#0xe100
  strb.w r5,[r0,#0x300]
  ldr r5,[0x14026940]
  ldrsb r0,[r7,r4]
  ldr.w r8,[0x14026964]
  ldr r7,[r5,#0x8]
  add.w lr,r0,#0x10
  str.w r8,[r7,lr,lsl #0x2]
  dsb #0xf
  cmp r0,#0x0
  blt.w 0x14026922
  movs r7,#0xa0
  add.w r5,r0,#0xe0000000
  add.w r5,r5,#0xe100
  strb.w r7,[r5,#0x300]
  cmp r4,#0x0
  bne 0x14026906
  mov.w r5,#0x40000000
  mov.w r7,#0x2000
  str.w r7,[r5,#0xa0]
  mov.w r7,#0x8000
  str.w r7,[r5,#0xa0]
  movs r7,#0x5
  str.w r7,[r5,#0xa4]
  movs r5,#0x0
  ldr r7,[0x14026944]
  ldr.w r8,[0x14026968]
  ldr.w r11,[r7,r4,lsl #0x2]
  ldr r7,[0x14026948]
  rsb lr,r4,r4, lsl #0x4
  add.w r9,r7,r4, lsl #0x4
  ldr r7,[0x1402694c]
  ldr.w r10,[0x14026954]
  add.w lr,r7,lr, lsl #0x2
  add.w r7,r8,r4, lsl #0x2
  str.w r7,[r11,#0x0]
  ldr r7,[0x14026950]
  cmp r0,r5
  strb.w r12,[r10,r4]
  str.w r5,[r8,r4,lsl #0x2]
  str.w r5,[r7,r4,lsl #0x2]
  str.w r5,[r9,#0xc]
  strb.w r5,[lr,#0x10]
  strb.w r5,[lr,#0x24]
  strb.w r5,[lr,#0x38]
  blt 0x140268b2
  movs r7,#0x1
  lsrs r5,r0,#0x5
  lsls r5,r5,#0x2
  and r0,r0,#0x1f
  add.w r5,r5,#0xe0000000
  add.w r5,r5,#0xe100
  lsl.w r0,r7,r0
  str.w r0,[r5,#0x180]
  str r0,[r5,#0x0]
  movs r5,#0x1
  ldrb r0,[r6,r4]
  ldr.w lr,[0x1402696c]
  ldr.w r12,[0x14026970]
  add.w r7,r1,r4, lsl #0x1
  lsl.w r1,r5,r1
  orrs r1,r0
  str.w r2,[lr,r7,lsl #0x2]
  str.w r3,[r12,r7,lsl #0x2]
  movs r0,#0x0
  strb r1,[r6,r4]
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
  movs r0,#0x1
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
  ldr r3,[0x14026954]
  ldrb r2,[r3,r4]
  cmp r2,r12
  it eq
  mov.eq r0,#0x3
  beq 0x140268da
  mov r1,r12
  ldr r0,[0x14026958]
  bl 0x1402b0f8
  movs r0,#0x2
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
  and r0,r0,#0xf
  subs r0,#0x4
  add r0,r5
  movs r5,#0xa0
  strb r5,[r0,#0x18]
  b 0x14026804
  mov.w r5,#0x40000000
  mov.w r7,#0x4000
  str.w r7,[r5,#0xa0]
  mov.w r7,#0x10000
  str.w r7,[r5,#0xa0]
  movs r7,#0xa
  str.w r7,[r5,#0xa4]
  b 0x1402684c
  mov.w lr,#0xa0
  and r7,r0,#0xf
  subs r7,#0x4
  add r5,r7
  strb.w lr,[r5,#0x18]
  b 0x1402682e
