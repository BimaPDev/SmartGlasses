; FUN_140c05dc @ 0x140c05dc size=32
  push {r4,lr}
  ldr r4,[0x140c05fc]
  ldab r3,[r4]
  lsls r3,r3,#0x1f
  bmi 0x140c05fa
  mov r0,r4
  bl 0x140bff16
  cbz r0,0x140c05fa
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x140bff2e
  pop {r4,pc}
