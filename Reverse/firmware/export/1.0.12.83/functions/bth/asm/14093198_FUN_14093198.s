; FUN_14093198 @ 0x14093198 size=40
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r2
  mov r7,r0
  mov r5,r1
  ldrb.w r12,[r4,#0x0]
  sub sp,#0x10
  str.w r12,[sp,#0x0]
  mov r6,r3
  ldr r2,[0x140931f4]
  movw r3,#0x376
  ldr r1,[0x140931f8]
  movs r0,#0x43
  ldrb.w r8,[sp,#0x28]
  bl 0x1402a64c
