; FUN_2c4bfdb8 @ 0x2c4bfdb8 size=36
  push {r3,lr}
  ldr r3,[0x2c4bfddc]
  ldr r3,[r3,#0x0]
  cbz r3,0x2c4bfdd4
  ldr r2,[0x2c4bfde0]
  ldr r2,[r2,#0x0]
  cmp r2,r0
  bls 0x2c4bfdcc
  ldrsb r0,[r3,r0]
  pop {r3,pc}
  add r3,r2
  ldrsb.w r0,[r3,#-0x1]
  pop {r3,pc}
  ldr r1,[0x2c4bfde4]
  ldr r0,[0x2c4bfde8]
  bl 0x2c673ca8
