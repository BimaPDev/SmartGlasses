; FUN_101102fc @ 0x101102fc size=54
  vmul.f32 s14,s0,s0
  vldr.32 s13,[pc,#0x30]
  vmul.f32 s15,s0,s14
  vmla.f32 s0,s15,s13
  vmul.f32 s15,s14,s15
  vldr.32 s13,[pc,#0x24]
  vmla.f32 s0,s15,s13
  vmul.f32 s15,s14,s15
  vldr.32 s13,[pc,#0x1c]
  vmla.f32 s0,s15,s13
  vmul.f32 s15,s14,s15
  vldr.32 s14,[pc,#0x14]
  vmla.f32 s0,s15,s14
  bx lr
