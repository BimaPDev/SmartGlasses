; FUN_1013b9ee @ 0x1013b9ee size=38
  push {r4,lr}
  cbz r0,0x1013ba10
  ldr r3,[r1,#0x0]
  adds r3,#0x1
  str r3,[r1,#0x0]
  ldr r4,[r0,#0x10]
  cmp r3,r4
  it eq
  mov.eq r3,#0x0
  str r3,[r1,#0x0]
  ldr r1,[r0,#0xc]
  movs r0,#0x0
  add.w r3,r1,r3, lsl #0x2
  ldr r3,[r3,#0x0]
  str r3,[r2,#0x0]
  pop {r4,pc}
  movs r0,#0x1
  b 0x1013ba0e
