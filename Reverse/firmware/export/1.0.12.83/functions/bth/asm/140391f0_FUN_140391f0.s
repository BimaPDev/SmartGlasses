; FUN_140391f0 @ 0x140391f0 size=108
  cmp r1,#0x0
  ble 0x1403925a
  mov r12,r3
  vldr.32 s13,[pc,#0x64]
  movs r3,#0x0
  vldr.32 s12,[pc,#0x60]
  push {r4,lr}
  add.w lr,r0,#0x2
  ldrsh.w r4,[r0,r3,lsl #0x1]
  vmov s15,r4
  vcvt.f32.s32 s15,s15
  vstr.32 s15,[r2]
  ldrsh.w r4,[lr,r3,lsl #0x1]
  adds r3,#0x2
  vmov s15,r4
  vcvt.f32.s32 s15,s15
  vstmia r12!,{s15}
  vldmia r2!,{s14}
  vcmpe.f32 s14,s13
  vmrs apsr,fpscr
  blt 0x14039242
  vsub.f32 s14,s14,s12
  vstr.32 s14,[r2,#-0x4]
  vldr.32 s15,[r12,#-0x4]
  vcmpe.f32 s15,s13
  vmrs apsr,fpscr
  itt ge
  vsub.ge.f32 s15,s15,s12
  vstr.ge.32 s15,[r12,#-0x4]
  cmp r1,r3
  bgt 0x14039206
  pop {r4,pc}
  bx lr
