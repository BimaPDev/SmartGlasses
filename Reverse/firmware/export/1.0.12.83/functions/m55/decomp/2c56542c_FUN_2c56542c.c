/* FUN_2c56542c @ 0x2c56542c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c56542c(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piStack_240;
  int *piStack_23c;
  undefined4 uStack_238;
  int *piStack_234;
  int *piStack_230;
  int *piStack_22c;
  int *piStack_228;
  int *piStack_224;
  int *piStack_220;
  undefined4 *puStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined2 uStack_20c;
  undefined1 uStack_20a;
  int **ppiStack_204;
  int *piStack_200;
  int *apiStack_1fc [4];
  undefined4 *puStack_1ec;
  int *piStack_1e8;
  undefined4 uStack_1e4;
  undefined2 uStack_1e0;
  undefined1 uStack_1de;
  int **ppiStack_1d4;
  int *piStack_1d0;
  int *apiStack_1cc [4];
  int **ppiStack_1bc;
  int *piStack_1b8;
  int *piStack_1b4;
  undefined2 uStack_1b0;
  undefined1 uStack_1ae;
  undefined1 *puStack_1a4;
  undefined1 *puStack_1a0;
  undefined1 auStack_19c [4];
  undefined1 auStack_198 [16];
  undefined1 *puStack_188;
  undefined1 auStack_180 [16];
  undefined1 *puStack_170;
  undefined1 auStack_168 [16];
  undefined1 *puStack_158;
  undefined1 auStack_150 [16];
  undefined1 *puStack_140;
  undefined1 auStack_138 [16];
  undefined1 *puStack_128;
  undefined1 auStack_120 [16];
  undefined1 *puStack_110;
  undefined1 auStack_108 [20];
  int *piStack_f4;
  int *piStack_f0;
  int **ppiStack_e8;
  undefined2 *puStack_e4;
  int *piStack_e0;
  undefined2 uStack_dc;
  undefined1 uStack_da;
  undefined1 *puStack_cc;
  int *piStack_c8;
  undefined1 auStack_c4 [16];
  int *piStack_b4;
  int *piStack_b0;
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [4];
  undefined1 *puStack_9c;
  int *piStack_98;
  undefined1 *puStack_84;
  int *piStack_80;
  undefined1 *puStack_6c;
  int *piStack_68;
  undefined1 *puStack_54;
  int *piStack_50;
  int iStack_3c;
  undefined1 auStack_38 [12];
  int iStack_2c;
  
  iStack_2c = *_LAB_2c56571c;
  uStack_218 = 10;
  ppiStack_204 = apiStack_1fc;
  puStack_21c = &uStack_214;
  piStack_228 = (int *)&MemManage;
  uStack_238 = 0;
  uStack_214 = *_LAB_2c565720;
  uStack_210 = _LAB_2c565720[1];
  uStack_20c = (undefined2)_LAB_2c565720[2];
  uStack_20a = 0;
  piStack_240 = (int *)0x0;
  piStack_23c = (int *)0x0;
  ppiStack_204 = (int **)FUN_2c560bac(&piStack_228,0);
  puVar2 = _LAB_2c565734;
  apiStack_1fc[0] = piStack_228;
  piVar5 = (int *)_LAB_2c565730[1];
  piVar6 = (int *)_LAB_2c565730[2];
  piVar7 = (int *)_LAB_2c565730[3];
  *ppiStack_204 = (int *)*_LAB_2c565730;
  ppiStack_204[1] = piVar5;
  ppiStack_204[2] = piVar6;
  ppiStack_204[3] = piVar7;
  piStack_200 = piStack_228;
  *(undefined1 *)((int)ppiStack_204 + (int)piStack_228) = 0;
  uStack_1de = 0;
  piStack_22c = (int *)0x0;
  uStack_1e4 = *puVar2;
  piStack_1e8 = (int *)&DAT_00000006;
  uStack_1e0 = (undefined2)puVar2[1];
  piStack_234 = (int *)0x0;
  piStack_230 = (int *)0x0;
  puStack_1ec = &uStack_1e4;
  if (*DAT_2c565724 == 0) {
    FUN_2c4723c4();
    *DAT_2c565ba0 = 1;
  }
  piVar6 = (int *)FUN_2c47245c(0,0x18);
  piVar5 = piStack_1e8;
  puVar2 = puStack_1ec;
  piVar7 = piVar6 + 6;
  *piVar6 = (int)(piVar6 + 2);
  piStack_234 = piVar6;
  piStack_22c = piVar7;
  if (((undefined1 *)((int)puStack_1ec + (int)piStack_1e8) != (undefined1 *)0x0) &&
     (puStack_1ec == (undefined4 *)0x0)) goto LAB_2c565b8a;
  piStack_228 = piStack_1e8;
  if (piStack_1e8 < (int *)0x10) {
    puVar4 = (undefined1 *)*piVar6;
    if (piStack_1e8 == (int *)0x1) {
      *puVar4 = *(undefined1 *)puStack_1ec;
      puVar4 = (undefined1 *)*piVar6;
    }
    else if (piStack_1e8 != (int *)0x0) goto LAB_2c565a0a;
  }
  else {
    puVar4 = (undefined1 *)FUN_2c560bac(&piStack_228,0);
    *piVar6 = (int)puVar4;
    piVar6[2] = (int)piStack_228;
LAB_2c565a0a:
    FUN_2c674668(puVar4,puVar2,piVar5);
    puVar4 = (undefined1 *)*piVar6;
  }
  piVar6[1] = (int)piStack_228;
  puVar4[(int)piStack_228] = 0;
  puStack_1a0 = (undefined1 *)0x0;
  auStack_19c[0] = 0;
  piStack_230 = piVar7;
  puStack_1a4 = auStack_19c;
  FUN_2c54ffa8(&ppiStack_e8,&puStack_21c,&ppiStack_204,&piStack_234,&puStack_1a4);
  FUN_2c563244(&piStack_240,&ppiStack_e8);
  puVar2 = _LAB_2c565738;
  ppiStack_e8 = _LAB_2c565728;
  if (puStack_a8 != auStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar5 = piStack_b0;
  if (piStack_b4 != piStack_b0) {
    piVar7 = piStack_b4 + 2;
    piVar6 = piStack_b4;
    do {
      if ((int *)piVar7[-2] != piVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar6 = piVar6 + 6;
      piVar7 = piVar7 + 6;
      piVar5 = piStack_b4;
    } while (piStack_b0 != piVar6);
  }
  if (piVar5 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar5);
  }
  if (puStack_cc != auStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_e4 != &uStack_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_1a4 != auStack_19c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar5 = piStack_230;
  if (piStack_234 != piStack_230) {
    piVar7 = piStack_234 + 2;
    piVar6 = piStack_234;
    do {
      if ((int *)piVar7[-2] != piVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar6 = piVar6 + 6;
      piVar7 = piVar7 + 6;
      piVar5 = piStack_234;
    } while (piStack_230 != piVar6);
  }
  if (piVar5 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar5);
  }
  if (puStack_1ec != &uStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (ppiStack_204 != apiStack_1fc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_21c != &uStack_214) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar4 = (undefined1 *)*_LAB_2c565738;
  piVar5 = (int *)_LAB_2c565738[1];
  ppiStack_1d4 = apiStack_1cc;
  if ((puVar4 + (int)piVar5 != (undefined1 *)0x0) && (puVar4 == (undefined1 *)0x0))
  goto LAB_2c565b8a;
  piStack_228 = piVar5;
  if (piVar5 < (int *)0x10) {
    if (piVar5 == (int *)0x1) {
      apiStack_1cc[0] = (int *)CONCAT31(apiStack_1cc[0]._1_3_,*puVar4);
    }
    else if (piVar5 != (int *)0x0) goto LAB_2c565b64;
  }
  else {
    ppiStack_1d4 = (int **)FUN_2c560bac(&piStack_228,0);
    apiStack_1cc[0] = piStack_228;
LAB_2c565b64:
    FUN_2c674668(ppiStack_1d4,puVar4,piVar5);
  }
  *(undefined1 *)((int)ppiStack_1d4 + (int)piStack_228) = 0;
  uStack_1ae = 0;
  uStack_da = 0;
  piStack_1b8 = (int *)&DAT_00000006;
  puStack_e4 = (undefined2 *)&DAT_00000006;
  ppiStack_e8 = &piStack_e0;
  piStack_1b4 = (int *)*DAT_2c56572c;
  uStack_1b0 = (undefined2)DAT_2c56572c[1];
  piStack_1d0 = piStack_228;
  ppiStack_1bc = &piStack_1b4;
  piStack_e0 = piStack_1b4;
  uStack_dc = uStack_1b0;
  FUN_2c550910(&piStack_228,&piStack_240);
  FUN_2c550b6c(&puStack_1a4,&ppiStack_1d4,&ppiStack_1bc,&ppiStack_e8,1,&piStack_228);
  piVar7 = piStack_224;
  piVar6 = piStack_224;
  for (piVar5 = piStack_228; piVar5 != piVar7; piVar5 = piVar5 + 0x16) {
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar6 = piStack_228;
  }
  if (piVar6 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar6);
  }
  if (ppiStack_e8 != &piStack_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (ppiStack_1bc != &piStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (ppiStack_1d4 != apiStack_1cc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar4 = (undefined1 *)*puVar2;
  piVar5 = (int *)puVar2[1];
  if ((puVar4 + (int)piVar5 != (undefined1 *)0x0) &&
     (ppiStack_1bc = &piStack_1b4, puVar4 == (undefined1 *)0x0)) goto LAB_2c565b8a;
  piStack_228 = piVar5;
  if (piVar5 < (int *)0x10) {
    if (piVar5 == (int *)0x1) {
      uVar1 = (uint)piStack_1b4 >> 8;
      piStack_1b4 = (int *)CONCAT31((int3)uVar1,*puVar4);
      ppiStack_1bc = &piStack_1b4;
    }
    else {
      ppiStack_1bc = &piStack_1b4;
      if (piVar5 != (int *)0x0) goto LAB_2c565b48;
    }
  }
  else {
    ppiStack_1bc = &piStack_1b4;
    ppiStack_1bc = (int **)FUN_2c560bac(&piStack_228,0);
    piStack_1b4 = piStack_228;
LAB_2c565b48:
    FUN_2c674668(ppiStack_1bc,puVar4,piVar5);
  }
  *(undefined1 *)((int)ppiStack_1bc + (int)piStack_228) = 0;
  piStack_1b8 = piStack_228;
  FUN_2c561d78(&ppiStack_e8,&puStack_1a4);
  piStack_220 = (int *)0x0;
  piStack_228 = (int *)0x0;
  piStack_224 = (int *)0x0;
  if (*DAT_2c565724 == 0) {
    FUN_2c4723c4();
    *DAT_2c565ba0 = 1;
  }
  piVar6 = (int *)FUN_2c47245c(0,0xbc);
  piVar5 = piStack_e0;
  puVar3 = puStack_e4;
  puVar4 = DAT_2c565ba8;
  piVar8 = piVar6 + 0x2f;
  piVar7 = piVar6 + 3;
  *piVar6 = (int)DAT_2c565ba8;
  piVar6[1] = (int)piVar7;
  piStack_228 = piVar6;
  piStack_220 = piVar8;
  if (((undefined1 *)((int)puStack_e4 + (int)piStack_e0) != (undefined1 *)0x0) &&
     (puStack_e4 == (undefined2 *)0x0)) goto LAB_2c565b8a;
  piStack_234 = piStack_e0;
  if (piStack_e0 < (int *)0x10) {
    if (piStack_e0 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 3) = *(undefined1 *)puStack_e4;
    }
    else if (piStack_e0 != (int *)0x0) goto LAB_2c565a6a;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&piStack_234,0);
    piVar6[1] = (int)piVar7;
    piVar6[3] = (int)piStack_234;
LAB_2c565a6a:
    FUN_2c674668(piVar7,puVar3,piVar5);
    piVar7 = (int *)piVar6[1];
  }
  piVar6[2] = (int)piStack_234;
  *(undefined1 *)((int)piVar7 + (int)piStack_234) = 0;
  piVar5 = piVar6 + 9;
  piVar6[7] = (int)piVar5;
  if ((puStack_cc + (int)piStack_c8 != (undefined1 *)0x0) && (puStack_cc == (undefined1 *)0x0))
  goto LAB_2c565b8a;
  piStack_234 = piStack_c8;
  if (piStack_c8 < (int *)0x10) {
    if (piStack_c8 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 9) = *puStack_cc;
    }
    else if (piStack_c8 != (int *)0x0) goto LAB_2c565a88;
  }
  else {
    piVar5 = (int *)FUN_2c560bac(&piStack_234,0);
    piVar6[7] = (int)piVar5;
    piVar6[9] = (int)piStack_234;
LAB_2c565a88:
    FUN_2c674668(piVar5,puStack_cc,piStack_c8);
    piVar5 = (int *)piVar6[7];
  }
  piVar6[8] = (int)piStack_234;
  *(undefined1 *)((int)piVar5 + (int)piStack_234) = 0;
  piVar5 = piVar6 + 0xf;
  piVar6[0xd] = (int)piVar5;
  if (((undefined1 *)((int)piStack_b4 + (int)piStack_b0) != (undefined1 *)0x0) &&
     (piStack_b4 == (int *)0x0)) goto LAB_2c565b8a;
  piStack_234 = piStack_b0;
  if (piStack_b0 < (int *)0x10) {
    if (piStack_b0 == (int *)0x1) {
      *(char *)(piVar6 + 0xf) = (char)*piStack_b4;
    }
    else if (piStack_b0 != (int *)0x0) goto LAB_2c565ae2;
  }
  else {
    piVar5 = (int *)FUN_2c560bac(&piStack_234,0);
    piVar6[0xd] = (int)piVar5;
    piVar6[0xf] = (int)piStack_234;
LAB_2c565ae2:
    FUN_2c674668(piVar5,piStack_b4,piStack_b0);
    piVar5 = (int *)piVar6[0xd];
  }
  piVar6[0xe] = (int)piStack_234;
  *(undefined1 *)((int)piVar5 + (int)piStack_234) = 0;
  piVar5 = piVar6 + 0x15;
  piVar6[0x13] = (int)piVar5;
  if ((puStack_9c + (int)piStack_98 != (undefined1 *)0x0) && (puStack_9c == (undefined1 *)0x0))
  goto LAB_2c565b8a;
  piStack_234 = piStack_98;
  if (piStack_98 < (int *)0x10) {
    if (piStack_98 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x15) = *puStack_9c;
    }
    else if (piStack_98 != (int *)0x0) goto LAB_2c565aa6;
  }
  else {
    piVar5 = (int *)FUN_2c560bac(&piStack_234,0);
    piVar6[0x13] = (int)piVar5;
    piVar6[0x15] = (int)piStack_234;
LAB_2c565aa6:
    FUN_2c674668(piVar5,puStack_9c,piStack_98);
    piVar5 = (int *)piVar6[0x13];
  }
  piVar6[0x14] = (int)piStack_234;
  *(undefined1 *)((int)piVar5 + (int)piStack_234) = 0;
  piVar5 = piVar6 + 0x1b;
  piVar6[0x19] = (int)piVar5;
  if ((puStack_84 + (int)piStack_80 != (undefined1 *)0x0) && (puStack_84 == (undefined1 *)0x0))
  goto LAB_2c565b8a;
  piStack_234 = piStack_80;
  if (piStack_80 < (int *)0x10) {
    if (piStack_80 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x1b) = *puStack_84;
    }
    else if (piStack_80 != (int *)0x0) goto LAB_2c565ac4;
  }
  else {
    piVar5 = (int *)FUN_2c560bac(&piStack_234,0);
    piVar6[0x19] = (int)piVar5;
    piVar6[0x1b] = (int)piStack_234;
LAB_2c565ac4:
    FUN_2c674668(piVar5,puStack_84,piStack_80);
    piVar5 = (int *)piVar6[0x19];
  }
  piVar6[0x1a] = (int)piStack_234;
  *(undefined1 *)((int)piVar5 + (int)piStack_234) = 0;
  piVar5 = piVar6 + 0x21;
  piVar6[0x1f] = (int)piVar5;
  if ((puStack_6c + (int)piStack_68 != (undefined1 *)0x0) && (puStack_6c == (undefined1 *)0x0))
  goto LAB_2c565b8a;
  piStack_234 = piStack_68;
  if (piStack_68 < (int *)0x10) {
    if (piStack_68 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x21) = *puStack_6c;
    }
    else if (piStack_68 != (int *)0x0) goto LAB_2c565b02;
  }
  else {
    piVar5 = (int *)FUN_2c560bac(&piStack_234,0);
    piVar6[0x1f] = (int)piVar5;
    piVar6[0x21] = (int)piStack_234;
LAB_2c565b02:
    FUN_2c674668(piVar5,puStack_6c,piStack_68);
    piVar5 = (int *)piVar6[0x1f];
  }
  piVar6[0x20] = (int)piStack_234;
  *(undefined1 *)((int)piVar5 + (int)piStack_234) = 0;
  piVar5 = piVar6 + 0x27;
  piVar6[0x25] = (int)piVar5;
  if ((puStack_54 + (int)piStack_50 != (undefined1 *)0x0) && (puStack_54 == (undefined1 *)0x0)) {
LAB_2c565b8a:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c565ba4);
  }
  piStack_234 = piStack_50;
  if (piStack_50 < (int *)0x10) {
    if (piStack_50 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x27) = *puStack_54;
      goto LAB_2c5658c2;
    }
    if (piStack_50 == (int *)0x0) goto LAB_2c5658c2;
  }
  else {
    piVar5 = (int *)FUN_2c560bac(&piStack_234,0);
    piVar6[0x25] = (int)piVar5;
    piVar6[0x27] = (int)piStack_234;
  }
  FUN_2c674668(piVar5,puStack_54,piStack_50);
  piVar5 = (int *)piVar6[0x25];
LAB_2c5658c2:
  piVar6[0x26] = (int)piStack_234;
  *(undefined1 *)((int)piVar5 + (int)piStack_234) = 0;
  piVar6[0x2b] = iStack_3c;
  FUN_2c550910(piVar6 + 0x2c,auStack_38);
  piStack_224 = piVar8;
  FUN_2c550314(param_1,&ppiStack_1bc,&piStack_228);
  piVar7 = piStack_224;
  piVar6 = piStack_224;
  for (piVar5 = piStack_228; piVar5 != piVar7; piVar5 = piVar5 + 0x2f) {
    (**(code **)(*piVar5 + 4))(piVar5);
    piVar6 = piStack_228;
  }
  if (piVar6 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar6);
  }
  (*(code *)ppiStack_e8[1])(&ppiStack_e8);
  piVar5 = piStack_23c;
  piVar6 = piStack_f4;
  piVar7 = piStack_f0;
  if (ppiStack_1bc != &piStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  for (; puStack_1a4 = puVar4, piStack_23c = piVar5, piVar6 != piStack_f0; piVar6 = piVar6 + 0x16) {
    (**(code **)(*piVar6 + 4))(piVar6);
    puVar4 = puStack_1a4;
    piVar5 = piStack_23c;
    piVar7 = piStack_f4;
  }
  if (piVar7 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar7);
  }
  if (puStack_110 != auStack_108) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_128 != auStack_120) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_140 != auStack_138) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_158 == auStack_150) {
    if (puStack_170 != auStack_168) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (puStack_188 != auStack_180) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    piVar6 = piVar5;
    piVar7 = piStack_240;
    if (puStack_1a0 != auStack_198) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    for (; piVar7 != piVar5; piVar7 = piVar7 + 0x16) {
      (**(code **)(*piVar7 + 4))(piVar7);
      piVar6 = piStack_240;
    }
    if (piVar6 == (int *)0x0) {
      if (*DAT_2c565b9c != iStack_2c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar6);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

