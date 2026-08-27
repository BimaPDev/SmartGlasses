/* FUN_2c11418a @ 0x2c11418a */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x2c1141e0) */
/* WARNING: Removing unreachable block (ram,0x2c11420a) */
/* WARNING: Removing unreachable block (ram,0x2c114210) */
/* WARNING: Removing unreachable block (ram,0x2c11421c) */
/* WARNING: Removing unreachable block (ram,0x2c11421e) */
/* WARNING: Removing unreachable block (ram,0x2c114220) */
/* WARNING: Removing unreachable block (ram,0x2c114232) */
/* WARNING: Removing unreachable block (ram,0x2c11423c) */
/* WARNING: Removing unreachable block (ram,0x2c11424e) */
/* WARNING: Removing unreachable block (ram,0x2c114264) */
/* WARNING: Removing unreachable block (ram,0x2c11426a) */
/* WARNING: Removing unreachable block (ram,0x2c11426c) */
/* WARNING: Removing unreachable block (ram,0x2c114272) */
/* WARNING: Removing unreachable block (ram,0x2c11429a) */
/* WARNING: Removing unreachable block (ram,0x2c11429e) */
/* WARNING: Removing unreachable block (ram,0x2c1142a0) */
/* WARNING: Removing unreachable block (ram,0x2c1142d2) */
/* WARNING: Removing unreachable block (ram,0x2c114312) */
/* WARNING: Removing unreachable block (ram,0x2c1142e4) */
/* WARNING: Removing unreachable block (ram,0x2c114456) */
/* WARNING: Removing unreachable block (ram,0x2c11445c) */
/* WARNING: Removing unreachable block (ram,0x2c1144a0) */
/* WARNING: Removing unreachable block (ram,0x2c1144f2) */
/* WARNING: Removing unreachable block (ram,0x2c1144fa) */
/* WARNING: Removing unreachable block (ram,0x2c114502) */
/* WARNING: Removing unreachable block (ram,0x2c114504) */
/* WARNING: Removing unreachable block (ram,0x2c11454a) */
/* WARNING: Removing unreachable block (ram,0x2c0ec656) */
/* WARNING: Removing unreachable block (ram,0x2c0ec6d2) */
/* WARNING: Removing unreachable block (ram,0x2c0ec6d6) */
/* WARNING: Removing unreachable block (ram,0x2c0ec4ba) */
/* WARNING: Removing unreachable block (ram,0x2c11455a) */
/* WARNING: Removing unreachable block (ram,0x2c11455c) */
/* WARNING: Removing unreachable block (ram,0x2c113846) */
/* WARNING: Removing unreachable block (ram,0x2c113956) */
/* WARNING: Removing unreachable block (ram,0x2c1134e0) */
/* WARNING: Removing unreachable block (ram,0x2c113558) */
/* WARNING: Removing unreachable block (ram,0x2c113562) */
/* WARNING: Removing unreachable block (ram,0x2c11357a) */
/* WARNING: Removing unreachable block (ram,0x2c1145ea) */
/* WARNING: Removing unreachable block (ram,0x2c114608) */
/* WARNING: Removing unreachable block (ram,0x2c11463c) */
/* WARNING: Removing unreachable block (ram,0x2c114050) */
/* WARNING: Removing unreachable block (ram,0x2c114070) */
/* WARNING: Removing unreachable block (ram,0x2c11409e) */
/* WARNING: Removing unreachable block (ram,0x2c1140d2) */
/* WARNING: Removing unreachable block (ram,0x2c11410a) */
/* WARNING: Removing unreachable block (ram,0x2c11414a) */
/* WARNING: Removing unreachable block (ram,0x2c114150) */
/* WARNING: Removing unreachable block (ram,0x2c11417e) */
/* WARNING: Removing unreachable block (ram,0x2c114184) */
/* WARNING: Removing unreachable block (ram,0x2c1140d6) */
/* WARNING: Removing unreachable block (ram,0x2c1140a4) */
/* WARNING: Removing unreachable block (ram,0x2c1140aa) */
/* WARNING: Removing unreachable block (ram,0x2c1140d8) */
/* WARNING: Removing unreachable block (ram,0x2c11460e) */
/* WARNING: Removing unreachable block (ram,0x2c1143b4) */
/* WARNING: Removing unreachable block (ram,0x2c1143d6) */
/* WARNING: Removing unreachable block (ram,0x2c1143b6) */
/* WARNING: Removing unreachable block (ram,0x2c1143ee) */
/* WARNING: Removing unreachable block (ram,0x2c1143f2) */
/* WARNING: Removing unreachable block (ram,0x2c1143f4) */
/* WARNING: Removing unreachable block (ram,0x2c1143c0) */
/* WARNING: Removing unreachable block (ram,0x2c1143d0) */
/* WARNING: Removing unreachable block (ram,0x2c1143fe) */
/* WARNING: Removing unreachable block (ram,0x2c1135c6) */
/* WARNING: Removing unreachable block (ram,0x2c0ec664) */

void FUN_2c11418a(undefined4 param_1,uint param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint unaff_r4;
  int unaff_r6;
  int unaff_r7;
  char in_NG;
  bool in_ZR;
  char in_OV;
  uint in_stack_000003e8;
  
  if (!in_ZR && in_NG == in_OV) {
    if ((unaff_r7 << 3) >> 0x1c == 0) goto LAB_2c1141ac;
    param_4 = unaff_r6 << 0x1f;
    in_stack_000003e8 = param_2 >> 1;
  }
  iVar1 = *(int *)(in_stack_000003e8 + 0x60);
  while( true ) {
    unaff_r4 = iVar1 << 1;
LAB_2c1141ac:
    puVar2 = (undefined4 *)(((int)param_2 >> 8) + unaff_r4);
    if (*(short *)(param_4 + 0x1e) != 0) break;
    *puVar2 = 0x2c1142d0;
    puVar2[1] = puVar2;
    puVar2[2] = param_4;
    iVar1 = unaff_r4 << 0x17;
    if (!SCARRY4((int)param_2 >> 8,unaff_r4)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_2 = (unaff_r4 & 0x1ff) >> 5;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

