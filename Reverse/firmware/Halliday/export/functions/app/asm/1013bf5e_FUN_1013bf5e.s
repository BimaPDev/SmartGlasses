; FUN_1013bf5e @ 0x1013bf5e size=66
  vldr.32 s15,[r1,#0x4]
  vldr.32 s14,[r2,#0xc]
  vldr.32 s13,[r1]
  vldr.32 s12,[r2]
  vmul.f32 s14,s15,s14
  vmla.f32 s14,s13,s12
  vldr.32 s12,[r2,#0x18]
  vadd.f32 s14,s14,s12
  vstr.32 s14,[r0]
  vldr.32 s12,[r2,#0x10]
  vldr.32 s14,[r2,#0x4]
  vmul.f32 s15,s15,s12
  vmla.f32 s15,s13,s14
  vldr.32 s14,[r2,#0x1c]
  vadd.f32 s15,s15,s14
  vstr.32 s15,[r0,#0x4]
  bx lr
