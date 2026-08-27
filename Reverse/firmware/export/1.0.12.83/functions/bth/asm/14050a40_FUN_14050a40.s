; FUN_14050a40 @ 0x14050a40 size=44
  push {r3,r4,r5,lr}
  ldr r5,[0x14050a6c]
  mov.w r1,#0xffffffff
  ldr r0,[r5,#0x0]
  bl 0x140e5148
  ldr r3,[0x14050a70]
  ldr r0,[r5,#0x0]
  ldr r4,[r3,#0x0]
  cmp.w r4,#0x1000000
  itte cs
  mov.cs.w r4,#0x100000
  ldr.cs r2,[0x14050a74]
  add.cc r2,r4,#0x1
  str r2,[r3,#0x0]
  bl 0x140e52d8
  mov r0,r4
  pop {r3,r4,r5,pc}
