/* FUN_2c564b2c @ 0x2c564b2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c564b2c(undefined4 param_1)

{
  uint uVar1;
  int **ppiVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piStack_294;
  int *piStack_290;
  undefined4 uStack_28c;
  undefined4 *puStack_288;
  undefined4 *puStack_284;
  undefined4 *puStack_280;
  int *piStack_27c;
  int *piStack_278;
  int *piStack_274;
  int *piStack_270;
  int *piStack_26c;
  int *piStack_268;
  undefined4 *puStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined1 uStack_258;
  undefined4 *puStack_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined4 *puStack_234;
  int *piStack_230;
  undefined4 uStack_22c;
  undefined2 uStack_228;
  undefined1 uStack_226;
  undefined4 *puStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined1 uStack_210;
  undefined1 uStack_20f;
  undefined4 *puStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined2 uStack_1f0;
  undefined1 uStack_1ee;
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
  undefined1 uStack_1b0;
  undefined1 uStack_1af;
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
  undefined1 *puStack_e4;
  int *piStack_e0;
  undefined1 uStack_dc;
  undefined1 uStack_db;
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
  
  puStack_234 = &uStack_22c;
  iStack_2c = *_LAB_2c564d60;
  puStack_264 = &uStack_25c;
  puStack_24c = &uStack_244;
  uStack_28c = 0;
  uStack_258 = 0;
  uStack_226 = 0;
  puStack_280 = (undefined4 *)0x0;
  uStack_260 = 4;
  uStack_25c = _LAB_2c564d64;
  uStack_248 = 0xd;
  piStack_230 = (int *)&DAT_00000006;
  uStack_244 = *_LAB_2c564d68;
  uStack_240 = _LAB_2c564d68[1];
  uStack_23c = _LAB_2c564d68[2];
  uStack_238 = (undefined1)_LAB_2c564d68[3];
  uStack_237 = 0;
  uStack_22c = *_LAB_2c564d70;
  piStack_294 = (int *)0x0;
  piStack_290 = (int *)0x0;
  puStack_288 = (undefined4 *)0x0;
  puStack_284 = (undefined4 *)0x0;
  uStack_228 = (undefined2)_LAB_2c564d70[1];
  if (*_LAB_2c564d6c == 0) {
    FUN_2c4723c4();
    *_LAB_2c565424 = 1;
  }
  puVar4 = (undefined4 *)FUN_2c47245c(0,0x18);
  piVar9 = piStack_230;
  puVar11 = puStack_234;
  puVar8 = puVar4 + 6;
  *puVar4 = puVar4 + 2;
  puStack_288 = puVar4;
  puStack_280 = puVar8;
  if (((undefined1 *)((int)puStack_234 + (int)piStack_230) != (undefined1 *)0x0) &&
     (puStack_234 == (undefined4 *)0x0)) goto LAB_2c56540e;
  piStack_270 = piStack_230;
  if (piStack_230 < (int *)0x10) {
    puVar5 = (undefined1 *)*puVar4;
    if (piStack_230 == (int *)0x1) {
      *puVar5 = *(undefined1 *)puStack_234;
      puVar5 = (undefined1 *)*puVar4;
    }
    else if (piStack_230 != (int *)0x0) goto LAB_2c56526e;
  }
  else {
    puVar5 = (undefined1 *)FUN_2c560bac(&piStack_270,0);
    *puVar4 = puVar5;
    puVar4[2] = piStack_270;
LAB_2c56526e:
    FUN_2c674668(puVar5,puVar11,piVar9);
    puVar5 = (undefined1 *)*puVar4;
  }
  puVar4[1] = piStack_270;
  puVar5[(int)piStack_270] = 0;
  puStack_1a0 = (undefined1 *)0x0;
  auStack_19c[0] = 0;
  puStack_284 = puVar8;
  puStack_1a4 = auStack_19c;
  FUN_2c54ffa8(&ppiStack_e8,&puStack_264,&puStack_24c,&puStack_288,&puStack_1a4);
  ppiVar2 = _LAB_2c564d7c;
  FUN_2c563244(&piStack_294,&ppiStack_e8);
  ppiStack_e8 = ppiVar2;
  if (puStack_a8 != auStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar9 = piStack_b0;
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
      piVar9 = piStack_b4;
    } while (piStack_b0 != piVar6);
  }
  if (piVar9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar9);
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
  puVar11 = puStack_284;
  if (puStack_288 != puStack_284) {
    puVar8 = puStack_288 + 2;
    puVar4 = puStack_288;
    do {
      if ((undefined4 *)puVar8[-2] != puVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar4 = puVar4 + 6;
      puVar8 = puVar8 + 6;
      puVar11 = puStack_288;
    } while (puStack_284 != puVar4);
  }
  if (puVar11 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar11);
  }
  if (puStack_234 != &uStack_22c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_24c != &uStack_244) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_264 != &uStack_25c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puStack_21c = &uStack_214;
  puStack_204 = &uStack_1fc;
  puStack_1ec = &uStack_1e4;
  uStack_20f = 0;
  uStack_218 = 5;
  uStack_1de = 0;
  uStack_200 = 0xe;
  piStack_274 = (int *)0x0;
  piStack_1e8 = (int *)&DAT_00000006;
  uStack_214 = *_LAB_2c564d74;
  uStack_210 = (undefined1)_LAB_2c564d74[1];
  uStack_1fc = *_LAB_2c564d78;
  uStack_1f8 = _LAB_2c564d78[1];
  uStack_1f4 = _LAB_2c564d78[2];
  uStack_1f0 = (undefined2)_LAB_2c564d78[3];
  uStack_1ee = 0;
  uStack_1e4 = *_LAB_2c564d70;
  piStack_27c = (int *)0x0;
  piStack_278 = (int *)0x0;
  uStack_1e0 = (undefined2)_LAB_2c564d70[1];
  if (*_LAB_2c564d6c == 0) {
    FUN_2c4723c4();
    *_LAB_2c565424 = 1;
  }
  piVar6 = (int *)FUN_2c47245c(0,0x18);
  piVar9 = piStack_1e8;
  puVar11 = puStack_1ec;
  piVar7 = piVar6 + 6;
  *piVar6 = (int)(piVar6 + 2);
  piStack_27c = piVar6;
  piStack_274 = piVar7;
  if (((undefined1 *)((int)puStack_1ec + (int)piStack_1e8) != (undefined1 *)0x0) &&
     (puStack_1ec == (undefined4 *)0x0)) goto LAB_2c56540e;
  piStack_270 = piStack_1e8;
  if (piStack_1e8 < (int *)0x10) {
    puVar5 = (undefined1 *)*piVar6;
    if (piStack_1e8 == (int *)0x1) {
      *puVar5 = *(undefined1 *)puStack_1ec;
      puVar5 = (undefined1 *)*piVar6;
    }
    else if (piStack_1e8 != (int *)0x0) goto LAB_2c56528e;
  }
  else {
    puVar5 = (undefined1 *)FUN_2c560bac(&piStack_270,0);
    *piVar6 = (int)puVar5;
    piVar6[2] = (int)piStack_270;
LAB_2c56528e:
    FUN_2c674668(puVar5,puVar11,piVar9);
    puVar5 = (undefined1 *)*piVar6;
  }
  piVar6[1] = (int)piStack_270;
  puVar5[(int)piStack_270] = 0;
  auStack_19c[0] = 0;
  puStack_1a0 = (undefined1 *)0x0;
  piStack_278 = piVar7;
  puStack_1a4 = auStack_19c;
  FUN_2c54ffa8(&ppiStack_e8,&puStack_21c,&puStack_204,&piStack_27c,&puStack_1a4);
  FUN_2c563244(&piStack_294,&ppiStack_e8);
  puVar11 = _LAB_2c565184;
  ppiStack_e8 = ppiVar2;
  if (puStack_a8 != auStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar9 = piStack_b0;
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
      piVar9 = piStack_b4;
    } while (piStack_b0 != piVar6);
  }
  if (piVar9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar9);
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
  piVar9 = piStack_278;
  if (piStack_27c != piStack_278) {
    piVar7 = piStack_27c + 2;
    piVar6 = piStack_27c;
    do {
      if ((int *)piVar7[-2] != piVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar6 = piVar6 + 6;
      piVar7 = piVar7 + 6;
      piVar9 = piStack_27c;
    } while (piStack_278 != piVar6);
  }
  if (piVar9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar9);
  }
  if (puStack_1ec != &uStack_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_204 != &uStack_1fc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (puStack_21c != &uStack_214) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar5 = (undefined1 *)*_LAB_2c565184;
  piVar9 = (int *)_LAB_2c565184[1];
  ppiStack_1d4 = apiStack_1cc;
  if ((puVar5 + (int)piVar9 != (undefined1 *)0x0) && (puVar5 == (undefined1 *)0x0))
  goto LAB_2c56540e;
  piStack_270 = piVar9;
  if (piVar9 < (int *)0x10) {
    if (piVar9 == (int *)0x1) {
      apiStack_1cc[0] = (int *)CONCAT31(apiStack_1cc[0]._1_3_,*puVar5);
    }
    else if (piVar9 != (int *)0x0) goto LAB_2c5653da;
  }
  else {
    ppiStack_1d4 = (int **)FUN_2c560bac(&piStack_270,0);
    apiStack_1cc[0] = piStack_270;
LAB_2c5653da:
    FUN_2c674668(ppiStack_1d4,puVar5,piVar9);
  }
  *(undefined1 *)((int)ppiStack_1d4 + (int)piStack_270) = 0;
  uStack_1af = 0;
  uStack_db = 0;
  piStack_1b8 = (int *)0x5;
  puStack_e4 = (undefined1 *)0x5;
  piStack_1b4 = (int *)*_LAB_2c565188;
  uStack_1b0 = (undefined1)_LAB_2c565188[1];
  piStack_1d0 = piStack_270;
  ppiStack_1bc = &piStack_1b4;
  ppiStack_e8 = &piStack_e0;
  piStack_e0 = piStack_1b4;
  uStack_dc = uStack_1b0;
  FUN_2c550910(&piStack_270,&piStack_294);
  FUN_2c550b6c(&puStack_1a4,&ppiStack_1d4,&ppiStack_1bc,&ppiStack_e8,1,&piStack_270);
  piVar7 = piStack_26c;
  piVar6 = piStack_26c;
  for (piVar9 = piStack_270; piVar9 != piVar7; piVar9 = piVar9 + 0x16) {
    (**(code **)(*piVar9 + 4))(piVar9);
    piVar6 = piStack_270;
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
  puVar5 = (undefined1 *)*puVar11;
  piVar9 = (int *)puVar11[1];
  if ((puVar5 + (int)piVar9 != (undefined1 *)0x0) &&
     (ppiStack_1bc = &piStack_1b4, puVar5 == (undefined1 *)0x0)) goto LAB_2c56540e;
  piStack_270 = piVar9;
  if (piVar9 < (int *)0x10) {
    if (piVar9 == (int *)0x1) {
      uVar1 = (uint)piStack_1b4 >> 8;
      piStack_1b4 = (int *)CONCAT31((int3)uVar1,*puVar5);
      ppiStack_1bc = &piStack_1b4;
    }
    else {
      ppiStack_1bc = &piStack_1b4;
      if (piVar9 != (int *)0x0) goto LAB_2c5653be;
    }
  }
  else {
    ppiStack_1bc = &piStack_1b4;
    ppiStack_1bc = (int **)FUN_2c560bac(&piStack_270,0);
    piStack_1b4 = piStack_270;
LAB_2c5653be:
    FUN_2c674668(ppiStack_1bc,puVar5,piVar9);
  }
  *(undefined1 *)((int)ppiStack_1bc + (int)piStack_270) = 0;
  piStack_1b8 = piStack_270;
  FUN_2c561d78(&ppiStack_e8,&puStack_1a4);
  piStack_268 = (int *)0x0;
  piStack_270 = (int *)0x0;
  piStack_26c = (int *)0x0;
  if (*_LAB_2c56518c == 0) {
    FUN_2c4723c4();
    *_LAB_2c565424 = 1;
  }
  piVar6 = (int *)FUN_2c47245c(0,0xbc);
  piVar9 = piStack_e0;
  puVar3 = puStack_e4;
  puVar5 = _LAB_2c565190;
  piVar10 = piVar6 + 0x2f;
  piVar7 = piVar6 + 3;
  *piVar6 = (int)_LAB_2c565190;
  piVar6[1] = (int)piVar7;
  piStack_270 = piVar6;
  piStack_268 = piVar10;
  if ((puStack_e4 + (int)piStack_e0 != (undefined1 *)0x0) && (puStack_e4 == (undefined1 *)0x0))
  goto LAB_2c56540e;
  piStack_27c = piStack_e0;
  if (piStack_e0 < (int *)0x10) {
    if (piStack_e0 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 3) = *puStack_e4;
    }
    else if (piStack_e0 != (int *)0x0) goto LAB_2c5652ea;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&piStack_27c,0);
    piVar6[1] = (int)piVar7;
    piVar6[3] = (int)piStack_27c;
LAB_2c5652ea:
    FUN_2c674668(piVar7,puVar3,piVar9);
    piVar7 = (int *)piVar6[1];
  }
  piVar6[2] = (int)piStack_27c;
  *(undefined1 *)((int)piVar7 + (int)piStack_27c) = 0;
  piVar9 = piVar6 + 9;
  piVar6[7] = (int)piVar9;
  if ((puStack_cc + (int)piStack_c8 != (undefined1 *)0x0) && (puStack_cc == (undefined1 *)0x0))
  goto LAB_2c56540e;
  piStack_27c = piStack_c8;
  if (piStack_c8 < (int *)0x10) {
    if (piStack_c8 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 9) = *puStack_cc;
    }
    else if (piStack_c8 != (int *)0x0) goto LAB_2c56533e;
  }
  else {
    piVar9 = (int *)FUN_2c560bac(&piStack_27c,0);
    piVar6[7] = (int)piVar9;
    piVar6[9] = (int)piStack_27c;
LAB_2c56533e:
    FUN_2c674668(piVar9,puStack_cc,piStack_c8);
    piVar9 = (int *)piVar6[7];
  }
  piVar6[8] = (int)piStack_27c;
  *(undefined1 *)((int)piVar9 + (int)piStack_27c) = 0;
  piVar9 = piVar6 + 0xf;
  piVar6[0xd] = (int)piVar9;
  if (((int)piStack_b4 + (int)piStack_b0 != 0) && (piStack_b4 == (int *)0x0)) goto LAB_2c56540e;
  piStack_27c = piStack_b0;
  if (piStack_b0 < (int *)0x10) {
    if (piStack_b0 == (int *)0x1) {
      *(char *)(piVar6 + 0xf) = (char)*piStack_b4;
    }
    else if (piStack_b0 != (int *)0x0) goto LAB_2c565306;
  }
  else {
    piVar9 = (int *)FUN_2c560bac(&piStack_27c,0);
    piVar6[0xd] = (int)piVar9;
    piVar6[0xf] = (int)piStack_27c;
LAB_2c565306:
    FUN_2c674668(piVar9,piStack_b4,piStack_b0);
    piVar9 = (int *)piVar6[0xd];
  }
  piVar6[0xe] = (int)piStack_27c;
  *(undefined1 *)((int)piVar9 + (int)piStack_27c) = 0;
  piVar9 = piVar6 + 0x15;
  piVar6[0x13] = (int)piVar9;
  if ((puStack_9c + (int)piStack_98 != (undefined1 *)0x0) && (puStack_9c == (undefined1 *)0x0))
  goto LAB_2c56540e;
  piStack_27c = piStack_98;
  if (piStack_98 < (int *)0x10) {
    if (piStack_98 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x15) = *puStack_9c;
    }
    else if (piStack_98 != (int *)0x0) goto LAB_2c565322;
  }
  else {
    piVar9 = (int *)FUN_2c560bac(&piStack_27c,0);
    piVar6[0x13] = (int)piVar9;
    piVar6[0x15] = (int)piStack_27c;
LAB_2c565322:
    FUN_2c674668(piVar9,puStack_9c,piStack_98);
    piVar9 = (int *)piVar6[0x13];
  }
  piVar6[0x14] = (int)piStack_27c;
  *(undefined1 *)((int)piVar9 + (int)piStack_27c) = 0;
  piVar9 = piVar6 + 0x1b;
  piVar6[0x19] = (int)piVar9;
  if ((puStack_84 + (int)piStack_80 != (undefined1 *)0x0) && (puStack_84 == (undefined1 *)0x0))
  goto LAB_2c56540e;
  piStack_27c = piStack_80;
  if (piStack_80 < (int *)0x10) {
    if (piStack_80 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x1b) = *puStack_84;
    }
    else if (piStack_80 != (int *)0x0) goto LAB_2c56535a;
  }
  else {
    piVar9 = (int *)FUN_2c560bac(&piStack_27c,0);
    piVar6[0x19] = (int)piVar9;
    piVar6[0x1b] = (int)piStack_27c;
LAB_2c56535a:
    FUN_2c674668(piVar9,puStack_84,piStack_80);
    piVar9 = (int *)piVar6[0x19];
  }
  piVar6[0x1a] = (int)piStack_27c;
  *(undefined1 *)((int)piVar9 + (int)piStack_27c) = 0;
  piVar9 = piVar6 + 0x21;
  piVar6[0x1f] = (int)piVar9;
  if ((puStack_6c + (int)piStack_68 != (undefined1 *)0x0) && (puStack_6c == (undefined1 *)0x0))
  goto LAB_2c56540e;
  piStack_27c = piStack_68;
  if (piStack_68 < (int *)0x10) {
    if (piStack_68 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x21) = *puStack_6c;
    }
    else if (piStack_68 != (int *)0x0) goto LAB_2c56539a;
  }
  else {
    piVar9 = (int *)FUN_2c560bac(&piStack_27c,0);
    piVar6[0x1f] = (int)piVar9;
    piVar6[0x21] = (int)piStack_27c;
LAB_2c56539a:
    FUN_2c674668(piVar9,puStack_6c,piStack_68);
    piVar9 = (int *)piVar6[0x1f];
  }
  piVar6[0x20] = (int)piStack_27c;
  *(undefined1 *)((int)piVar9 + (int)piStack_27c) = 0;
  piVar9 = piVar6 + 0x27;
  piVar6[0x25] = (int)piVar9;
  if ((puStack_54 + (int)piStack_50 != (undefined1 *)0x0) && (puStack_54 == (undefined1 *)0x0)) {
LAB_2c56540e:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(_DAT_2c565428);
  }
  piStack_27c = piStack_50;
  if (piStack_50 < (int *)0x10) {
    if (piStack_50 == (int *)0x1) {
      *(undefined1 *)(piVar6 + 0x27) = *puStack_54;
      goto LAB_2c565118;
    }
    if (piStack_50 == (int *)0x0) goto LAB_2c565118;
  }
  else {
    piVar9 = (int *)FUN_2c560bac(&piStack_27c,0);
    piVar6[0x25] = (int)piVar9;
    piVar6[0x27] = (int)piStack_27c;
  }
  FUN_2c674668(piVar9,puStack_54,piStack_50);
  piVar9 = (int *)piVar6[0x25];
LAB_2c565118:
  piVar6[0x26] = (int)piStack_27c;
  *(undefined1 *)((int)piVar9 + (int)piStack_27c) = 0;
  piVar6[0x2b] = iStack_3c;
  FUN_2c550910(piVar6 + 0x2c,auStack_38);
  piStack_26c = piVar10;
  FUN_2c550314(param_1,&ppiStack_1bc,&piStack_270);
  piVar7 = piStack_26c;
  piVar6 = piStack_26c;
  for (piVar9 = piStack_270; piVar9 != piVar7; piVar9 = piVar9 + 0x2f) {
    (**(code **)(*piVar9 + 4))(piVar9);
    piVar6 = piStack_270;
  }
  if (piVar6 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar6);
  }
  (*(code *)ppiStack_e8[1])(&ppiStack_e8);
  piVar9 = piStack_290;
  piVar6 = piStack_f4;
  piVar7 = piStack_f0;
  if (ppiStack_1bc != &piStack_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  for (; puStack_1a4 = puVar5, piStack_290 = piVar9, piVar6 != piStack_f0; piVar6 = piVar6 + 0x16) {
    (**(code **)(*piVar6 + 4))(piVar6);
    puVar5 = puStack_1a4;
    piVar9 = piStack_290;
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
    piVar6 = piVar9;
    piVar7 = piStack_294;
    if (puStack_1a0 != auStack_198) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    for (; piVar7 != piVar9; piVar7 = piVar7 + 0x16) {
      (**(code **)(*piVar7 + 4))(piVar7);
      piVar6 = piStack_294;
    }
    if (piVar6 == (int *)0x0) {
      if (*_LAB_2c565420 != iStack_2c) {
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

