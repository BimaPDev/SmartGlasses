; FUN_140c1e10 @ 0x140c1e10 size=36
  push {r3,r4,r5,lr}
  lsls r3,r1,#0x1d
  mov r4,r0
  bpl 0x140c1e32
  ldrd r5,r3,[r0,#0x0]
  subs r3,r3,r5
  cmp r3,#0x2
  bls 0x140c1e32
  movs r2,#0x3
  ldr r1,[0x140c1e34]
  mov r0,r5
  bl 0x140db784
  cbnz r0,0x140c1e32
  adds r5,#0x3
  str r5,[r4,#0x0]
  pop {r3,r4,r5,pc}
