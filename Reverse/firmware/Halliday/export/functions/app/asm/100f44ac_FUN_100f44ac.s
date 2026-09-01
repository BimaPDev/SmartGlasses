; FUN_100f44ac @ 0x100f44ac size=74
  cmp r0,#0x2
  bhi 0x100f44ea
  cbz r3,0x100f44ea
  push {r4,r5,r6}
  ldr r4,[r3,#0x0]
  cbz r4,0x100f44f0
  ldr r4,[r3,#0x4]
  cbz r4,0x100f44f0
  ldr r4,[0x100f44f8]
  ldr.w r5,[r4,r0,lsl #0x2]
  cbnz r5,0x100f44e4
  ldr r5,[0x100f44fc]
  ldr r6,[r5,#0x0]
  cbz r6,0x100f44e0
  ldr r5,[0x100f4500]
  str.w r3,[r4,r0,lsl #0x2]
  str.w r1,[r5,r0,lsl #0x3]
  add.w r3,r5,r0, lsl #0x3
  movs r0,#0x0
  str r2,[r3,#0x4]
  pop {r4,r5,r6}
  bx lr
  str r1,[r5,#0x0]
  b 0x100f44ca
  mov.w r0,#0xffffffff
  b 0x100f44dc
  mvn r0,#0x15
  bx lr
  mvn r0,#0x15
  b 0x100f44dc
