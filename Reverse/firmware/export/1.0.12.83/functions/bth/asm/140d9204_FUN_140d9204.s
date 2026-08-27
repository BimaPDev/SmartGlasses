; FUN_140d9204 @ 0x140d9204 size=26
  vmov r3,s0
  ldr r2,[0x140d9288]
  bic r3,r3,#0x80000000
  cmp r3,r2
  ble 0x140d924c
  cmp.w r3,#0x7f800000
  blt 0x140d921e
  vsub.f32 s0,s0,s0
  bx lr
