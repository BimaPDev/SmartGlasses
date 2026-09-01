; FUN_1011cb4c @ 0x1011cb4c size=32
  push {r4,r5,lr}
  mov r5,r0
  mov r4,r3
  sub sp,#0x44
  mov r0,sp
  ldrsb.w r3,[r3,#0x0]
  bl 0x1011c7a8
  mov r1,sp
  mov r0,r5
  ldr.w r3,[r4,#0xac]
  blx r3
  add sp,#0x44
  pop {r4,r5,pc}
