; FUN_1402c8ec @ 0x1402c8ec size=96
  cmp r0,#0x1
  push {r3,r4,r5,r6,r7,lr}
  mov r4,r0
  bhi 0x1402c944
  ldr r6,[0x1402c94c]
  add.w r3,r0,r0, lsl #0x1
  add.w r3,r6,r3, lsl #0x2
  ldrb r0,[r3,#0x6]
  mov r7,r1
  cmp r0,#0x46
  lsl.w r5,r4,#0x1
  bls 0x1402c938
  add r4,r5
  ldr.w r3,[r6,r4,lsl #0x2]
  ldr r2,[r3,#0x30]
  lsls r0,r2,#0x1f
  bmi 0x1402c91a
  movs r0,#0x1
  pop {r3,r4,r5,r6,r7,pc}
  tst r7,#0x1
  ite eq
  mov.eq r1,#0x0
  mov.ne.w r1,#0x100
  lsls r2,r7,#0x1e
  ldr r2,[r3,#0x30]
  it mi
  orr.mi r1,r1,#0x200
  orrs r2,r1
  str r2,[r3,#0x30]
  movs r0,#0x0
  pop {r3,r4,r5,r6,r7,pc}
  bl 0x1402db00
  cmp r0,#0x1
  beq 0x1402c90a
  movs r0,#0x1
  b 0x1402c918
  mov r1,r0
  ldr r0,[0x1402c950]
  bl 0x1402b0f8
