; FUN_1011f46e @ 0x1011f46e size=86
  push {r4,r5,r6,r7,lr}
  mov r4,r0
  mov r3,r2
  mov r6,r4
  adds r0,r2,#0x3
  lsrs r0,r0,#0x2
  adds r7,r1,r2
  cmp r3,#0x3
  sub.w r5,r7,r3
  bhi 0x1011f4aa
  mvn r5,#0x3
  lsrs r6,r2,#0x2
  bic r3,r2,#0x3
  mla r2,r5,r6,r2
  adds r7,r4,r3
  add r3,r1
  cbz r2,0x1011f4a8
  ldrb.w r1,[r1,r6,lsl #0x2]
  adds r5,r3,#0x1
  str.w r1,[r4,r6,lsl #0x2]
  add r3,r2
  cmp r3,r5
  bne 0x1011f4b6
  pop {r4,r5,r6,r7,pc}
  ldr r5,[r5,#0x0]
  subs r3,#0x4
  rev r5,r5
  str.w r5,[r6],#0x4
  b 0x1011f47c
  ldr r1,[r7,#0x0]
  ldrb.w r2,[r5],#0x1
  orr.w r2,r2,r1, lsl #0x8
  str r2,[r7,#0x0]
  b 0x1011f4a4
