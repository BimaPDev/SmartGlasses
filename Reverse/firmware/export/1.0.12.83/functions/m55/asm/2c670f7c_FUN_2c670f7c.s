; FUN_2c670f7c @ 0x2c670f7c size=96
  push {r0,r1,r2,r4,r5,r6,r7,r8,r9,r10,r11,lr}
  mov r8,r1
  mov r9,r0
  mov r1,sp
  bl 0x2c670e24
  add r1,sp,#0x4
  mov r0,r8
  vmov r10,s0
  vmov r4,r5,d0
  bl 0x2c670e24
  ldr.w r3,[r9,#0x10]
  ldr.w r1,[r8,#0x10]
  mov r11,r5
  subs r1,r3,r1
  ldrd r2,r3,[sp,#0x0]
  vmov r6,r7,d0
  subs r3,r2,r3
  add.w r3,r3,r1, lsl #0x5
  cmp r3,#0x0
  ittet le
  rsb.le r3,r3,r3, lsl #0xc
  mov.le r2,r7
  mov.gt r2,r5
  add.le.w r3,r2,r3, lsl #0x14
  ite gt
  add.gt.w r11,r2,r3, lsl #0x14
  vmov.le s1,r3
  vmov d7,r10,r11
  vdiv.f64 d0,d7,d0
  add sp,#0xc
  pop.w {r4,r5,r6,r7,r8,r9,r10,r11,pc}
