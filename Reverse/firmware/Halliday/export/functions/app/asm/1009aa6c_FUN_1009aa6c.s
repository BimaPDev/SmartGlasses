; FUN_1009aa6c @ 0x1009aa6c size=28
  push {r4,lr}
  ldr r4,[0x1009aa88]
  ldrd r0,r1,[r4,#0x34]
  cmp r0,r1
  bcs 0x1009aa86
  subs r1,r1,r0
  bl 0x1011e89a
  bl 0x1011e8f6
  movs r3,#0x0
  str r3,[r4,#0x38]
  pop {r4,pc}
