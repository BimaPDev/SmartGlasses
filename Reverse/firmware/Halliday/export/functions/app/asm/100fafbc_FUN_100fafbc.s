; FUN_100fafbc @ 0x100fafbc size=30
  ldr r3,[r0,#0x14]
  push {r4,lr}
  mov r4,r0
  cbz r3,0x100fafd2
  ldr r1,[r0,#0x0]
  cbz r1,0x100fafce
  ldr r0,[r0,#0x1c]
  ldr r3,[r0,#0x8]
  blx r3
  movs r3,#0x0
  str r3,[r4,#0x0]
  movs r3,#0x0
  strd r3,r3,[r4,#0x20]
  pop {r4,pc}
