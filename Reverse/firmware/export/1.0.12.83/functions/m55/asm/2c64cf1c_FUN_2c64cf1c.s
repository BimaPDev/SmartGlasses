; FUN_2c64cf1c @ 0x2c64cf1c size=366
  push {r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r4,r0
  mov r6,r2
  mov r0,r1
  cmp r2,#0x0
  beq.w 0x2c64d086
  bl 0x2c64cf04
  ldr r3,[r4,#0x8]
  mov r5,r0
  subs r3,#0x1
  cmp r0,r3
  bls 0x2c64cfbe
  add.w r8,r0,#0x4
  mvn r3,#0xe0000000
  ldr.w r10,[r4,#0x4]
  cmp r8,r3
  ite cc
  lsl.cc.w r7,r8,#0x2
  mov.cs.w r7,#0xffffffff
  mov r0,r7
  bl 0x2c64ca7e
  movs r3,#0x0
  mov r11,r0
  ldr r0,[r4,#0x8]
  cmp r0,r3
  bne 0x2c64d036
  rsb.w r2,r0,#0x4
  movs r1,#0x0
  add r2,r5
  lsls r2,r2,#0x2
  cmp r8,r0
  it cc
  mov.cc r2,#0x0
  add.w r0,r11,r0, lsl #0x2
  bl 0x2c674268
  mov r0,r7
  ldr.w r9,[r4,#0xc]
  bl 0x2c64ca7e
  movs r3,#0x0
  mov r7,r0
  ldr r0,[r4,#0x8]
  cmp r0,r3
  bne 0x2c64d044
  rsb.w r2,r0,#0x4
  movs r1,#0x0
  add r2,r5
  lsls r2,r2,#0x2
  cmp r8,r0
  it cc
  mov.cc r2,#0x0
  add.w r0,r7,r0, lsl #0x2
  bl 0x2c674268
  str r7,[r4,#0xc]
  strd r11,r8,[r4,#0x4]
  cmp.w r10,#0x0
  bne 0x2c64d052
  cmp.w r9,#0x0
  beq 0x2c64cfbe
  mov r0,r9
  bl 0x2c64c9d2
  ldr r3,[r6,#0x4]
  ldr.w r9,[r4,#0x4]
  adds r3,#0x1
  str r3,[r6,#0x4]
  ldr.w r3,[r9,r5,lsl #0x2]
  cbz r3,0x2c64d012
  ldr r1,[0x2c64d08c]
  ldr r0,[r1,#0x0]
  cbz r0,0x2c64d00a
  bl 0x2c64cf04
  cmp r5,r0
  bne 0x2c64d05a
  ldr.w r10,[r4,#0x4]
  ldr r0,[r1,#0x4]
  bl 0x2c64cf04
  ldr.w r3,[r10,r0,lsl #0x2]
  mov r7,r0
  cbz r3,0x2c64d00a
  ldr r1,[r1,#0x4]
  mov r0,r6
  bl 0x2c65538c
  ldr r3,[r0,#0x4]
  mov r8,r0
  adds r3,#0x1
  str r3,[r0,#0x4]
  ldr.w r0,[r10,r7,lsl #0x2]
  bl 0x2c64cdce
  str.w r8,[r10,r7,lsl #0x2]
  ldr.w r0,[r9,r5,lsl #0x2]
  bl 0x2c64cdce
  str.w r6,[r9,r5,lsl #0x2]
  movs r5,#0x0
  mov r6,r5
  ldr r3,[r4,#0x8]
  cmp r3,r5
  bls 0x2c64d086
  ldr r3,[r4,#0xc]
  ldr.w r0,[r3,r5,lsl #0x2]
  cbz r0,0x2c64d032
  bl 0x2c64cdce
  ldr r3,[r4,#0xc]
  str.w r6,[r3,r5,lsl #0x2]
  adds r5,#0x1
  b 0x2c64d01a
  ldr r2,[r4,#0x4]
  ldr.w r2,[r2,r3,lsl #0x2]
  str.w r2,[r11,r3,lsl #0x2]
  adds r3,#0x1
  b 0x2c64cf5e
  ldr r2,[r4,#0xc]
  ldr.w r2,[r2,r3,lsl #0x2]
  str.w r2,[r7,r3,lsl #0x2]
  adds r3,#0x1
  b 0x2c64cf8a
  mov r0,r10
  bl 0x2c64c9d2
  b 0x2c64cfb2
  ldr r0,[r1,#0x4]
  bl 0x2c64cf04
  cmp r5,r0
  bne 0x2c64d082
  ldr.w r10,[r4,#0x4]
  ldr r0,[r1,#0x0]
  bl 0x2c64cf04
  ldr.w r3,[r10,r0,lsl #0x2]
  mov r7,r0
  cmp r3,#0x0
  beq 0x2c64d00a
  ldr r1,[r1,#0x0]
  mov r0,r6
  bl 0x2c65019c
  b 0x2c64cff6
  adds r1,#0x8
  b 0x2c64cfd0
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
