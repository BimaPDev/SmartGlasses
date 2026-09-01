; FUN_100b9ba4 @ 0x100b9ba4 size=282
  push {r4,r5,r6,r7,r8,r9,r10,r11,lr}
  ldr.w r8,[0x100b9cc0]
  mov r10,r0
  ldrd r3,r2,[r8,#0x8]
  mov r7,r1
  movs r4,#0x1
  sub sp,#0xc
  b 0x100b9bee
  ldrh.w r6,[r10,r9,lsl #0x1]
  lsrs r5,r3,#0xb
  mul r5,r6,r5
  cmp r5,r2
  bhi 0x100b9c2c
  movs r0,#0x1
  subs r3,r3,r5
  subs r2,r2,r5
  sub.w r6,r6,r6, lsr #0x5
  strd r3,r2,[r8,#0x8]
  strh.w r6,[r10,r9,lsl #0x1]
  lsls r4,r4,#0x1
  uxth r4,r4
  lsls r7,r7,#0x1
  cmp r11,r0
  orr.w r4,r4,r0
  uxth r7,r7
  bne 0x100b9c4c
  cmp r4,#0xff
  bhi 0x100b9c44
  ubfx r11,r7,#0x7,#0x1
  add.w r9,r11,#0x1
  cmp.w r3,#0x1000000
  add.w r9,r4,r9, lsl #0x8
  bcs 0x100b9bba
  lsls r3,r3,#0x8
  lsls r2,r2,#0x8
  add.w r0,sp,#0x7
  strd r3,r2,[r8,#0x8]
  bl 0x100b940c
  ldrd r3,r2,[r8,#0x8]
  ldrh.w r6,[r10,r9,lsl #0x1]
  lsrs r5,r3,#0xb
  mul r5,r6,r5
  ldrb.w r1,[sp,#0x7]
  orrs r2,r1
  cmp r5,r2
  str.w r2,[r8,#0xc]
  bls 0x100b9bc8
  rsb.w r3,r6,#0x800
  add.w r6,r6,r3, asr #0x5
  str.w r5,[r8,#0x8]
  mov r3,r5
  movs r0,#0x0
  strh.w r6,[r10,r9,lsl #0x1]
  b 0x100b9bda
  mov r4,r6
  uxtb r0,r4
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
  cmp r4,#0xff
  bhi 0x100b9c44
  lsls r5,r4,#0x1
  uxth r6,r5
  cmp.w r3,#0x1000000
  orr r4,r6,#0x1
  bcc 0x100b9c84
  ldrh.w r0,[r10,r5]
  lsrs r1,r3,#0xb
  mul r1,r0,r1
  cmp r1,r2
  sub.w r7,r0,r0, lsr #0x5
  sub.w r3,r3,r1
  bhi 0x100b9ca4
  subs r2,r2,r1
  cmp r4,#0xff
  strd r3,r2,[r8,#0x8]
  strh.w r7,[r10,r5]
  bls 0x100b9c50
  b 0x100b9c44
  lsls r3,r3,#0x8
  lsls r2,r2,#0x8
  add.w r0,sp,#0x7
  strd r3,r2,[r8,#0x8]
  bl 0x100b940c
  ldrd r3,r2,[r8,#0x8]
  ldrb.w r1,[sp,#0x7]
  orrs r2,r1
  str.w r2,[r8,#0xc]
  b 0x100b9c5e
  rsb.w r3,r0,#0x800
  add.w r0,r0,r3, asr #0x5
  cmp r6,#0xff
  str.w r1,[r8,#0x8]
  strh.w r0,[r10,r5]
  bhi 0x100b9c42
  mov r3,r1
  mov r4,r6
  b 0x100b9c50
