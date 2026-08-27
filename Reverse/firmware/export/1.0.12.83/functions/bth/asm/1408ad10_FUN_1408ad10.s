; FUN_1408ad10 @ 0x1408ad10 size=58
  push {r3,r4,r5,r6,r7,r8,r9,lr}
  mov.w r8,#0x0
  mov r7,r1
  mov r9,r2
  ldr r4,[0x1408ad4c]
  add.w r5,r0,#0x12
  add.w r6,r4,#0x20
  ldr.w r3,[r4],#0x4
  cbz r3,0x1408ad40
  ldr.w r3,[r3,r5,lsl #0x2]
  cbz r3,0x1408ad40
  ldr r0,[r3,#0x4]
  cbz r0,0x1408ad40
  mov r1,r9
  blx r7
  add.w r8,r8,#0x1
  cbz r0,0x1408ad44
  cmp r4,r6
  bne 0x1408ad26
  mov r0,r8
  pop.w {r3,r4,r5,r6,r7,r8,r9,pc}
