; FUN_140c8994 @ 0x140c8994 size=36
  ldr r3,[r1,#0x18]
  push {r4,lr}
  mov r4,r0
  cbnz r3,0x140c89a2
  ldr r0,[0x140c89b8]
  bl 0x140cb800
  ldrd r3,r2,[r1,#0x0]
  add.w r1,r0,#0x8
  add r2,r3
  str r1,[r0,#0x0]
  mov r1,r3
  bl 0x140c7be0
  mov r0,r4
  pop {r4,pc}
