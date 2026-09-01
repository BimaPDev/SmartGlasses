; FUN_100f9d98 @ 0x100f9d98 size=60
  cbz r0,0x100f9dd0
  push {r3,r4,r5,r6,r7,lr}
  mov r6,r1
  cbz r1,0x100f9dcc
  ldr r7,[r0,#0x10]
  add.w r4,r0,#0x14
  add.w r7,r4,r7, lsl #0x2
  cmp r4,r7
  bcc 0x100f9db4
  b 0x100f9dcc
  cmp r7,r4
  bls 0x100f9dcc
  ldr r3,[r4,#0x0]
  mov r1,r6
  ldr r3,[r3,#0x0]
  mov r5,r4
  ldr r0,[r3,#0x8]
  adds r4,#0x4
  bl 0x1011ea18
  cmp r0,#0x0
  bne 0x100f9db0
  ldr r0,[r5,#0x0]
  pop {r3,r4,r5,r6,r7,pc}
  movs r0,#0x0
  pop {r3,r4,r5,r6,r7,pc}
  movs r0,#0x0
  bx lr
