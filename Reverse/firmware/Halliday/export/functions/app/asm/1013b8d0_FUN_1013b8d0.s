; FUN_1013b8d0 @ 0x1013b8d0 size=62
  vldr.32 s15,[r1]
  vldr.32 s14,[r0]
  vldr.32 s11,[r1,#0x4]
  vadd.f32 s0,s0,s15
  vldr.32 s15,[r0,#0x4]
  vmov.f32 s13,0x3f000000
  vmov.f32 s12,s14
  vadd.f32 s1,s1,s11
  vmov.f32 s11,s15
  vnmls.f32 s12,s0,s13
  vnmls.f32 s11,s1,s13
  vmla.f32 s14,s12,s2
  vmla.f32 s15,s11,s2
  vstr.32 s14,[r1]
  vstr.32 s15,[r1,#0x4]
  bx lr
