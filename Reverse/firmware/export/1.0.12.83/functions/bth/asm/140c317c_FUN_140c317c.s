; FUN_140c317c @ 0x140c317c size=40
  push {r0,r1,r4,lr}
  mov r4,r1
  add r0,sp,#0x4
  mov r1,r2
  mov r2,r3
  mov r3,sp
  bl 0x140c44a4
  ldr r2,[sp,#0x10]
  add r1,sp,#0x4
  mov r0,r4
  bl 0x140d29c4
  mov r4,r0
  add r0,sp,#0x4
  bl 0x140c3fe4
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
