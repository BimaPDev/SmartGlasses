; FUN_2c666ce0 @ 0x2c666ce0 size=30
  vmov.f64 d7,d0
  ldr r2,[0x2c666d70]
  vmov r3,s15
  bic r3,r3,#0x80000000
  cmp r3,r2
  ble 0x2c666d2c
  ldr r2,[0x2c666d74]
  cmp r3,r2
  ble 0x2c666cfe
  vsub.f64 d0,d0,d0
  bx lr
