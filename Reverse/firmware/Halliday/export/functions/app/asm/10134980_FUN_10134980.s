; FUN_10134980 @ 0x10134980 size=40
  push {r0,r1,r4,lr}
  movs r4,#0x0
  mov r2,r0
  mov r1,sp
  adds r0,#0x1
  str r4,[sp,#0x0]
  str.w r4,[sp,#0x3]
  bl 0x10134778
  strb r4,[r2,#0x8]
  adds r2,#0xc
  ldaex r3,[r2]
  stlex r1,r4,[r2]
  cmp r1,#0x0
  bne 0x10134998
  add sp,#0x8
  pop {r4,pc}
