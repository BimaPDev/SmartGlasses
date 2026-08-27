; FUN_140d917c @ 0x140d917c size=26
  vmov r3,s0
  ldr r2,[0x140d91fc]
  bic r3,r3,#0x80000000
  cmp r3,r2
  ble 0x140d91c2
  cmp.w r3,#0x7f800000
  blt 0x140d9196
  vsub.f32 s0,s0,s0
  bx lr
