; FUN_1011f77e @ 0x1011f77e size=64
  push {r4,r5,lr}
  cbz r0,0x1011f7b6
  cmp r1,#0x0
  it lt
  add.lt r1,#0xf
  asrs r1,r1,#0x4
  cmp r1,#0x0
  mov r3,r1
  it lt
  add.lt.w r3,r1,#0x1f
  rsbs r5,r1
  and r5,r5,#0x1f
  and r1,r1,#0x1f
  it pl
  rsb.pl r1,r5
  movs r5,#0x1
  asrs r3,r3,#0x5
  ldr.w r4,[r0,r3,lsl #0x2]
  lsl.w r1,r5,r1
  cbz r2,0x1011f7b8
  orrs r4,r1
  str.w r4,[r0,r3,lsl #0x2]
  pop {r4,r5,pc}
  bic.w r4,r4,r1
  b 0x1011f7b2
