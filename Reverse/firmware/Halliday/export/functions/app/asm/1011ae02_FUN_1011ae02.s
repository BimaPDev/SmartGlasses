; FUN_1011ae02 @ 0x1011ae02 size=92
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  mov r4,r3
  movs r3,#0x0
  mov r7,r1
  mov r6,r2
  ldr.w r8,[sp,#0x20]
  ldrb.w r9,[sp,#0x24]
  str r3,[r4,#0x0]
  ldr r3,[r4,#0x0]
  mov r5,r0
  cmp r3,r7
  bcs 0x1011ae58
  ldr.w r0,[r6,r3,lsl #0x2]
  bl 0x1011b2c8
  ldr r3,[r4,#0x0]
  mov r10,r0
  cbz r0,0x1011ae36
  adds r3,#0x1
  mov r0,r5
  str r3,[r4,#0x0]
  b 0x1011ae18
  mov r2,r8
  mov r0,r5
  ldr.w r1,[r6,r3,lsl #0x2]
  bl 0x1011adac
  cbz r0,0x1011ae58
  ldr r3,[r4,#0x0]
  adds r2,r3,#0x1
  str r2,[r4,#0x0]
  cmp.w r9,#0x0
  beq 0x1011ae18
  cmp r8,r0
  bne 0x1011ae18
  mov r5,r10
  str r3,[r4,#0x0]
  mov r0,r5
  pop.w {r4,r5,r6,r7,r8,r9,r10,pc}
