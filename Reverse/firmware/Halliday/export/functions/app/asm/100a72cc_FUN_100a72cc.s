; FUN_100a72cc @ 0x100a72cc size=42
  ldr r3,[0x100a7310]
  ldr r2,[r3,#0x0]
  cbz r2,0x100a7302
  ldrb r3,[r2,#0x2]
  subs r0,#0x2
  cmp r3,r1
  it cs
  mov.cs r3,r1
  cmp r0,#0x16
  bhi 0x100a7302
  tbb [pc,r0]
  ldr r2,[r2,#0x1c]
  ldr.w r1,[r2,r3,lsl #0x2]
  mov r0,r1
  bx lr
  ldr r2,[r2,#0x14]
  b 0x100a72fe
  ldr r2,[r2,#0x2c]
  b 0x100a72fe
