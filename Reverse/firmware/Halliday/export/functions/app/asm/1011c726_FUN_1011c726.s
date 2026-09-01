; FUN_1011c726 @ 0x1011c726 size=48
  push {r4,r5,r6,r7,lr}
  movs r4,#0x0
  mov r6,r0
  mov r0,r4
  sxtb r5,r4
  cmp r3,r5
  bgt 0x1011c736
  pop {r4,r5,r6,r7,pc}
  ldr.w r7,[r1,r4,lsl #0x2]
  ldr.w r5,[r2,r4,lsl #0x2]
  add r5,r7
  add r5,r0
  cmp r7,r5
  ite hi
  mov.hi r7,#0x1
  mov.ls r7,#0x0
  str.w r5,[r6,r4,lsl #0x2]
  it ne
  mov.ne r0,r7
  adds r4,#0x1
  b 0x1011c72e
