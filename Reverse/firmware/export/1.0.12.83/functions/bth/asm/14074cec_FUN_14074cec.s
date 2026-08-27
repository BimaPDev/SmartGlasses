; FUN_14074cec @ 0x14074cec size=34
  ldr r3,[r1,#0x0]
  cmp r0,r3
  beq 0x14074d0a
  ldr r2,[r3,#0x0]
  str r2,[r1,#0x0]
  ldr r2,[r0,#0x4]
  cmp r2,r3
  ldr r2,[r0,#0x8]
  it eq
  str.eq r1,[r0,#0x4]
  cbz r2,0x14074d06
  subs r2,#0x1
  str r2,[r0,#0x8]
  mov r0,r3
  bx lr
  movs r3,#0x0
  b 0x14074d06
