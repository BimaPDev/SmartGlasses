; FUN_140d2d3c @ 0x140d2d3c size=42
  push {r0,r1,r4,r5,r6,lr}
  ldr r4,[sp,#0x24]
  mov r6,r1
  mov r1,r3
  ldr r3,[r4,#0x0]
  ldrd r5,r0,[sp,#0x1c]
  add.w r3,r0,r3, lsl #0x2
  strd r0,r3,[sp,#0x0]
  mov r3,r2
  mov r0,r5
  mov r2,r6
  bl 0x140d2c5c
  subs r0,r0,r5
  asrs r0,r0,#0x2
  str r0,[r4,#0x0]
  add sp,#0x8
  pop {r4,r5,r6,pc}
