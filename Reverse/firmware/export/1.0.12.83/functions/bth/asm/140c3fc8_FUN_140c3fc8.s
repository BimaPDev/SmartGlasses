; FUN_140c3fc8 @ 0x140c3fc8 size=24
  ldr r2,[0x140c3fe0]
  cmp r0,r2
  push {r4,lr}
  beq 0x140c3fde
  ldr r2,[r0,#0x8]
  subs r4,r2,#0x1
  cmp r2,#0x0
  str r4,[r0,#0x8]
  bgt 0x140c3fde
  bl 0x140c3fc2
  pop {r4,pc}
