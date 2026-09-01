; FUN_1011c984 @ 0x1011c984 size=50
  push {r4,r5,r6,r7,lr}
  movs r4,#0x0
  mov r6,r0
  mov r12,r3
  mov r0,r4
  sxtb r5,r4
  cmp r12,r5
  bgt 0x1011c996
  pop {r4,r5,r6,r7,pc}
  ldr.w r7,[r1,r4,lsl #0x2]
  ldr.w r3,[r2,r4,lsl #0x2]
  subs r5,r7,r0
  subs r5,r5,r3
  cmp r7,r5
  ite cc
  mov.cc r7,#0x1
  mov.cs r7,#0x0
  str.w r5,[r6,r4,lsl #0x2]
  it ne
  mov.ne r0,r7
  adds r4,#0x1
  b 0x1011c98e
