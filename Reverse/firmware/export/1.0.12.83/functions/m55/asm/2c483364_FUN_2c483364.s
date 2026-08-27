; FUN_2c483364 @ 0x2c483364 size=26
  push {r4,r5,r6,lr}
  ldr r4,[0x2c483380]
  mov r5,r0
  add.w r6,r4,#0x20
  ldr.w r3,[r4,#0x4]!
  mov r0,r5
  cbz r3,0x2c483378
  blx r3
  cmp r4,r6
  bne 0x2c48336e
  pop {r4,r5,r6,pc}
