; FUN_140d9116 @ 0x140d9116 size=36
  push {r4,lr}
  ldr r3,[r1,#0x0]
  sub sp,#0x18
  mov r4,r0
  ldr r3,[r3,#0x10]
  mov r0,sp
  blx r3
  mov r0,r4
  ldrd r1,r2,[sp,#0x0]
  bl 0x140d916c
  mov r0,sp
  bl 0x140d18d4
  mov r0,r4
  add sp,#0x18
  pop {r4,pc}
