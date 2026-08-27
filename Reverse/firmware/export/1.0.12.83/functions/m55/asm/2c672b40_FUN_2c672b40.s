; FUN_2c672b40 @ 0x2c672b40 size=48
  mov r2,r0
  push {r3,lr}
  mov r3,r1
  vmov d7,r2,r3
  vcmpe.f64 d7,#0
  vmrs apsr,fpscr
  bmi 0x2c672b5c
  pop.w {r3,lr}
  b.w 0x2c672b70
  vneg.f64 d7,d7
  vmov r0,r1,d7
  bl 0x2c672b70
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  pop {r3,pc}
