; FUN_14040340 @ 0x14040340 size=90
  push {r4,r5,r6,lr}
  mov r6,r0
  ldr r2,[0x1404039c]
  ldr r4,[0x140403a0]
  sub sp,#0x10
  rsb r5,r6,r6, lsl #0x3
  str r2,[sp,#0x0]
  add.w r4,r4,r5, lsl #0x3
  ldrb.w r5,[r4,#0x43f]
  ldr r3,[0x140403a4]
  str r5,[sp,#0x8]
  ldrb.w r5,[r4,#0x43e]
  movw r1,#0x3cd
  movs r0,#0x4
  ldr r2,[0x140403a8]
  str r5,[sp,#0x4]
  bl 0x1402a6e8
  ldrh.w r3,[r4,#0x43e]
  cmp r3,#0x2
  beq 0x1404037a
  add sp,#0x10
  pop {r4,r5,r6,pc}
  movs r1,#0x3
  movs r2,#0x0
  mov.w r0,#0xe10
  bl 0x14074378
  movs r2,#0x12
  strb r6,[r0,#0x0]
  strb r2,[r0,#0x1]
  bl 0x140743d0
  movs r3,#0x1
  strb.w r3,[r4,#0x43f]
  add sp,#0x10
  pop {r4,r5,r6,pc}
