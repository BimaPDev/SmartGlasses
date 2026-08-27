; FUN_140c4728 @ 0x140c4728 size=24
  ldr r2,[0x140c4740]
  cmp r0,r2
  push {r4,lr}
  beq 0x140c473e
  ldr r2,[r0,#0x8]
  subs r4,r2,#0x1
  cmp r2,#0x0
  str r4,[r0,#0x8]
  bgt 0x140c473e
  bl 0x140c4722
  pop {r4,pc}
