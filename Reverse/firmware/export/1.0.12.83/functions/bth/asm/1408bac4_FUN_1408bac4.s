; FUN_1408bac4 @ 0x1408bac4 size=60
  movs r3,#0x0
  push {r4,r5,r6,r7,r8,r9,r10,lr}
  mov r2,r0
  ldrh r0,[r1,#0x14]
  sub sp,#0x10
  mov r4,r1
  strb.w r3,[r1,#0xaa]
  strb.w r3,[r1,#0x4c]
  ldrh r3,[r1,#0x12]
  ldrb.w r1,[r1,#0x96]
  str r0,[sp,#0x0]
  movs r0,#0x0
  cmp r1,#0x9
  itet ls
  ldr.ls r5,[0x1408bd2c]
  ldr.hi r5,[0x1408bd30]
  ldr.ls.w r5,[r5,r1,lsl #0x2]
  str r0,[sp,#0xc]
  strd r1,r5,[sp,#0x4]
  movs r0,#0x46
  ldr r1,[0x1408bd34]
  mov r8,lr
  bl 0x1402a64c
