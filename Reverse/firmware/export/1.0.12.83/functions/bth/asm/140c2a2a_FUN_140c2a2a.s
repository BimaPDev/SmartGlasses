; FUN_140c2a2a @ 0x140c2a2a size=26
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x0]
  ldr r3,[r0,#0x4]
  subs r2,r3,#0x1
  cmp r3,#0x1
  str r2,[r0,#0x4]
  bne 0x140c2a40
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x4]
  blx r3
  mov r0,r4
  pop {r4,pc}
