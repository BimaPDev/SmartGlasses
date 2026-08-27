; FUN_140d77f0 @ 0x140d77f0 size=24
  add.w r1,r1,#0x10000000
  ldr r0,[r0,#0x4]
  subs r1,#0x1
  subs r1,r1,r0
  cmp r1,r2
  push {r3,lr}
  bcs 0x140d7806
  mov r0,r3
  bl 0x140cb806
  pop {r3,pc}
