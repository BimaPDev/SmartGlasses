; FUN_100a7314 @ 0x100a7314 size=42
  ldr r3,[0x100a7358]
  ldr r2,[r3,#0x0]
  cbz r2,0x100a734a
  ldrb r3,[r2,#0x2]
  subs r0,#0x2
  cmp r3,r1
  it cs
  mov.cs r3,r1
  cmp r0,#0x16
  bhi 0x100a734a
  tbb [pc,r0]
  ldr r2,[r2,#0x18]
  ldrsh.w r1,[r2,r3,lsl #0x1]
  mov r0,r1
  bx lr
  ldr r2,[r2,#0x10]
  b 0x100a7346
  ldr r2,[r2,#0x28]
  b 0x100a7346
