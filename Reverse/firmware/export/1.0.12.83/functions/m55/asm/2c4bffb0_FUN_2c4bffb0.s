; FUN_2c4bffb0 @ 0x2c4bffb0 size=46
  mov.w r3,#0x3e80
  movs r2,#0x0
  mul r1,r3,r1
  mov r3,r0
  cbz r1,0x2c4bffd2
  subs r1,#0x1
  adc r2,r2,#0xffffffff
  orrs r2,r1
  beq 0x2c4bffd2
  ldr r2,[0x2c4bffe0]
  movs r0,#0x0
  str.w r1,[r2,r3,lsl #0x2]
  bx lr
  movs r1,#0x1
  ldr r2,[0x2c4bffe0]
  movs r0,#0x0
  str.w r1,[r2,r3,lsl #0x2]
  bx lr
