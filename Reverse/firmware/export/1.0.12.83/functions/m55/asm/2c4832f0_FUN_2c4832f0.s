; FUN_2c4832f0 @ 0x2c4832f0 size=26
  push {r4,r5,r6,lr}
  ldr r4,[0x2c48330c]
  mov r5,r0
  add.w r6,r4,#0x10
  ldr.w r3,[r4],#0x4
  mov r0,r5
  cbz r3,0x2c483304
  blx r3
  cmp r4,r6
  bne 0x2c4832fa
  pop {r4,r5,r6,pc}
