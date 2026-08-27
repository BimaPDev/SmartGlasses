; FUN_1408acf0 @ 0x1408acf0 size=32
  cbz r0,0x1408ad0e
  push {r4,lr}
  mov r4,r1
  bl 0x1408a7dc
  cbz r0,0x1408ad0c
  ldr r0,[r0,#0x8]
  cbz r0,0x1408ad0c
  add.w r1,r4,#0x12
  ldr.w r0,[r0,r1,lsl #0x2]
  cbz r0,0x1408ad0c
  ldr r0,[r0,#0x4]
  pop {r4,pc}
  bx lr
