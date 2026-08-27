; FUN_140a1548 @ 0x140a1548 size=46
  push {r4,lr}
  ldr r3,[0x140a1578]
  ldr r4,[r3,#0x0]
  ldr.w r2,[r4,#0x16c]
  cmp r0,r2
  bcc 0x140a155a
  movs r0,#0x1
  pop {r4,pc}
  mov r3,r0
  mov.w r12,#0x118
  mov r0,r1
  mla r1,r12,r3,r4
  mov.w r2,#0x112
  add.w r1,r1,#0x170
  bl 0x140e5278
  movs r0,#0x0
  pop {r4,pc}
