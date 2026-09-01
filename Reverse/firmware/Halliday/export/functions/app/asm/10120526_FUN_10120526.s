; FUN_10120526 @ 0x10120526 size=40
  push {r0,r1,r4,lr}
  movs r3,#0xff
  mov r4,r0
  movs r1,#0x1
  strb.w r3,[sp,#0x4]
  bl 0x101200fc
  movs r3,#0x0
  movs r2,#0x1
  mov r0,r4
  add r1,sp,#0x4
  bl 0x10120148
  movs r1,#0x0
  mov r0,r4
  bl 0x101200fc
  add sp,#0x8
  pop {r4,pc}
