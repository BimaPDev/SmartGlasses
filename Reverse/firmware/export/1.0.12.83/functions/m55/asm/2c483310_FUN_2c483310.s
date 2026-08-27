; FUN_2c483310 @ 0x2c483310 size=26
  push {r4,r5,r6,lr}
  ldr r4,[0x2c48332c]
  mov r5,r0
  add.w r6,r4,#0x10
  ldr.w r3,[r4],#0x4
  mov r0,r5
  cbz r3,0x2c483324
  blx r3
  cmp r4,r6
  bne 0x2c48331a
  pop {r4,r5,r6,pc}
