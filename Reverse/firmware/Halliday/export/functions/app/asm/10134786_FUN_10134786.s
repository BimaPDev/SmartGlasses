; FUN_10134786 @ 0x10134786 size=28
  push {r0,r1,r4,lr}
  movs r4,#0x0
  mov r2,r0
  mov r1,sp
  adds r0,#0x1
  str r4,[sp,#0x0]
  str.w r4,[sp,#0x3]
  bl 0x10134778
  strb r4,[r2,#0x0]
  strh r4,[r2,#0x8]
  add sp,#0x8
  pop {r4,pc}
