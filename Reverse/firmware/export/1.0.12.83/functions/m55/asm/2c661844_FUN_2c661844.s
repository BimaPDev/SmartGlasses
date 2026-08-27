; FUN_2c661844 @ 0x2c661844 size=358
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  sub sp,#0x14
  mov r8,r0
  add r7,sp,#0x0
  ldr r0,[r7,#0x4c]
  add.w r9,r7,#0x8
  ldr.w r10,[r7,#0x44]
  adds r0,#0x6c
  stm r9,{r2,r3}
  bl 0x2c65faf0
  mov r2,sp
  ldr r3,[r7,#0x48]
  mov r11,r0
  add.w r1,r7,#0x38
  mov r0,r9
  sub.w r3,r2,r3, lsl #0x3
  mov sp,r3
  mov r4,sp
  bl 0x2c656c1a
  cbz r0,0x2c6618ea
  mov r0,r9
  movs r6,#0x0
  bl 0x2c656bd8
  ldr r2,[r7,#0x48]
  mov r3,r0
  mov r5,r6
  lsls r2,r2,#0x1
  cmp r2,r6
  beq 0x2c6618b8
  ldr.w r1,[r10,r6,lsl #0x2]
  ldr r1,[r1,#0x0]
  cmp r1,r3
  bne 0x2c6618a4
  str.w r6,[r4,r5,lsl #0x2]
  adds r5,#0x1
  adds r6,#0x1
  b 0x2c66188c
  mov r0,r11
  strd r3,r2,[r7,#0x0]
  bl 0x2c656bcc
  ldr r3,[r7,#0x0]
  ldr r2,[r7,#0x4]
  cmp r0,r3
  bne 0x2c6618a0
  b 0x2c66189a
  cbz r5,0x2c6618ea
  mov r0,r9
  movs r6,#0x0
  bl 0x2c660394
  lsls r3,r5,#0x2
  adds r3,#0x7
  bic r3,r3,#0x7
  sub.w sp,sp,r3
  mov r9,sp
  ldr.w r3,[r4,r6,lsl #0x2]
  ldr.w r0,[r10,r3,lsl #0x2]
  bl 0x2c66ea0c
  str.w r0,[r9,r6,lsl #0x2]
  adds r6,#0x1
  cmp r5,r6
  bne 0x2c6618d0
  movs r5,#0x1
  b 0x2c6618f0
  movs r6,#0x0
  mov r5,r6
  mov r9,r6
  add.w r1,r7,#0x38
  add.w r0,r7,#0x8
  bl 0x2c656c1a
  cbz r0,0x2c66195c
  add.w r0,r7,#0x8
  bl 0x2c656bd8
  movs r3,#0x0
  mov r11,r0
  lsl.w lr,r5,#0x2
  mov r1,r3
  cmp r6,r3
  bls 0x2c66194c
  ldr.w r2,[r9,r3,lsl #0x2]
  lsl.w r12,r3,#0x2
  add.w r0,r9,r3, lsl #0x2
  cmp r2,r5
  bhi 0x2c66192a
  adds r1,#0x1
  adds r3,#0x1
  b 0x2c661910
  ldr.w r2,[r4,r3,lsl #0x2]
  ldr.w r2,[r10,r2,lsl #0x2]
  ldr.w r2,[r2,lr]
  cmp r2,r11
  beq 0x2c661926
  subs r6,#0x1
  ldr.w r2,[r4,r6,lsl #0x2]
  str.w r2,[r4,r12]
  ldr.w r2,[r9,r6,lsl #0x2]
  str r2,[r0,#0x0]
  b 0x2c661910
  cmp r6,r1
  beq 0x2c66195c
  add.w r0,r7,#0x8
  adds r5,#0x1
  bl 0x2c660394
  b 0x2c6618f0
  cmp r6,#0x1
  bne 0x2c66198c
  ldr.w r3,[r9,#0x0]
  cmp r3,r5
  bne 0x2c66199e
  ldr r2,[r7,#0x48]
  ldr r3,[r4,#0x0]
  cmp r3,r2
  it ge
  sub.ge r3,r3,r2
  ldr r2,[r7,#0x40]
  str r3,[r2,#0x0]
  add.w r3,r7,#0x10
  adds r7,#0x14
  ldmdb r3,{r0,r1}
  stm r8,{r0,r1}
  mov r0,r8
  mov sp,r7
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  cmp r6,#0x2
  bne 0x2c66199e
  ldr.w r3,[r9,#0x0]
  cmp r3,r5
  beq 0x2c661968
  ldr.w r3,[r9,#0x4]
  b 0x2c661964
  ldr r3,[r7,#0x50]
  ldr r2,[r7,#0x50]
  ldr r3,[r3,#0x0]
  orr r3,r3,#0x4
  b 0x2c661974
