; FUN_1402c954 @ 0x1402c954 size=56
  push {r3,lr}
  ldr r3,[0x1402c98c]
  mov r12,r0
  add.w r0,r0,r0, lsl #0x1
  add.w r0,r3,r0, lsl #0x2
  cmp.w r12,#0x1
  bhi 0x1402c97c
  ldr r3,[r0,#0x0]
  ldr r2,[r3,#0x18]
  lsls r2,r2,#0x1a
  bmi 0x1402c962
  ldr r0,[r3,#0x48]
  ands r0,r0,#0x2
  bne 0x1402c984
  str r1,[r3,#0x0]
  pop {r3,pc}
  mov r1,r12
  ldr r0,[0x1402c990]
  bl 0x1402b0f8
  mov r1,r12
  ldr r0,[0x1402c994]
  bl 0x1402b0f8
