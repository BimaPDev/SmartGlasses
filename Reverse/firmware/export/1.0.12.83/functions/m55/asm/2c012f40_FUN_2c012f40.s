; FUN_2c012f40 @ 0x2c012f40 size=38
  movs r2,#0x1
  b 0x2c012f4a
  strexb r3,r2,[r0]
  cbz r3,0x2c012f5e
  ldrexb r3,[r0]
  uxtb r3,r3
  cmp r3,#0x0
  beq 0x2c012f44
  clrex
  mov.w r0,#0xffffffff
  bx lr
  dmb #0x1f
  mov r0,r3
  bx lr
