; FUN_100f90c4 @ 0x100f90c4 size=34
  cbz r0,0x100f90e4
  push {r4,r5,r6,lr}
  ldrd r3,r6,[r0,#0x18]
  mov r5,r1
  mov r4,r0
  cbz r3,0x100f90d4
  blx r3
  cbnz r5,0x100f90e2
  mov r1,r4
  mov r0,r6
  ldr r3,[r6,#0x8]
  pop.w {r4,r5,r6,lr}
  bx r3
  pop {r4,r5,r6,pc}
  bx lr
