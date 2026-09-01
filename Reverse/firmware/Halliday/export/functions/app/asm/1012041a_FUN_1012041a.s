; FUN_1012041a @ 0x1012041a size=46
  push {r0,r1,r4,lr}
  movw r3,#0xa01f
  mov r4,r0
  strb.w r1,[sp,#0x6]
  movs r1,#0x1
  strh.w r3,[sp,#0x4]
  bl 0x101200fc
  movs r3,#0x0
  movs r2,#0x3
  mov r0,r4
  add r1,sp,#0x4
  bl 0x10120148
  movs r1,#0x0
  mov r0,r4
  bl 0x101200fc
  add sp,#0x8
  pop {r4,pc}
