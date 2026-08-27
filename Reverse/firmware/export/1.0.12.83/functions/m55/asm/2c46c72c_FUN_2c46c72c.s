; FUN_2c46c72c @ 0x2c46c72c size=50
  push {r3,lr}
  movs r1,#0x1
  movs r0,#0x28
  vpush {d8}
  vmov.f64 d8,d0
  bl 0x2c6685b4
  cbz r0,0x2c46c758
  mov.w r12,#0x2
  movs r1,#0x1
  ldr r2,[0x2c46c760]
  ldr r3,[0x2c46c764]
  strb.w r12,[r0,#0x0]
  str r1,[r0,#0xc]
  strd r2,r3,[r0,#0x4]
  vstr.64 d8,[r0,#0x18]
  vpop {d8}
  pop {r3,pc}
