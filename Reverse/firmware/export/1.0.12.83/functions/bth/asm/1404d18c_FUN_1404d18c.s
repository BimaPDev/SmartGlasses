; FUN_1404d18c @ 0x1404d18c size=634
  push {r4,r5,r6,r7,lr}
  cmp r1,#0x2
  mov r4,r1
  mov r5,r0
  sub sp,#0x1c
  bhi 0x1404cf70
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x1404cf02
  mov r7,pc
  ldr r6,[0x1404d004]
  ldr r2,[0x1404d008]
  ldrb r0,[r6,#0x0]
  ldr r3,[0x1404d00c]
  strd r7,lr,[r2,#0x0]
  adds r2,r0,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x1404d010]
  str.w lr,[r3,r0,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r3,#0x1
  ldr r2,[0x1404d014]
  lsls r3,r5
  ldr.w r0,[r2,r4,lsl #0x2]
  orrs r3,r0
  str.w r3,[r2,r4,lsl #0x2]
  cbnz r1,0x1404cf22
  mov.w r2,#0xffffffff
  ldr r3,[0x1404d008]
  str r2,[r3,#0x0]
  ldr r6,[0x1404d018]
  ldr r7,[0x1404d01c]
  ldrb r2,[r6,#0x0]
  ldr r3,[0x1404d00c]
  str.w lr,[r7,r2,lsl #0x2]
  adds r2,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  msr basepri,r1
  cmp r0,#0x0
  beq 0x1404cff2
  ldr r0,[0x1404d020]
  movw r1,#0x18a4
  strd r0,r5,[sp,#0x0]
  ldr r3,[0x1404d024]
  ldr r2,[0x1404d028]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r2,#0x3
  movs r1,#0x4
  ldr r3,[0x1404d014]
  ldr r0,[0x1404d02c]
  add sp,#0x1c
  pop.w {r4,r5,r6,r7,lr}
  b.w 0x1402a9fc
  cmp r1,#0x3
  bne 0x1404cf48
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x1404cfa2
  mov r7,pc
  ldr r6,[0x1404d004]
  ldr r2,[0x1404d008]
  ldrb r0,[r6,#0x0]
  ldr r3,[0x1404d00c]
  strd r7,lr,[r2,#0x0]
  adds r2,r0,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x1404d010]
  str.w lr,[r3,r0,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r3,#0x1
  ldr r2,[0x1404d014]
  lsls r3,r5
  ldr r6,[r2,#0x0]
  orrs r3,r6
  str r3,[r2,#0x0]
  cbnz r1,0x1404cfbe
  mov.w r2,#0xffffffff
  ldr r3,[0x1404d008]
  str r2,[r3,#0x0]
  ldr r0,[0x1404d018]
  ldr r7,[0x1404d01c]
  ldrb r2,[r0,#0x0]
  ldr r3,[0x1404d00c]
  str.w lr,[r7,r2,lsl #0x2]
  adds r2,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  msr basepri,r1
  cmp r6,#0x0
  bne 0x1404cf48
  mov r0,r6
  bl 0x1404ca1c
  mov r0,r6
  bl 0x1404be3c
  b 0x1404cf48
  uxtb r0,r4
  str r0,[sp,#0x14]
  bl 0x1404ca1c
  ldr r0,[sp,#0x14]
  bl 0x1404be3c
  b 0x1404cf48
  push {r4,r5,r6,r7,lr}
  cmp r1,#0x2
  mov r4,r1
  mov r5,r0
  sub sp,#0x14
  bhi 0x1404d0da
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x1404d06a
  mov r7,pc
  ldr r6,[0x1404d160]
  ldr r2,[0x1404d164]
  ldrb r0,[r6,#0x0]
  ldr r3,[0x1404d168]
  strd r7,lr,[r2,#0x0]
  adds r2,r0,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x1404d16c]
  str.w lr,[r3,r0,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r3,#0x1
  ldr r2,[0x1404d170]
  lsls r3,r5
  ldr.w r0,[r2,r4,lsl #0x2]
  bic.w r3,r0,r3
  str.w r3,[r2,r4,lsl #0x2]
  cbnz r1,0x1404d08c
  mov.w r2,#0xffffffff
  ldr r3,[0x1404d164]
  str r2,[r3,#0x0]
  ldr r6,[0x1404d174]
  ldr r7,[0x1404d178]
  ldrb r2,[r6,#0x0]
  ldr r3,[0x1404d168]
  str.w lr,[r7,r2,lsl #0x2]
  adds r2,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  msr basepri,r1
  cmp r0,#0x0
  bne 0x1404d158
  ldr r0,[0x1404d17c]
  movw r1,#0x18d8
  strd r0,r5,[sp,#0x0]
  ldr r3,[0x1404d180]
  ldr r2,[0x1404d184]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r2,#0x3
  movs r1,#0x4
  ldr r3,[0x1404d170]
  ldr r0,[0x1404d188]
  add sp,#0x14
  pop.w {r4,r5,r6,r7,lr}
  b.w 0x1402a9fc
  cmp r1,#0x3
  bne 0x1404d0b2
  mrs r1,basepri
  cmp r1,#0x40
  beq 0x1404d10c
  mov r7,pc
  ldr r6,[0x1404d160]
  ldr r2,[0x1404d164]
  ldrb r0,[r6,#0x0]
  ldr r3,[0x1404d168]
  strd r7,lr,[r2,#0x0]
  adds r2,r0,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  ldr r3,[0x1404d16c]
  str.w lr,[r3,r0,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  movs r3,#0x1
  ldr r2,[0x1404d170]
  lsls r3,r5
  ldr r0,[r2,#0x0]
  bic.w r3,r0,r3
  str r3,[r2,#0x0]
  cbnz r1,0x1404d12a
  mov.w r2,#0xffffffff
  ldr r3,[0x1404d164]
  str r2,[r3,#0x0]
  ldr r6,[0x1404d174]
  ldr r7,[0x1404d178]
  ldrb r2,[r6,#0x0]
  ldr r3,[0x1404d168]
  str.w lr,[r7,r2,lsl #0x2]
  adds r2,#0x1
  umull r7,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r6,#0x0]
  msr basepri,r1
  cmp r0,#0x0
  beq 0x1404d0b2
  movs r0,#0x0
  bl 0x1404bf78
  b 0x1404d0b2
  mov r0,r4
  bl 0x1404bf78
  b 0x1404d0b2
  mov r3,r0
  mov r0,r1
  mov r1,r2
  cbz r3,0x1404d198
  b.w 0x1404cec8
  b.w 0x1404d030
