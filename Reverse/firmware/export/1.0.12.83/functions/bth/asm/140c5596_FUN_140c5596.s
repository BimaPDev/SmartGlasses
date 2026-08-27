; FUN_140c5596 @ 0x140c5596 size=32
  push {r4,r5,r6,lr}
  adds r4,r0,r1
  mov r6,r2
  ldrb.w r3,[r4,#0x11d]
  cbnz r3,0x140c55b2
  ldr r3,[r0,#0x0]
  ldr r3,[r3,#0x20]
  blx r3
  cmp r6,r0
  mov r3,r0
  it ne
  strb.ne.w r0,[r4,#0x11d]
  mov r0,r3
  pop {r4,r5,r6,pc}
