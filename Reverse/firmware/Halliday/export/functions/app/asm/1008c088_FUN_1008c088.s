; FUN_1008c088 @ 0x1008c088 size=36
  push {r3,r4,r5,lr}
  mov r5,r0
  bl 0x101272e4
  mov r4,r0
  cbz r0,0x1008c0aa
  mov r0,r5
  movs r1,#0x0
  ldr r2,[0x1008c0ac]
  bl 0x1008abf0
  mov r1,r5
  mov r0,r4
  pop.w {r3,r4,r5,lr}
  b.w 0x101272c6
  pop {r3,r4,r5,pc}
