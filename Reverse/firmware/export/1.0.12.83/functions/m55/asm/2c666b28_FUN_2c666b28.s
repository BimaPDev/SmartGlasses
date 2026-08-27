; FUN_2c666b28 @ 0x2c666b28 size=30
  vmov.f64 d7,d0
  ldr r2,[0x2c666bb8]
  vmov r3,s15
  bic r3,r3,#0x80000000
  cmp r3,r2
  ble 0x2c666b72
  ldr r2,[0x2c666bbc]
  cmp r3,r2
  ble 0x2c666b46
  vsub.f64 d0,d0,d0
  bx lr
