; FUN_1011a4de @ 0x1011a4de size=26
  push {r4,lr}
  mov r4,r0
  cbz r0,0x1011a4f6
  ldr r3,[r0,#0x0]
  cbz r3,0x1011a4f6
  ldr r0,[r0,#0x8]
  add r0,r3
  bl 0x1011ea10
  ldr r3,[r4,#0x8]
  add r0,r3
  str r0,[r4,#0x8]
  pop {r4,pc}
