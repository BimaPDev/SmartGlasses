; FUN_10110344 @ 0x10110344 size=54
  vmul.f32 s15,s0,s0
  vldr.32 s14,[pc,#0x30]
  vmov.f32 s0,0x3f800000
  vldr.32 s13,[pc,#0x2c]
  vmls.f32 s0,s15,s14
  vmul.f32 s14,s15,s15
  vmla.f32 s0,s14,s13
  vmul.f32 s14,s15,s14
  vldr.32 s13,[pc,#0x1c]
  vmul.f32 s15,s15,s14
  vmls.f32 s0,s14,s13
  vldr.32 s14,[pc,#0x14]
  vmla.f32 s0,s15,s14
  bx lr
