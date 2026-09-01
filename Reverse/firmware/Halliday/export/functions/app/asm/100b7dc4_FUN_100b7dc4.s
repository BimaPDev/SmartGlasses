; FUN_100b7dc4 @ 0x100b7dc4 size=32
  push {r4}
  ldr r2,[0x100b7de4]
  ldr r4,[0x100b7de8]
  ldr r0,[0x100b7dec]
  subs r4,r4,r2
  lsls r4,r4,#0x5
  and r4,r4,#0xff00
  mov r3,r1
  orrs r0,r4
  ldr r2,[0x100b7df0]
  ldr r1,[0x100b7df4]
  pop.w r4
  b.w 0x100a5b78
