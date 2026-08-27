; FUN_2c4de6ca @ 0x2c4de6ca size=18
  push {r4,r5,lr}
  ldrd r5,r4,[r0,#0x18]
  orrs r4,r5
  ittt eq
  strh.eq r1,[r0,#0x1c]
  strh.eq r2,[r0,#0x1e]
  str.eq r3,[r0,#0x18]
  pop {r4,r5,pc}
