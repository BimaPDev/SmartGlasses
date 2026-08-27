; FUN_14082c1c @ 0x14082c1c size=44
  push {r4,r5,r6,r7,r8,lr}
  mov r4,r2
  sub sp,#0x8
  mov r6,r0
  adds r0,#0x6
  mov r7,lr
  mov r8,r1
  bl 0x140862b4
  ldrb.w r3,[r4,#0x3a]
  mov r2,r0
  str r3,[sp,#0x4]
  ldrb.w r3,[r4,#0x30]
  ldr r1,[0x14082d38]
  str r3,[sp,#0x0]
  movs r0,#0x44
  mov r3,r4
  bl 0x1402a64c
