; FUN_10121fb8 @ 0x10121fb8 size=32
  mov r3,r2
  movs r2,#0x0
  push {r4,lr}
  mov r4,r0
  sub sp,#0x20
  str r2,[sp,#0x0]
  mov r2,r1
  add r1,sp,#0xc
  bl 0x10120a74
  mov r0,r4
  add r1,sp,#0xc
  bl 0x101209ae
  add sp,#0x20
  pop {r4,pc}
