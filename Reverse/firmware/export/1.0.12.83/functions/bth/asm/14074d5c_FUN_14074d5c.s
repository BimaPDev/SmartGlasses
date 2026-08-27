; FUN_14074d5c @ 0x14074d5c size=34
  ldr r3,[r0,#0x0]
  cmp r0,r3
  beq 0x14074d7a
  ldr r2,[r0,#0x4]
  ldr r1,[r3,#0x0]
  cmp r3,r2
  ldr r2,[r0,#0x8]
  str r1,[r0,#0x0]
  it eq
  str.eq r0,[r0,#0x4]
  cbz r2,0x14074d76
  subs r2,#0x1
  str r2,[r0,#0x8]
  mov r0,r3
  bx lr
  movs r3,#0x0
  b 0x14074d76
