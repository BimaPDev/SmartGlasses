; FUN_2c57fd74 @ 0x2c57fd74 size=40
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x4]
  cbz r0,0x2c57fd9a
  ldr r3,[r4,#0xc]
  cbz r3,0x2c57fd9a
  bl 0x2c55fe40
  ldr r4,[r4,#0xc]
  mov r0,r4
  bl 0x2c58032c
  mov r1,r0
  mov r0,r4
  subs r1,#0x1
  pop.w {r4,lr}
  b.w 0x2c580350
  pop {r4,pc}
