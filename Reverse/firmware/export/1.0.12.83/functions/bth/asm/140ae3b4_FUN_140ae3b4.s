; FUN_140ae3b4 @ 0x140ae3b4 size=100
  push {r3,r4,r5,lr}
  ldrd r4,r5,[r1,#0x8]
  cbz r5,0x140ae40c
  cbz r4,0x140ae400
  add.w r12,r3,r2, lsl #0x5
  str r5,[r4,#0xc]
  add.w r12,r0,r12, lsl #0x2
  str r4,[r5,#0x8]
  ldr.w r5,[r12,#0x48]
  cmp r5,r1
  beq 0x140ae3d4
  pop {r3,r4,r5,pc}
  cmp r0,r4
  str.w r4,[r12,#0x48]
  bne 0x140ae3d2
  movs r4,#0x1
  add.w r5,r0,r2, lsl #0x2
  ldr r1,[r5,#0x14]
  lsl.w r3,r4,r3
  bic.w r3,r1,r3
  str r3,[r5,#0x14]
  cmp r3,#0x0
  bne 0x140ae3d2
  ldr r3,[r0,#0x10]
  lsl.w r2,r4,r2
  bic.w r2,r3,r2
  str r2,[r0,#0x10]
  pop {r3,r4,r5,pc}
  movw r2,#0x263
  ldr r1,[0x140ae418]
  ldr r0,[0x140ae41c]
  bl 0x1402b0f8
  movw r2,#0x262
  ldr r1,[0x140ae418]
  ldr r0,[0x140ae41c]
  bl 0x1402b0f8
