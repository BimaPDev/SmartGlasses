; FUN_2c0f8b0c @ 0x2c0f8b0c size=32
  push {r1,r3,r7,lr}
  add r3,sp,#0x154
  stmia r7!,{r0,r1}
  subs r1,#0x7b
  bne 0x2c0f8c16
  ldr r7,[r2,#0x64]
  cmp r5,#0x3d
  lsls r6,r5,#0x11
  strb r7,[r7,#0x12]
  svc 0x39
  strb r1,[r2,#0x3]
  b 0x2c0f8432
  svc 0x39
  movs r3,#0x61
  cmp r6,#0xe4
  cmp r0,#0x24
