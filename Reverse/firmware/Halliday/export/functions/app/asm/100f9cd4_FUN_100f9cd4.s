; FUN_100f9cd4 @ 0x100f9cd4 size=30
  cbz r0,0x100f9cee
  push {r4,lr}
  mov r4,r0
  ldr r0,[r0,#0x5c]
  cbz r0,0x100f9cea
  ldr r3,[r0,#0xc]
  ldr r3,[r3,#0xc]
  blx r3
  ldr r3,[r4,#0x10]
  cmp r3,r0
  bhi 0x100f9cec
  movs r0,#0x0
  pop {r4,pc}
  movs r0,#0x0
  bx lr
