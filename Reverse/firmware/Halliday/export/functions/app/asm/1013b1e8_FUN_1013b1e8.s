; FUN_1013b1e8 @ 0x1013b1e8 size=132
  push {r4,r5,r6,lr}
  mov r4,r0
  mov r6,r1
  mov r5,r2
  bl 0x1013b026
  cbz r0,0x1013b268
  ldr.w r3,[r4,#0x6e4]
  ldr.w r2,[r4,#0x6d8]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r3,[r3,#0x6dc]
  adds r3,#0x10
  cmp r3,r2
  bcs 0x1013b250
  ldr.w r3,[r4,#0x6e4]
  orr r6,r6,#0x30000000
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  orr r6,r6,#0x10000
  str r6,[r2,r3]
  ldr.w r3,[r4,#0x6e4]
  add.w r3,r4,r3, lsl #0x2
  ldr.w r2,[r3,#0x6d0]
  ldr.w r3,[r3,#0x6dc]
  add r3,r2
  str r5,[r3,#0x4]
  ldr.w r0,[r4,#0x6e4]
  add.w r4,r4,r0, lsl #0x2
  movs r0,#0x0
  ldr.w r3,[r4,#0x6dc]
  adds r3,#0x8
  str.w r3,[r4,#0x6dc]
  pop {r4,r5,r6,pc}
  mov r0,r4
  bl 0x1010b660
  cmp r0,#0x0
  bne 0x1013b24e
  mov r1,r0
  mov r0,r4
  bl 0x1010b62c
  cmp r0,#0x0
  beq 0x1013b20c
  b 0x1013b24e
  movs r0,#0x3
  b 0x1013b24e
