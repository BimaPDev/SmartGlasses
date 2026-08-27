; FUN_2c015bce @ 0x2c015bce size=656
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w r4,[r3,r0,lsl #0x2]
  lsrs r3,r1,#0x17
  sub sp,#0xc
  lsl.w r12,r12,r3
  cbz r4,0x2c015be6
  lsrs r3,r1,#0x19
  lsr.w r12,r12,r3
  cmp r0,#0x0
  bne.w 0x2c015e54
  ldr.w r11,[0x2c015e70]
  movs r3,#0x7c
  subs r2,r1,#0x1
  cmp.w r1,r12, lsl #0x11
  str.w r3,[r11,#0xc]
  lsl.w r3,r12,#0x11
  lsl.w r8,r12,#0x10
  str.w r0,[r11,#0x8]
  str.w r0,[r11,#0x10]
  str.w r2,[r11,#0x14]
  str r3,[sp,#0x4]
  strd r0,r0,[r11,#0x0]
  bcc.w 0x2c015e4e
  mov r5,r11
  mov r9,r8
  mov.w lr,#0x40
  mov r6,r0
  adds r0,#0x1
  sub.w r3,r1,r9
  str r2,[r5,#0x20]
  lsls r7,r0,#0x2
  adds r5,#0xc
  str r3,[r5,#0x10]
  adds r3,r6,#0x3
  str r7,[r5,#0xc]
  lsl.w r7,lr,r0
  mul r7,r12,r7
  cmp.w r1,r7, lsl #0xb
  lsl.w r9,r7,#0xa
  bcs 0x2c015c22
  add.w r3,r3,r3, lsl #0x1
  adds r6,#0x4
  mov.w lr,#0x0
  mov r5,r8
  add.w r3,r11,r3, lsl #0x2
  movs r7,#0x24
  mov.w r10,#0x40
  movs r0,#0x0
  add.w r9,r6,lr
  add.w lr,lr,#0x1
  subs r5,#0x1
  str r0,[r3,#0x4]
  adds r3,#0xc
  lsl.w r0,r10,lr
  str.w r5,[r3,#-0x4]
  str.w r7,[r3,#-0xc]
  adds r7,#0x4
  mul r0,r12,r0
  cmp.w r1,r0, lsl #0xb
  lsl.w r5,r0,#0xa
  bcs 0x2c015c5e
  add.w r0,r9,r9, lsl #0x1
  movs r5,#0x0
  movs r7,#0x4
  movs r6,#0x8
  add.w r0,r11,r0, lsl #0x2
  b 0x2c015cba
  lsl.w r3,r6,r5
  adds r0,#0xc
  lsls r3,r3,#0xa
  cmp.w r3,#0x8000
  bhi 0x2c015cd0
  subs r3,r1,r3
  adds r5,#0x1
  strd r3,r2,[r0,#-0x8]
  lsls r3,r5,#0x2
  orr r3,r3,#0x40
  str.w r3,[r0,#-0xc]
  add.w lr,r5,r9
  cmp r4,#0x0
  bne 0x2c015c9a
  lsl.w r3,r7,r5
  adds r0,#0xc
  lsls r3,r3,#0xa
  cmp.w r3,#0x8000
  bls 0x2c015ca8
  add.w r0,lr,lr, lsl #0x1
  movs r6,#0x0
  movs r7,#0x24
  mov.w r10,#0x4
  add.w r0,r11,r0, lsl #0x2
  mov r9,r6
  b 0x2c015d08
  movs r3,#0x8
  adds r0,#0xc
  lsls r3,r6
  lsls r3,r3,#0xa
  cmp.w r3,#0x8000
  bhi 0x2c015d1e
  subs r3,#0x1
  adds r6,#0x1
  str.w r9,[r0,#-0x8]
  str.w r3,[r0,#-0x4]
  orr r3,r7,#0x40
  adds r7,#0x4
  str.w r3,[r0,#-0xc]
  add.w r5,lr,r6
  cmp r4,#0x0
  bne 0x2c015ce4
  lsl.w r3,r10,r6
  adds r0,#0xc
  lsls r3,r3,#0xa
  cmp.w r3,#0x8000
  bls 0x2c015cf2
  ldr r3,[sp,#0x4]
  cmp r1,r3
  bcc 0x2c015da8
  add.w r0,r5,r5, lsl #0x1
  movs r6,#0x0
  mov r3,r8
  mov.w lr,#0x40
  add.w r0,r11,r0, lsl #0x2
  mov r7,r6
  adds r6,#0x1
  mvns r3,r3
  str r7,[r0,#0x4]
  adds r0,#0xc
  lsl.w r9,r6,#0x2
  add r3,r1
  add.w r10,r6,r5
  orr r9,r9,#0x4000
  str.w r3,[r0,#-0x4]
  str.w r9,[r0,#-0xc]
  lsl.w r9,lr,r6
  mul r9,r12,r9
  cmp.w r1,r9, lsl #0xb
  lsl.w r3,r9,#0xa
  bcs 0x2c015d36
  add.w r3,r10,r10, lsl #0x1
  mov r0,r1
  add.w r10,r10,#0x1
  mov r1,r8
  add.w r3,r11,r3, lsl #0x2
  movs r7,#0x24
  movs r6,#0x0
  mov.w lr,#0x40
  mov r8,r0
  add.w r5,r10,r6
  adds r6,#0x1
  orr r9,r7,#0x4000
  str r1,[r3,#0x4]
  lsl.w r0,lr,r6
  str r2,[r3,#0x8]
  str.w r9,[r3,#0x0]
  adds r7,#0x4
  mul r0,r12,r0
  adds r3,#0xc
  cmp.w r8,r0, lsl #0xb
  lsl.w r1,r0,#0xa
  bcs 0x2c015d80
  add.w r1,r5,r5, lsl #0x1
  movs r0,#0x0
  mov.w r8,#0x4
  mov.w lr,#0x8
  add.w r1,r11,r1, lsl #0x2
  movw r12,#0x4040
  mov r7,r0
  b 0x2c015de4
  lsl.w r3,lr,r0
  adds r1,#0xc
  lsls r3,r3,#0xa
  cmp.w r3,#0x8000
  bhi 0x2c015df8
  adds r0,#0x1
  subs r3,r2,r3
  str.w r7,[r1,#-0x8]
  orr.w r6,r12,r0, lsl #0x2
  str.w r3,[r1,#-0x4]
  str.w r6,[r1,#-0xc]
  adds r6,r0,r5
  cmp r4,#0x0
  bne 0x2c015dc2
  lsl.w r3,r8,r0
  adds r1,#0xc
  lsls r3,r3,#0xa
  cmp.w r3,#0x8000
  bls 0x2c015dd0
  add.w r3,r6,r6, lsl #0x1
  movs r5,#0x24
  movs r0,#0x0
  mov.w r8,#0x4
  add.w r3,r11,r3, lsl #0x2
  mov.w lr,#0x8
  movw r12,#0x4040
  b 0x2c015e30
  lsl.w r1,lr,r0
  adds r3,#0xc
  lsls r1,r1,#0xa
  cmp.w r1,#0x8000
  bhi 0x2c015e44
  orr.w r7,r5,r12
  adds r0,#0x1
  adds r5,#0x4
  str.w r2,[r3,#-0x4]
  strd r7,r1,[r3,#-0xc]
  adds r7,r6,r0
  cmp r4,#0x0
  bne 0x2c015e12
  lsl.w r1,r8,r0
  adds r3,#0xc
  lsls r1,r1,#0xa
  cmp.w r1,#0x8000
  bls 0x2c015e20
  ldr r3,[0x2c015e64]
  str r7,[r3,#0x0]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  mov.w r9,#0x2
  b 0x2c015c8a
  mov r2,r0
  ldr r1,[0x2c015e68]
  ldr r0,[0x2c015e6c]
  bl 0x2c00dfac
