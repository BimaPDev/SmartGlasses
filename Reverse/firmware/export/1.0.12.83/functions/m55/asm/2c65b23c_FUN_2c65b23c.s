; FUN_2c65b23c @ 0x2c65b23c size=352
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  sub sp,#0x1c
  mov r9,r0
  add r7,sp,#0x0
  ldr r0,[r7,#0x54]
  add.w r4,r7,#0x10
  adds r0,#0x6c
  ldrd r10,r11,[r7,#0x4c]
  stm r4,{r2,r3}
  bl 0x2c659524
  mov r3,sp
  mov r6,r0
  add.w r1,r7,#0x40
  sub.w r3,r3,r11, lsl #0x3
  mov r0,r4
  mov sp,r3
  mov r8,sp
  bl 0x2c652d9a
  cbz r0,0x2c65b2e4
  mov r0,r4
  bl 0x2c652d58
  lsl.w r3,r11,#0x1
  uxtb r2,r0
  str r3,[r7,#0xc]
  movs r3,#0x0
  mov r5,r3
  ldr r1,[r7,#0xc]
  cmp r1,r3
  beq 0x2c65b2b2
  ldr.w r1,[r10,r3,lsl #0x2]
  ldrb r1,[r1,#0x0]
  cmp r1,r2
  bne 0x2c65b29e
  str.w r3,[r8,r5,lsl #0x2]
  adds r5,#0x1
  adds r3,#0x1
  b 0x2c65b284
  mov r0,r6
  strd r2,r3,[r7,#0x4]
  bl 0x2c6523ac
  ldr r2,[r7,#0x4]
  ldr r3,[r7,#0x8]
  cmp r0,r2
  bne 0x2c65b29a
  b 0x2c65b294
  cbz r5,0x2c65b2e4
  mov r0,r4
  movs r4,#0x0
  bl 0x2c659e18
  lsls r3,r5,#0x2
  adds r3,#0x7
  bic r3,r3,#0x7
  sub.w sp,sp,r3
  mov r6,sp
  ldr.w r3,[r8,r4,lsl #0x2]
  ldr.w r0,[r10,r3,lsl #0x2]
  bl 0x2c66c4ec
  str.w r0,[r6,r4,lsl #0x2]
  adds r4,#0x1
  cmp r5,r4
  bne 0x2c65b2ca
  movs r5,#0x1
  b 0x2c65b2ea
  movs r4,#0x0
  mov r5,r4
  mov r6,r4
  add.w r1,r7,#0x40
  add.w r0,r7,#0x10
  bl 0x2c652d9a
  cbz r0,0x2c65b352
  add.w r0,r7,#0x10
  bl 0x2c652d58
  movs r3,#0x0
  uxtb r0,r0
  mov r1,r3
  cmp r4,r3
  bls 0x2c65b342
  ldr.w r2,[r6,r3,lsl #0x2]
  lsl.w lr,r3,#0x2
  add.w r12,r6,r3, lsl #0x2
  cmp r2,r5
  bhi 0x2c65b320
  adds r1,#0x1
  adds r3,#0x1
  b 0x2c65b306
  ldr.w r2,[r8,r3,lsl #0x2]
  ldr.w r2,[r10,r2,lsl #0x2]
  ldrb r2,[r2,r5]
  cmp r2,r0
  beq 0x2c65b31c
  subs r4,#0x1
  ldr.w r2,[r8,r4,lsl #0x2]
  str.w r2,[r8,lr]
  ldr.w r2,[r6,r4,lsl #0x2]
  str.w r2,[r12,#0x0]
  b 0x2c65b306
  cmp r4,r1
  beq 0x2c65b352
  add.w r0,r7,#0x10
  adds r5,#0x1
  bl 0x2c659e18
  b 0x2c65b2ea
  cmp r4,#0x1
  bne 0x2c65b382
  ldr r3,[r6,#0x0]
  cmp r3,r5
  bne 0x2c65b390
  ldr.w r3,[r8,#0x0]
  ldr r2,[r7,#0x48]
  cmp r3,r11
  it ge
  sub.ge.w r3,r3,r11
  str r3,[r2,#0x0]
  add.w r3,r7,#0x18
  adds r7,#0x1c
  ldmdb r3,{r0,r1}
  stm r9,{r0,r1}
  mov r0,r9
  mov sp,r7
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  cmp r4,#0x2
  bne 0x2c65b390
  ldr r3,[r6,#0x0]
  cmp r3,r5
  beq 0x2c65b35c
  ldr r3,[r6,#0x4]
  b 0x2c65b358
  ldr r3,[r7,#0x58]
  ldr r2,[r7,#0x58]
  ldr r3,[r3,#0x0]
  orr r3,r3,#0x4
  b 0x2c65b36a
