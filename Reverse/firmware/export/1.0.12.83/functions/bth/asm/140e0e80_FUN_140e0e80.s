; FUN_140e0e80 @ 0x140e0e80 size=102
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r8,r1
  mov r9,r0
  mov r1,sp
  bl 0x140e0d28
  add r1,sp,#0x4
  mov r0,r8
  vmov r4,r5,d0
  bl 0x140e0d28
  ldr.w r3,[r9,#0x10]
  ldr.w r2,[r8,#0x10]
  mov r7,r5
  sub.w r12,r3,r2
  ldrd r3,r2,[sp,#0x0]
  vmov r0,r1,d0
  subs r3,r3,r2
  mov r11,r1
  mov r0,r4
  add.w r3,r3,r12, lsl #0x5
  cmp r3,#0x0
  itete le
  mov.le r2,r1
  mov.gt r2,r5
  rsb.le r3,r3,r3, lsl #0xc
  add.gt.w r7,r2,r3, lsl #0x14
  it le
  add.le.w r11,r2,r3, lsl #0x14
  vmov r2,s0
  mov r1,r7
  mov r3,r11
  bl 0x140e3a54
  vmov d0,r0,r1
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
