; FUN_2c5acf1c @ 0x2c5acf1c size=42
  push {r3,r4,r5,lr}
  mov r4,r0
  ldr.w r0,[r0,#0x1a4]
  cbz r0,0x2c5acf44
  bl 0x2c5d5cd0
  ldr.w r5,[r4,#0x1a4]
  cbz r5,0x2c5acf3e
  mov r0,r5
  bl 0x2c5d5ccc
  mov r1,r5
  movs r0,#0x0
  bl 0x2c472680
  movs r3,#0x0
  str.w r3,[r4,#0x1a4]
  pop {r3,r4,r5,pc}
