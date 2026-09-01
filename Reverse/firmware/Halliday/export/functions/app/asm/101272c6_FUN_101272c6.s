; FUN_101272c6 @ 0x101272c6 size=30
  push {r4,r5,r6,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  mov r5,r1
  cbz r0,0x101272d4
  bl 0x101272c6
  ldr r3,[r4,#0x0]
  cbz r3,0x101272e2
  mov r1,r5
  mov r0,r4
  pop.w {r4,r5,r6,lr}
  bx r3
  pop {r4,r5,r6,pc}
