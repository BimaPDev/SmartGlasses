; FUN_1012b70e @ 0x1012b70e size=170
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r9,r1
  mov.w r1,#0x20000
  mov r8,r3
  mov r5,r2
  mov r10,r0
  bl 0x1012b65c
  add.w r0,r0,r0, lsr #0x1f
  asrs r4,r0,#0x1
  sub.w r5,r5,r0, asr #0x1
  mov r0,r10
  bl 0x1012b5f6
  sxth r6,r0
  add.w r0,r6,#0x5a
  sxth r0,r0
  bl 0x1013d980
  str r0,[sp,#0x4]
  mov r0,r6
  bl 0x1013d980
  mov.w r1,#0x30000
  mov r11,r0
  mov r0,r10
  bl 0x1012b666
  mov.w r1,#0x30000
  str r0,[sp,#0x0]
  mov r0,r10
  bl 0x1012b670
  mov.w r1,#0x30000
  mov r7,r0
  mov r0,r10
  bl 0x1012b67a
  mov.w r1,#0x30000
  mov r6,r0
  mov r0,r10
  bl 0x1012b684
  ldr r2,[sp,#0x4]
  ldr r3,[sp,#0x0]
  mul r1,r5,r2
  ldr.w r2,[r9,#0x0]
  mul r5,r5,r11
  add.w r2,r2,r1, asr #0xf
  add r3,r4
  subs r3,r2,r3
  str.w r3,[r8,#0x0]
  ldr.w r3,[r9,#0x4]
  add r7,r4
  add.w r5,r3,r5, asr #0xf
  add r6,r4
  add r0,r4
  add r7,r2
  subs r6,r5,r6
  add r0,r5
  str.w r7,[r8,#0x8]
  str.w r6,[r8,#0x4]
  str.w r0,[r8,#0xc]
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
