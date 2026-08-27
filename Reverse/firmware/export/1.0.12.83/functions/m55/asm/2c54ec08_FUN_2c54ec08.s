; FUN_2c54ec08 @ 0x2c54ec08 size=34
  push {r4,lr}
  ldr r3,[r0,#0x0]
  ldr r2,[0x2c54ec2c]
  ldr.w r3,[r3,#-0x14]
  adds r4,r0,r3
  str r2,[r0,r3]
  add.w r3,r4,#0xc
  ldr r1,[r4,#0x4]
  cmp r1,r3
  beq 0x2c54ec26
  movs r0,#0x0
  bl 0x2c472680
  mov r0,r4
  pop {r4,pc}
