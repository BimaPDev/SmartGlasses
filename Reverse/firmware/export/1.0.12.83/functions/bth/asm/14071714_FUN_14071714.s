; FUN_14071714 @ 0x14071714 size=94
  push {r3,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  subs r6,r2,#0x1
  movs r7,#0x0
  mov r9,r2
  mov r10,r0
  mov r8,r1
  ldr r3,[0x14071778]
  ldr.w r11,[0x1407177c]
  sxth r6,r6
  b 0x14071732
  sxth r7,r2
  cmp r7,r6
  bgt 0x1407175a
  adds r4,r7,r6
  ubfx r5,r4,#0x1,#0x10
  cmp r9,r5
  asr.w r4,r4, asr #0x1
  bls 0x14071760
  ldrb.w r2,[r8,r4,lsl #0x3]
  add.w r4,r8,r4, lsl #0x3
  cmp r2,r10
  add.w r2,r5,#0x1
  bcc 0x1407172c
  bls 0x14071770
  subs r5,#0x1
  sxth r6,r5
  cmp r7,r6
  ble 0x14071732
  movs r0,#0x0
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
  movw r2,#0x80b
  mov r1,r11
  movs r0,#0x42
  bl 0x1402a64c
  mov r0,r4
  pop.w {r3,r4,r5,r6,r7,r8,r9,r10,r11,pc}
