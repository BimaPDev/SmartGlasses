; FUN_140a367c @ 0x140a367c size=42
  push {r4,r5,lr}
  mov r4,r0
  mov r5,r1
  ldr r2,[0x140a36a8]
  ldr r1,[0x140a36ac]
  sub sp,#0x14
  strd r2,r1,[sp,#0x0]
  ldr r3,[0x140a36b0]
  movs r1,#0x3b
  ldr r2,[0x140a36b4]
  str r4,[sp,#0x8]
  movs r0,#0x4
  bl 0x1402a6e8
  movs r0,#0x0
  ldr r3,[0x140a36b8]
  str.w r5,[r3,r4,lsl #0x2]
  add sp,#0x14
  pop {r4,r5,pc}
