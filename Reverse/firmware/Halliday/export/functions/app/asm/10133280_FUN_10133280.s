; FUN_10133280 @ 0x10133280 size=46
  push {r3,r4,r5,lr}
  movs r1,#0x1
  mov r5,r0
  movw r0,#0xc1a
  bl 0x100c5d4c
  mov r4,r0
  cbz r0,0x101332a8
  mov r1,r5
  bl 0x10132eaa
  mov r1,r4
  pop.w {r3,r4,r5,lr}
  movs r2,#0x0
  movw r0,#0xc1a
  b.w 0x100c5e48
  mvn r0,#0x68
  pop {r3,r4,r5,pc}
