; FUN_140e417c @ 0x140e417c size=40
  vmov s15,r0
  vcmpe.f32 s15,#0
  vmrs apsr,fpscr
  bmi 0x140e418e
  b.w 0x140e41d4
  vneg.f32 s15,s15
  push {r3,lr}
  vmov r0,s15
  bl 0x140e41d4
  rsbs r0,r0
  sbc.w r1,r1,r1, lsl #0x1
  pop {r3,pc}
