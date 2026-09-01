; FUN_1012729a @ 0x1012729a size=44
  push {r4,lr}
  mov r4,r0
  bl 0x1012a7b2
  cbz r4,0x101272b8
  ldr r0,[r4,#0x4]
  cbz r0,0x101272c4
  pop.w {r4,lr}
  b.w 0x1008bbc0
  ldr r0,[r4,#0x4]
  cbz r0,0x101272b8
  bl 0x1008bbc0
  mov r0,r4
  bl 0x10092f64
  mov r4,r0
  cmp r0,#0x0
  bne 0x101272b0
  pop {r4,pc}
