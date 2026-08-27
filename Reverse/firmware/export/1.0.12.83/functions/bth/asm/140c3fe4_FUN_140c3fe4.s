; FUN_140c3fe4 @ 0x140c3fe4 size=20
  push {r0,r1,r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  add r1,sp,#0x4
  subs r0,#0xc
  bl 0x140c3fc8
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
