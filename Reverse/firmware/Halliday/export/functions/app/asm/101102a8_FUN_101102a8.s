; FUN_101102a8 @ 0x101102a8 size=66
  vmov.f32 s15,0x3f000000
  vmov.f32 s14,0x3f800000
  vldr.32 s13,[pc,#0x38]
  vmla.f32 s14,s0,s15
  vmul.f32 s15,s0,s0
  vmls.f32 s14,s15,s13
  vmul.f32 s15,s0,s15
  vldr.32 s13,[pc,#0x28]
  vmla.f32 s14,s15,s13
  vmul.f32 s15,s0,s15
  vldr.32 s13,[pc,#0x20]
  vmls.f32 s14,s15,s13
  vmul.f32 s15,s0,s15
  vldr.32 s13,[pc,#0x18]
  vmla.f32 s14,s15,s13
  vmov.f32 s0,s14
  bx lr
