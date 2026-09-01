; FUN_1006db40 @ 0x1006db40 size=116
  push {r3,r4,r5,r6,r7,lr}
  mov r4,r1
  ldr r1,[r0,#0x10]
  add.w r6,r1,r4, lsl #0x2
  ldr r5,[r6,#0x50]
  cbz r5,0x1006db88
  ldrsb.w r3,[r5,#0xb]
  ldr r7,[r0,#0x4]
  cmp r3,#0x0
  blt 0x1006db8c
  ldrb r0,[r5,#0x1]
  movs r1,#0x0
  lsrs r0,r0,#0x2
  bl 0x10056aa0
  movs r2,#0x0
  ldrb r1,[r7,#0xa]
  ldr r3,[0x1006dbb4]
  lsls r1,r1,#0xe
  add.w r4,r1,r4, lsl #0x6
  str r2,[r3,r4]
  ldrb r3,[r5,#0x18]
  lsls r3,r3,#0x1f
  bpl 0x1006db84
  ldr r0,[r5,#0x10]
  cbz r0,0x1006db84
  ldr r1,[r6,#0x60]
  cbz r1,0x1006db84
  ldr r2,[r5,#0x14]
  bl 0x1011ea40
  movs r3,#0x0
  str r3,[r6,#0x50]
  movs r0,#0x0
  pop {r3,r4,r5,r6,r7,pc}
  movs r0,#0x0
  ldrb r2,[r7,#0xa]
  lsls r3,r4,#0x6
  add.w r3,r3,r2, lsl #0xe
  add.w r3,r3,#0x40000000
  add.w r3,r3,#0x88000
  str.w r0,[r3,#0x104]
  ldr.w r2,[r3,#0x100]
  bic r2,r2,#0x80000000
  str.w r2,[r3,#0x100]
  strb.w r0,[r1,#0x2e]
  b 0x1006db70
