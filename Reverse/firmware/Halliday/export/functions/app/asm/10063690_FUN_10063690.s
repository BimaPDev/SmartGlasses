; FUN_10063690 @ 0x10063690 size=158
  push {r4,r5,r6,r7,lr}
  mov r7,r0
  ldr r6,[0x10063730]
  sub sp,#0x34
  add r5,sp,#0x4
  mov r4,r1
  ldmia r6!,{r0,r1,r2,r3}
  stmia r5!,{r0,r1,r2,r3}
  ldmia r6!,{r0,r1,r2,r3}
  stmia r5!,{r0,r1,r2,r3}
  ldm.w r6,{r0,r1,r2}
  stm r5,{r0,r1,r2}
  mov r0,r7
  cmp r7,#0x0
  beq 0x10063726
  cmp r4,#0x0
  beq 0x1006372a
  subs r0,r7,#0x4
  mov r2,r0
  mov r1,r4
  adds r4,#0x10
  ldrb r3,[r1,#0x1]
  ldrb r5,[r1,#0x0]
  lsls r3,r3,#0x10
  orr.w r3,r3,r5, lsl #0x18
  ldrb r5,[r1,#0x3]
  adds r1,#0x4
  orrs r3,r5
  ldrb.w r5,[r1,#-0x2]
  cmp r4,r1
  orr.w r3,r3,r5, lsl #0x8
  str.w r3,[r2,#0x4]!
  bne 0x100636be
  movs r1,#0x4
  ldr r4,[0x10063734]
  lsls r2,r1,#0x1e
  ldr r3,[r0,#0x10]
  bne 0x10063716
  ubfx r2,r3,#0x10,#0x8
  ldrb r5,[r4,r2]
  lsrs r2,r3,#0x18
  ldrb r2,[r4,r2]
  orr.w r2,r2,r5, lsl #0x18
  ubfx r5,r3,#0x8,#0x8
  ldrb r5,[r4,r5]
  uxtb r3,r3
  ldrb r3,[r4,r3]
  orr.w r2,r2,r5, lsl #0x10
  orr.w r2,r2,r3, lsl #0x8
  add r5,sp,#0x30
  bic r3,r1,#0x3
  add r3,r5
  ldr.w r3,[r3,#-0x2c]
  eors r3,r2
  ldr.w r2,[r0,#0x4]!
  adds r1,#0x1
  eors r3,r2
  cmp r1,#0x2c
  str r3,[r0,#0x10]
  bne 0x100636e2
  movs r0,#0x1
  add sp,#0x34
  pop {r4,r5,r6,r7,pc}
  mov r0,r4
  b 0x10063726
