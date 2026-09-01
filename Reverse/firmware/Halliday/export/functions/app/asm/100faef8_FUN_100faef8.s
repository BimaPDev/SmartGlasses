; FUN_100faef8 @ 0x100faef8 size=26
  push {r4,lr}
  mov r4,r1
  cbz r0,0x100faf0c
  ldr r3,[r0,#0x14]
  cbz r3,0x100faf0c
  ldr r1,[r1,#0x0]
  cbz r1,0x100faf0c
  ldr r0,[r0,#0x1c]
  ldr r3,[r0,#0x8]
  blx r3
  movs r3,#0x0
  str r3,[r4,#0x0]
  pop {r4,pc}
