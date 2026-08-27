; FUN_2c018048 @ 0x2c018048 size=38
  push {r4,lr}
  mrs r4,control
  bic r4,r4,#0x2
  msr control,r4
  isb #0xf
  movs r0,#0x0
  bl 0x2c018070
  orr r4,r4,#0x2
  msr control,r4
  isb #0xf
  pop {r4,pc}
