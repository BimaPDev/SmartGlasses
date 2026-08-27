; FUN_1402c520 @ 0x1402c520 size=306
  cmp r0,#0x1
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  mov r4,r0
  bhi.w 0x1402c64a
  ldr r5,[0x1402c654]
  add.w r3,r0,r0, lsl #0x1
  add.w r3,r5,r3, lsl #0x2
  ldrsb.w r3,[r3,#0x4]
  mov r7,lr
  cmp r3,#0x40
  lsl.w r6,r0,#0x1
  beq 0x1402c564
  cmp r3,#0x0
  blt 0x1402c564
  movs r1,#0x1
  ldr r0,[0x1402c658]
  lsrs r2,r3,#0x5
  and r3,r3,#0x1f
  adds r2,#0x20
  lsl.w r3,r1,r3
  str.w r3,[r0,r2,lsl #0x2]
  dsb #0xf
  isb #0xf
  ldr r3,[0x1402c65c]
  ldrb r3,[r3,#0x0]
  cmp r3,#0x0
  beq 0x1402c60e
  mrs r8,basepri
  cmp.w r8,#0x40
  beq 0x1402c59c
  mov r12,pc
  ldr r0,[0x1402c660]
  ldr r2,[0x1402c664]
  ldrb r1,[r0,#0x0]
  ldr r3,[0x1402c668]
  strd r12,r7,[r2,#0x0]
  adds r2,r1,#0x1
  umull r12,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r0,#0x0]
  ldr r3,[0x1402c66c]
  str.w r7,[r3,r1,lsl #0x2]
  movs r3,#0x40
  msr basepri,r3
  ldr.w r9,[0x1402c67c]
  ldrb.w r0,[r9,r4]
  cmp r0,#0xff
  beq 0x1402c5c0
  bl 0x14028694
  ldrb.w r0,[r9,r4]
  bl 0x14028888
  movs r3,#0xff
  strb.w r3,[r9,r4]
  ldr.w r9,[0x1402c680]
  ldrb.w r0,[r9,r4]
  cmp r0,#0xff
  beq 0x1402c5de
  bl 0x14028694
  ldrb.w r0,[r9,r4]
  bl 0x14028888
  movs r3,#0xff
  strb.w r3,[r9,r4]
  cmp.w r8,#0x0
  bne 0x1402c5ec
  mov.w r2,#0xffffffff
  ldr r3,[0x1402c664]
  str r2,[r3,#0x0]
  ldr r1,[0x1402c670]
  ldr r0,[0x1402c674]
  ldrb r2,[r1,#0x0]
  ldr r3,[0x1402c668]
  str.w r7,[r0,r2,lsl #0x2]
  adds r2,#0x1
  umull r0,r3,r3,r2
  lsrs r3,r3,#0x3
  add.w r3,r3,r3, lsl #0x2
  sub.w r3,r2,r3, lsl #0x1
  strb r3,[r1,#0x0]
  msr basepri,r8
  add r4,r6
  ldr.w r3,[r5,r4,lsl #0x2]
  add.w r5,r5,r4, lsl #0x2
  ldr r2,[r3,#0x30]
  ldrb r6,[r5,#0x6]
  bic r2,r2,#0x1
  str r2,[r3,#0x30]
  ldr r2,[r3,#0x2c]
  mov r0,r6
  bic r2,r2,#0x10
  str r2,[r3,#0x2c]
  bl 0x1402db68
  ldrb r4,[r5,#0x5]
  mov r0,r4
  bl 0x1402db68
  mov r0,r6
  bl 0x1402daa0
  mov r0,r4
  bl 0x1402daa0
  movs r0,#0x0
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
  mov r1,r0
  ldr r0,[0x1402c678]
  bl 0x1402b0f8
