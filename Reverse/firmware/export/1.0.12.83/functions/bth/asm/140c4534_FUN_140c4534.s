; FUN_140c4534 @ 0x140c4534 size=28
  add.w r1,r1,#0x10000000
  ldr r0,[r0,#0x0]
  subs r1,#0x2
  ldr.w r0,[r0,#-0xc]
  subs r1,r1,r0
  cmp r1,r2
  push {r3,lr}
  bcs 0x140c454e
  mov r0,r3
  bl 0x140cb806
  pop {r3,pc}
