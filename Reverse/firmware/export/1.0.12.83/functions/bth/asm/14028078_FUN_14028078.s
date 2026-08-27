; FUN_14028078 @ 0x14028078 size=46
  mov.w r3,#0x3e80
  mul r1,r3,r1
  movs r2,#0x0
  mov r3,r0
  cbz r1,0x1402809a
  subs r1,#0x1
  adc r2,r2,#0xffffffff
  orrs r2,r1
  beq 0x1402809a
  ldr r2,[0x140280a8]
  movs r0,#0x0
  str.w r1,[r2,r3,lsl #0x2]
  bx lr
  movs r1,#0x1
  ldr r2,[0x140280a8]
  movs r0,#0x0
  str.w r1,[r2,r3,lsl #0x2]
  bx lr
