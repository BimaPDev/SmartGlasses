; FUN_140c3a9c @ 0x140c3a9c size=30
  ldr r3,[r1,#0x18]
  push {r0,r1,r4,lr}
  mov r4,r0
  cbnz r3,0x140c3aaa
  ldr r0,[0x140c3abc]
  bl 0x140cb800
  add r3,sp,#0x4
  ldrd r1,r2,[r1,#0x0]
  bl 0x140c4bb4
  mov r0,r4
  add sp,#0x8
  pop {r4,pc}
