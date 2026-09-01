; FUN_10138b5c @ 0x10138b5c size=24
  push {r4,lr}
  ldr r4,[r0,#0x10]
  cbz r4,0x10138b72
  ldr r3,[r4,#0x18]
  cbz r3,0x10138b68
  blx r3
  mov r0,r4
  pop.w {r4,lr}
  b.w 0x10113fd0
  pop {r4,pc}
