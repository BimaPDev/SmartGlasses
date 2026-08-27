; FUN_2c4dd620 @ 0x2c4dd620 size=30
  push {r3,r4,r5,lr}
  mov r5,r2
  ldr r0,[r1,#0x0]
  mov r4,r1
  ldr r2,[0x2c4dd640]
  subs r1,r5,r0
  bl 0x2c66b450
  ldr r3,[r4,#0x0]
  add r0,r3
  cmp r5,r0
  ite ls
  str.ls r5,[r4,#0x0]
  str.hi r0,[r4,#0x0]
  pop {r3,r4,r5,pc}
