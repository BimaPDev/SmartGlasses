; FUN_2c571d78 @ 0x2c571d78 size=46
  cmp r1,#0x0
  ble 0x2c571da2
  ldr r3,[r0,#0x4]
  cmp r3,r1
  blt 0x2c571da2
  push {r4}
  ldr r4,[r0,#0xc]
  ldrd r0,r2,[r0,#0x10]
  subs r2,r2,r0
  subs r0,r4,#0x1
  pop.w r4
  mla r1,r3,r0,r1
  cmp.w r1,r2, asr #0x2
  ite le
  mov.le r0,#0x1
  mov.gt r0,#0x0
  bx lr
  movs r0,#0x0
  bx lr
