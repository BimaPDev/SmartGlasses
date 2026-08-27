; FUN_140c3e88 @ 0x140c3e88 size=42
  ldr r3,[r0,#0x0]
  ldr.w r2,[r3,#-0x4]
  cmp r2,#0x0
  it lt
  mov.lt r2,#0x0
  push {r4,lr}
  it lt
  str.w.lt r2,[r3,#-0x4]
  ldr r2,[r1,#0x0]
  ldr.w r4,[r2,#-0x4]
  cmp r4,#0x0
  itt lt
  mov.lt r4,#0x0
  str.w.lt r4,[r2,#-0x4]
  str r2,[r0,#0x0]
  str r3,[r1,#0x0]
  pop {r4,pc}
