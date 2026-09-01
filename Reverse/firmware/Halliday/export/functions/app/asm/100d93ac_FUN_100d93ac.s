; FUN_100d93ac @ 0x100d93ac size=38
  push {r0,r1,r2,r3,r4,lr}
  ldr r4,[0x100d93d4]
  strd r2,r1,[sp,#0x8]
  ldr r4,[r4,#0x0]
  str r3,[sp,#0x4]
  cbz r4,0x100d93ce
  bl 0x10131c1c
  ldrd r3,r2,[sp,#0x4]
  mov r12,r4
  ldr r1,[sp,#0xc]
  add sp,#0x10
  pop.w {r4,lr}
  bx r12
  add sp,#0x10
  pop {r4,pc}
