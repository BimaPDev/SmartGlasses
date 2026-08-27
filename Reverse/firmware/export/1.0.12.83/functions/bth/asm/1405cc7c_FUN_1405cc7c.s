; FUN_1405cc7c @ 0x1405cc7c size=40
  push {r4,lr}
  mov r4,r0
  movs r1,#0xff
  ldr r3,[0x1405cca4]
  ldr r2,[0x1405cca8]
  movs r0,#0x17
  bl 0x14065fe4
  ldr r2,[0x1405ccac]
  lsls r1,r4,#0x18
  ldrsb.w r3,[r2,#0x50]
  bic r3,r3,#0x4
  it pl
  orr.pl r3,r3,#0x4
  strb.w r3,[r2,#0x50]
  pop {r4,pc}
