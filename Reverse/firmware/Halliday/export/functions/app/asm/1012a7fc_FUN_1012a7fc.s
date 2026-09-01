; FUN_1012a7fc @ 0x1012a7fc size=50
  push {r4,r5,r6,lr}
  ldr r2,[r0,#0x8]
  ldr r6,[r0,#0x0]
  ldr r0,[r0,#0x4]
  subs r2,r2,r6
  add.w r4,r2,r2, lsr #0x1f
  ldr r2,[r1,#0x4]
  ldr r3,[r1,#0x0]
  subs r2,r2,r0
  sub.w r2,r2,r4, asr #0x1
  muls r2,r2
  subs r3,r3,r6
  asrs r5,r4,#0x1
  sub.w r3,r3,r4, asr #0x1
  muls r5,r5
  mla r3,r3,r3,r2
  cmp r5,r3
  ite cc
  mov.cc r0,#0x0
  mov.cs r0,#0x1
  pop {r4,r5,r6,pc}
