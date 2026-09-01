; FUN_10133712 @ 0x10133712 size=18
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x10]
  cbz r0,0x10133722
  bl 0x100c1c90
  movs r3,#0x0
  str r3,[r4,#0x10]
  pop {r4,pc}
