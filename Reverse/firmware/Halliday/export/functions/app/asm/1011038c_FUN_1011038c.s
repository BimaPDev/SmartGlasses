; FUN_1011038c @ 0x1011038c size=54
  vmul.f32 s14,s0,s0
  vldr.32 s13,[pc,#0x30]
  vmul.f32 s15,s0,s14
  vmls.f32 s0,s15,s13
  vmul.f32 s15,s14,s15
  vldr.32 s13,[pc,#0x24]
  vmla.f32 s0,s15,s13
  vmul.f32 s15,s14,s15
  vldr.32 s13,[pc,#0x1c]
  vmls.f32 s0,s15,s13
  vmul.f32 s15,s14,s15
  vldr.32 s14,[pc,#0x14]
  vmla.f32 s0,s15,s14
  bx lr
