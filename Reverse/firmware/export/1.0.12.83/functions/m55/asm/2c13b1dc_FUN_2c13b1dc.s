; FUN_2c13b1dc @ 0x2c13b1dc size=120
  push {r4,r5,r6,r7,r8,lr}
  ldr r4,[0x2c13b254]
  mov r6,r0
  mov r7,r4
  mov.w r8,#0x4
  sub sp,#0x8
  movs r2,#0x20
  mov r5,r1
  mov r0,r4
  movs r1,#0x0
  bl 0x2c13e9dc
  rev16.w r12,r6
  str.w r8,[sp,#0x4]
  strh r12,[r7],#0x2
  movs r3,#0x2
  mov r2,r4
  movs r1,#0x28
  movs r0,#0x1
  str r7,[sp,#0x0]
  bl 0x2c1380b8
  cbnz r0,0x2c13b238
  movs r0,#0x1
  ldr.w r2,[r4,#0x2]
  lsrs r3,r2,#0x18
  ubfx r1,r2,#0x8,#0x8
  orr.w r3,r3,r2, lsl #0x18
  orr.w r3,r3,r1, lsl #0x10
  ubfx r2,r2,#0x10,#0x8
  orr.w r3,r3,r2, lsl #0x8
  str r3,[r5,#0x0]
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
  ldr r4,[0x2c13b258]
  mov.w r1,#0x104
  mov r0,r8
  ldr r3,[0x2c13b25c]
  ldr r2,[0x2c13b260]
  str r6,[sp,#0x4]
  str r4,[sp,#0x0]
  bl 0x2c135988
  movs r0,#0x0
  add sp,#0x8
  pop.w {r4,r5,r6,r7,r8,pc}
