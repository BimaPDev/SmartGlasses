; FUN_14073c1c @ 0x14073c1c size=40
  push {r4,lr}
  cmp r0,#0x6
  mov r4,r0
  sub sp,#0x8
  bhi 0x14073c34
  movs r0,#0x0
  ldr r3,[0x14073c4c]
  add.w r4,r3,r4, lsl #0x2
  str r1,[r4,#0x4]
  add sp,#0x8
  pop {r4,pc}
  str r1,[sp,#0x4]
  movs r2,#0x65
  ldr r3,[0x14073c50]
  ldr r1,[0x14073c54]
  str r4,[sp,#0x0]
  movs r0,#0x44
  bl 0x1402a64c
