; FUN_100f0900 @ 0x100f0900 size=42
  push {r4,r5,lr}
  movs r3,#0x0
  mov r5,r1
  movs r4,#0x9
  sub sp,#0x1c
  strh.w r0,[sp,#0x4]
  add r1,sp,#0x4
  ldr r0,[0x100f092c]
  strd r3,r2,[sp,#0x8]
  strd r3,r3,[sp,#0x10]
  strb.w r5,[sp,#0x7]
  strb.w r4,[sp,#0x6]
  bl 0x1009ece8
  add sp,#0x1c
  pop {r4,r5,pc}
