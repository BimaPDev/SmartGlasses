; FUN_140b103c @ 0x140b103c size=36
  push {r4,r5,lr}
  mov r4,r1
  ldr r5,[0x140b1060]
  ldr r2,[0x140b1064]
  sub sp,#0x14
  strd r2,r5,[sp,#0x0]
  ldrh r4,[r4,#0x0]
  movs r1,#0xd5
  ldr r3,[0x140b1068]
  ldr r2,[0x140b106c]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r0,#0x0
  add sp,#0x14
  pop {r4,r5,pc}
