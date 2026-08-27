; FUN_140cba08 @ 0x140cba08 size=26
  push {r4,r5,r6,lr}
  mov r5,r0
  mov r6,r1
  ldr r4,[r0,#0x18]
  cbz r4,0x140cba20
  mov r1,r5
  mov r0,r6
  ldrd r3,r2,[r4,#0x4]
  blx r3
  ldr r4,[r4,#0x0]
  b 0x140cba10
  pop {r4,r5,r6,pc}
