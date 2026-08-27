; FUN_2c4de640 @ 0x2c4de640 size=40
  push {r4,lr}
  ldr r4,[0x2c4de668]
  mov r3,r0
  cmp r1,r4
  beq 0x2c4de654
  ldr r3,[0x2c4de66c]
  cmp r1,r3
  beq 0x2c4de660
  movs r0,#0x0
  pop {r4,pc}
  ldrd r0,r1,[r2,#0x0]
  strd r0,r1,[r3,#0x8]
  movs r0,#0x1
  b 0x2c4de652
  mov r1,r2
  bl 0x2c4de618
  b 0x2c4de65c
