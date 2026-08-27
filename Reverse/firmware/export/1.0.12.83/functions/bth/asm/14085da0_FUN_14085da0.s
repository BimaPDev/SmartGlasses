; FUN_14085da0 @ 0x14085da0 size=70
  push {r4,r5,r6,r7,r8,lr}
  ldr r4,[0x14085e20]
  mov r6,r0
  ldrb.w r8,[r4,#0x12]
  sub sp,#0x8
  cmp.w r8,#0x0
  beq 0x14085dce
  ldrb.w r3,[r4,#0x26]
  cbz r3,0x14085e16
  movs r5,#0x0
  ldr r2,[0x14085e24]
  ldr r1,[0x14085e28]
  movs r0,#0x41
  bl 0x1402a64c
  mov r5,r4
  mov r7,r8
  mov r3,r5
  str r7,[sp,#0x0]
  ldr r1,[0x14085e2c]
  ldr r2,[0x14085e24]
  add.w r7,r7,r7, lsl #0x2
  movs r0,#0x43
  bl 0x1402a64c
  movs r7,#0x1
  add.w r5,r4,#0x14
  mov r8,r7
  b 0x14085dd2
