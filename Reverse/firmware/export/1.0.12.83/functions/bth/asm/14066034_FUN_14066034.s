; FUN_14066034 @ 0x14066034 size=94
  cbz r3,0x1406606a
  cbz r2,0x1406606a
  push {r4,r5,r6,lr}
  ldr r4,[r2,#0x4]
  cbz r4,0x14066066
  ldr r4,[r2,#0x10]
  cbz r4,0x14066066
  mov.w lr,#0x0
  mov r12,lr
  ldr r5,[0x14066094]
  ldr.w r4,[r5,lr,lsl #0x2]
  uxtb.w r6,r12
  add.w lr,lr,#0x3
  cbz r4,0x1406606e
  add.w r12,r12,#0x1
  cmp.w r12,#0xb
  bne 0x1406604a
  movs r0,#0x4b
  pop {r4,r5,r6,pc}
  movs r0,#0x40
  pop {r4,r5,r6,pc}
  movs r0,#0x40
  bx lr
  add.w r12,r12,r12, lsl #0x1
  str.w r2,[r5,r12,lsl #0x2]
  movs r2,#0x1
  add.w r12,r5,r12, lsl #0x2
  strh.w r0,[r12,#0x6]
  strb.w r1,[r12,#0x8]
  strb.w r4,[r12,#0xa]
  strb.w r2,[r12,#0x9]
  mov r0,r4
  strb r6,[r3,#0x0]
  pop {r4,r5,r6,pc}
