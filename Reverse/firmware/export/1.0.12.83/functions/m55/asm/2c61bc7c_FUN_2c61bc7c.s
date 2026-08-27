; FUN_2c61bc7c @ 0x2c61bc7c size=90
  push {r4,r5,r6,lr}
  mov r4,r1
  beq 0x2c61bca6
  ldrh r3,[r1,#0x28]
  cbz r3,0x2c61bcca
  movs r5,#0x0
  mov r6,r5
  ldr r3,[r4,#0x24]
  ldr.w r0,[r3,r5,lsl #0x2]
  bl 0x2c62bea8
  ldr r3,[r4,#0x24]
  str.w r6,[r3,r5,lsl #0x2]
  adds r5,#0x1
  ldrh r3,[r4,#0x28]
  cmp r3,r5
  bhi 0x2c61bc8a
  ldrb.w r3,[r4,#0x2c]
  lsls r3,r3,#0x1e
  beq 0x2c61bcca
  ldrh r3,[r4,#0x28]
  cbz r3,0x2c61bcca
  movs r5,#0x0
  mov r6,r5
  ldr r3,[r4,#0x24]
  ldr.w r0,[r3,r5,lsl #0x3]
  bl 0x2c62bea8
  ldr r3,[r4,#0x24]
  str.w r6,[r3,r5,lsl #0x3]
  adds r5,#0x1
  ldrh r3,[r4,#0x28]
  cmp r3,r5
  bhi 0x2c61bcb2
  ldr r0,[r4,#0x24]
  bl 0x2c62bea8
  movs r3,#0x0
  str r3,[r4,#0x24]
  pop {r4,r5,r6,pc}
