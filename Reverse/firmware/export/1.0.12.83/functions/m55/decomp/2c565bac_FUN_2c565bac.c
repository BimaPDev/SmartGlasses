/* FUN_2c565bac @ 0x2c565bac */

undefined4 FUN_2c565bac(undefined4 param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int **ppiVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  int *local_2e8;
  int *piStack_2e4;
  undefined4 local_2e0;
  undefined4 *local_2dc;
  undefined4 *local_2d8;
  undefined4 *local_2d4;
  undefined4 *local_2d0;
  undefined4 *local_2cc;
  undefined4 *local_2c8;
  int *local_2c4;
  int *local_2c0;
  int *local_2bc;
  int *local_2b8;
  int *local_2b4;
  int *local_2b0;
  undefined4 *local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined1 local_2a0;
  undefined1 local_29f;
  int **local_294;
  int *local_290;
  int *local_28c [4];
  undefined4 *local_27c;
  int *local_278;
  undefined4 local_274;
  undefined2 local_270;
  undefined1 local_26e;
  undefined4 *local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258;
  undefined1 local_257;
  int **local_24c;
  int *local_248;
  int *local_244 [4];
  undefined4 *local_234;
  int *local_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined1 local_220;
  undefined4 *local_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined1 local_210;
  int **local_204;
  int *local_200;
  int *local_1fc [4];
  undefined4 *local_1ec;
  int *local_1e8;
  undefined4 local_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8;
  int **local_1d4;
  int *local_1d0;
  int *local_1cc [4];
  int **local_1bc;
  int *local_1b8;
  int *local_1b4;
  undefined4 uStack_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined1 *local_1a4;
  undefined1 *local_1a0;
  undefined1 local_19c [4];
  undefined1 auStack_198 [16];
  undefined1 *local_188;
  undefined1 auStack_180 [16];
  undefined1 *local_170;
  undefined1 auStack_168 [16];
  undefined1 *local_158;
  undefined1 auStack_150 [16];
  undefined1 *local_140;
  undefined1 auStack_138 [16];
  undefined1 *local_128;
  undefined1 auStack_120 [16];
  undefined1 *local_110;
  undefined1 auStack_108 [20];
  int *local_f4;
  int *local_f0;
  int **local_e8;
  undefined4 *local_e4;
  int *local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 *local_cc;
  int *piStack_c8;
  undefined1 auStack_c4 [16];
  int *local_b4;
  int *piStack_b0;
  undefined1 *local_a8;
  undefined1 auStack_a0 [4];
  undefined1 *local_9c;
  int *piStack_98;
  undefined1 *local_84;
  int *piStack_80;
  undefined1 *local_6c;
  int *piStack_68;
  undefined1 *local_54;
  int *piStack_50;
  int local_3c;
  undefined1 auStack_38 [12];
  int local_2c;
  
  puVar5 = DAT_2c565e38;
  puVar12 = DAT_2c565e34;
  local_2c = *DAT_2c565e30;
  local_2ac = &local_2a4;
  local_2e0 = 0;
  local_2a8 = 5;
  local_294 = local_28c;
  local_29f = 0;
  local_2b8 = (int *)&MemManage;
  local_2a4 = *DAT_2c565e3c;
  local_2e8 = (int *)0x0;
  piStack_2e4 = (int *)0x0;
  local_2a0 = (undefined1)DAT_2c565e3c[1];
  local_294 = (int **)FUN_2c560bac(&local_2b8,0);
  local_28c[0] = local_2b8;
  piVar7 = (int *)puVar12[1];
  piVar8 = (int *)puVar12[2];
  piVar9 = (int *)puVar12[3];
  *local_294 = (int *)*puVar12;
  local_294[1] = piVar7;
  local_294[2] = piVar8;
  local_294[3] = piVar9;
  local_290 = local_2b8;
  *(undefined1 *)((int)local_294 + (int)local_2b8) = 0;
  local_27c = &local_274;
  local_278 = (int *)0x6;
  local_26e = 0;
  local_2d4 = (undefined4 *)0x0;
  local_274 = *puVar5;
  local_2dc = (undefined4 *)0x0;
  local_2d8 = (undefined4 *)0x0;
  local_270 = (undefined2)puVar5[1];
  if (*DAT_2c565e40 == 0) {
    FUN_2c4723c4();
    *DAT_2c5666fc = 1;
  }
  puVar5 = (undefined4 *)FUN_2c47245c(0,0x18);
  piVar7 = local_278;
  puVar12 = local_27c;
  puVar10 = puVar5 + 6;
  *puVar5 = puVar5 + 2;
  local_2dc = puVar5;
  local_2d4 = puVar10;
  if (((undefined1 *)((int)local_27c + (int)local_278) != (undefined1 *)0x0) &&
     (local_27c == (undefined4 *)0x0)) goto LAB_2c5666e6;
  local_2b8 = local_278;
  if (local_278 < (int *)0x10) {
    puVar6 = (undefined1 *)*puVar5;
    if (local_278 == (int *)0x1) {
      *puVar6 = *(undefined1 *)local_27c;
      puVar6 = (undefined1 *)*puVar5;
    }
    else if (local_278 != (int *)0x0) goto LAB_2c566518;
  }
  else {
    puVar6 = (undefined1 *)FUN_2c560bac(&local_2b8,0);
    *puVar5 = puVar6;
    puVar5[2] = local_2b8;
LAB_2c566518:
    FUN_2c674668(puVar6,puVar12,piVar7);
    puVar6 = (undefined1 *)*puVar5;
  }
  puVar5[1] = local_2b8;
  puVar6[(int)local_2b8] = 0;
  local_1a0 = (undefined1 *)0x0;
  local_19c[0] = 0;
  local_2d8 = puVar10;
  local_1a4 = local_19c;
  FUN_2c54ffa8(&local_e8,&local_2ac,&local_294,&local_2dc,&local_1a4);
  ppiVar4 = DAT_2c565e48;
  FUN_2c563244(&local_2e8,&local_e8);
  local_e8 = ppiVar4;
  if (local_a8 != auStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar7 = piStack_b0;
  if (local_b4 != piStack_b0) {
    piVar9 = local_b4 + 2;
    piVar8 = local_b4;
    do {
      if ((int *)piVar9[-2] != piVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar8 = piVar8 + 6;
      piVar9 = piVar9 + 6;
      piVar7 = local_b4;
    } while (piStack_b0 != piVar8);
  }
  if (piVar7 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar7);
  }
  if (local_cc != auStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_e4 != &local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_1a4 != local_19c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar12 = local_2d8;
  if (local_2dc != local_2d8) {
    puVar10 = local_2dc + 2;
    puVar5 = local_2dc;
    do {
      if ((undefined4 *)puVar10[-2] != puVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar5 = puVar5 + 6;
      puVar10 = puVar10 + 6;
      puVar12 = local_2dc;
    } while (local_2d8 != puVar5);
  }
  if (puVar12 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar12);
  }
  if (local_27c != &local_274) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_294 != local_28c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_2ac != &local_2a4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  local_257 = 0;
  local_25c = *DAT_2c565e3c;
  local_264 = &local_25c;
  local_258 = (undefined1)DAT_2c565e3c[1];
  local_260 = 5;
  local_24c = local_244;
  local_2b8 = (int *)0x16;
  local_24c = (int **)FUN_2c560bac(&local_2b8,0);
  puVar12 = DAT_2c565e4c;
  local_244[0] = local_2b8;
  piVar8 = (int *)DAT_2c565e4c[1];
  piVar9 = (int *)DAT_2c565e4c[2];
  piVar7 = (int *)DAT_2c565e4c[3];
  puVar5 = DAT_2c565e4c + 4;
  *local_24c = (int *)*DAT_2c565e4c;
  local_24c[3] = piVar7;
  piVar7 = (int *)*puVar5;
  uVar2 = *(undefined2 *)(puVar12 + 5);
  local_24c[1] = piVar8;
  local_24c[2] = piVar9;
  local_24c[4] = piVar7;
  *(undefined2 *)(local_24c + 5) = uVar2;
  local_248 = local_2b8;
  *(undefined1 *)((int)local_24c + (int)local_2b8) = 0;
  local_234 = &local_22c;
  local_220 = 0;
  local_2c8 = (undefined4 *)0x0;
  local_230 = (int *)0xc;
  local_22c = *DAT_2c565e44;
  uStack_228 = DAT_2c565e44[1];
  uStack_224 = DAT_2c565e44[2];
  local_2d0 = (undefined4 *)0x0;
  local_2cc = (undefined4 *)0x0;
  if (*DAT_2c565e40 == 0) {
    FUN_2c4723c4();
    *DAT_2c5666fc = 1;
  }
  puVar5 = (undefined4 *)FUN_2c47245c(0,0x18);
  piVar7 = local_230;
  puVar12 = local_234;
  puVar10 = puVar5 + 6;
  *puVar5 = puVar5 + 2;
  local_2d0 = puVar5;
  local_2c8 = puVar10;
  if (((undefined1 *)((int)local_234 + (int)local_230) != (undefined1 *)0x0) &&
     (local_234 == (undefined4 *)0x0)) goto LAB_2c5666e6;
  local_2b8 = local_230;
  if (local_230 < (int *)0x10) {
    puVar6 = (undefined1 *)*puVar5;
    if (local_230 == (int *)0x1) {
      *puVar6 = *(undefined1 *)local_234;
      puVar6 = (undefined1 *)*puVar5;
    }
    else if (local_230 != (int *)0x0) goto LAB_2c56653a;
  }
  else {
    puVar6 = (undefined1 *)FUN_2c560bac(&local_2b8,0);
    *puVar5 = puVar6;
    puVar5[2] = local_2b8;
LAB_2c56653a:
    FUN_2c674668(puVar6,puVar12,piVar7);
    puVar6 = (undefined1 *)*puVar5;
  }
  puVar5[1] = local_2b8;
  puVar6[(int)local_2b8] = 0;
  local_19c[0] = 0;
  local_1a0 = (undefined1 *)0x0;
  local_2cc = puVar10;
  local_1a4 = local_19c;
  FUN_2c54ffa8(&local_e8,&local_264,&local_24c,&local_2d0,&local_1a4);
  FUN_2c563244(&local_2e8,&local_e8);
  local_e8 = ppiVar4;
  if (local_a8 != auStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar7 = piStack_b0;
  if (local_b4 != piStack_b0) {
    piVar9 = local_b4 + 2;
    piVar8 = local_b4;
    do {
      if ((int *)piVar9[-2] != piVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar8 = piVar8 + 6;
      piVar9 = piVar9 + 6;
      piVar7 = local_b4;
    } while (piStack_b0 != piVar8);
  }
  if (piVar7 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar7);
  }
  if (local_cc != auStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_e4 != &local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_1a4 != local_19c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar12 = local_2cc;
  if (local_2d0 != local_2cc) {
    puVar10 = local_2d0 + 2;
    puVar5 = local_2d0;
    do {
      if ((undefined4 *)puVar10[-2] != puVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      puVar5 = puVar5 + 6;
      puVar10 = puVar10 + 6;
      puVar12 = local_2d0;
    } while (local_2cc != puVar5);
  }
  if (puVar12 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,puVar12);
  }
  if (local_234 != &local_22c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_24c != local_244) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_264 != &local_25c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  local_21c = &uStack_214;
  local_210 = 0;
  local_218 = 4;
  uStack_214 = DAT_2c56624c;
  local_204 = local_1fc;
  local_2b8 = (int *)0x15;
  local_204 = (int **)FUN_2c560bac(&local_2b8,0);
  puVar12 = DAT_2c566260;
  local_1fc[0] = local_2b8;
  piVar8 = (int *)DAT_2c566260[1];
  piVar9 = (int *)DAT_2c566260[2];
  piVar7 = (int *)DAT_2c566260[3];
  puVar5 = DAT_2c566260 + 4;
  *local_204 = (int *)*DAT_2c566260;
  local_204[3] = piVar7;
  piVar7 = (int *)*puVar5;
  uVar1 = *(undefined1 *)(puVar12 + 5);
  local_204[1] = piVar8;
  local_204[2] = piVar9;
  local_204[4] = piVar7;
  *(undefined1 *)(local_204 + 5) = uVar1;
  local_200 = local_2b8;
  *(undefined1 *)((int)local_204 + (int)local_2b8) = 0;
  local_1ec = &local_1e4;
  local_1d8 = 0;
  local_1e8 = (int *)&HardFault;
  local_2bc = (int *)0x0;
  local_1e4 = *DAT_2c566250;
  uStack_1e0 = DAT_2c566250[1];
  uStack_1dc = DAT_2c566250[2];
  local_2c4 = (int *)0x0;
  local_2c0 = (int *)0x0;
  if (*DAT_2c566254 == 0) {
    FUN_2c4723c4();
    *DAT_2c5666fc = 1;
  }
  piVar8 = (int *)FUN_2c47245c(0,0x18);
  piVar7 = local_1e8;
  puVar12 = local_1ec;
  piVar9 = piVar8 + 6;
  *piVar8 = (int)(piVar8 + 2);
  local_2c4 = piVar8;
  local_2bc = piVar9;
  if (((undefined1 *)((int)local_1ec + (int)local_1e8) != (undefined1 *)0x0) &&
     (local_1ec == (undefined4 *)0x0)) goto LAB_2c5666e6;
  local_2b8 = local_1e8;
  if (local_1e8 < (int *)0x10) {
    puVar6 = (undefined1 *)*piVar8;
    if (local_1e8 == (int *)0x1) {
      *puVar6 = *(undefined1 *)local_1ec;
      puVar6 = (undefined1 *)*piVar8;
    }
    else if (local_1e8 != (int *)0x0) goto LAB_2c566558;
  }
  else {
    puVar6 = (undefined1 *)FUN_2c560bac(&local_2b8,0);
    *piVar8 = (int)puVar6;
    piVar8[2] = (int)local_2b8;
LAB_2c566558:
    FUN_2c674668(puVar6,puVar12,piVar7);
    puVar6 = (undefined1 *)*piVar8;
  }
  piVar8[1] = (int)local_2b8;
  puVar6[(int)local_2b8] = 0;
  local_19c[0] = 0;
  local_1a0 = (undefined1 *)0x0;
  local_2c0 = piVar9;
  local_1a4 = local_19c;
  FUN_2c54ffa8(&local_e8,&local_21c,&local_204,&local_2c4,&local_1a4);
  FUN_2c563244(&local_2e8,&local_e8);
  puVar12 = DAT_2c566258;
  local_e8 = ppiVar4;
  if (local_a8 != auStack_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar7 = piStack_b0;
  if (local_b4 != piStack_b0) {
    piVar9 = local_b4 + 2;
    piVar8 = local_b4;
    do {
      if ((int *)piVar9[-2] != piVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar8 = piVar8 + 6;
      piVar9 = piVar9 + 6;
      piVar7 = local_b4;
    } while (piStack_b0 != piVar8);
  }
  if (piVar7 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar7);
  }
  if (local_cc != auStack_c4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_e4 != &local_dc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_1a4 != local_19c) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  piVar7 = local_2c0;
  if (local_2c4 != local_2c0) {
    piVar9 = local_2c4 + 2;
    piVar8 = local_2c4;
    do {
      if ((int *)piVar9[-2] != piVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_2c472680(0);
      }
      piVar8 = piVar8 + 6;
      piVar9 = piVar9 + 6;
      piVar7 = local_2c4;
    } while (local_2c0 != piVar8);
  }
  if (piVar7 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar7);
  }
  if (local_1ec != &local_1e4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_204 != local_1fc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_21c != &uStack_214) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar6 = (undefined1 *)*DAT_2c566258;
  piVar7 = (int *)DAT_2c566258[1];
  local_1d4 = local_1cc;
  if ((puVar6 + (int)piVar7 != (undefined1 *)0x0) && (puVar6 == (undefined1 *)0x0))
  goto LAB_2c5666e6;
  local_2b8 = piVar7;
  if (piVar7 < (int *)0x10) {
    if (piVar7 == (int *)0x1) {
      local_1cc[0] = (int *)CONCAT31(local_1cc[0]._1_3_,*puVar6);
    }
    else if (piVar7 != (int *)0x0) goto LAB_2c5666a4;
  }
  else {
    local_1d4 = (int **)FUN_2c560bac(&local_2b8,0);
    local_1cc[0] = local_2b8;
LAB_2c5666a4:
    FUN_2c674668(local_1d4,puVar6,piVar7);
  }
  *(undefined1 *)((int)local_1d4 + (int)local_2b8) = 0;
  local_1b4 = (int *)*DAT_2c56625c;
  uStack_1b0 = DAT_2c56625c[1];
  local_1ac = (undefined2)DAT_2c56625c[2];
  local_1b8 = (int *)&DAT_0000000a;
  local_1aa = 0;
  local_e4 = (undefined4 *)&DAT_0000000a;
  local_d6 = 0;
  local_1d0 = local_2b8;
  local_1bc = &local_1b4;
  local_e8 = &local_e0;
  local_e0 = local_1b4;
  local_dc = uStack_1b0;
  local_d8 = local_1ac;
  FUN_2c550910(&local_2b8,&local_2e8);
  FUN_2c550b6c(&local_1a4,&local_1d4,&local_1bc,&local_e8,1,&local_2b8);
  piVar9 = local_2b4;
  piVar8 = local_2b4;
  for (piVar7 = local_2b8; piVar7 != piVar9; piVar7 = piVar7 + 0x16) {
    (**(code **)(*piVar7 + 4))(piVar7);
    piVar8 = local_2b8;
  }
  if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar8);
  }
  if (local_e8 != &local_e0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_1bc != &local_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_1d4 != local_1cc) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  puVar6 = (undefined1 *)*puVar12;
  piVar7 = (int *)puVar12[1];
  if ((puVar6 + (int)piVar7 != (undefined1 *)0x0) &&
     (local_1bc = &local_1b4, puVar6 == (undefined1 *)0x0)) goto LAB_2c5666e6;
  local_2b8 = piVar7;
  if (piVar7 < (int *)0x10) {
    if (piVar7 == (int *)0x1) {
      uVar3 = (uint)local_1b4 >> 8;
      local_1b4 = (int *)CONCAT31((int3)uVar3,*puVar6);
      local_1bc = &local_1b4;
    }
    else {
      local_1bc = &local_1b4;
      if (piVar7 != (int *)0x0) goto LAB_2c566688;
    }
  }
  else {
    local_1bc = &local_1b4;
    local_1bc = (int **)FUN_2c560bac(&local_2b8,0);
    local_1b4 = local_2b8;
LAB_2c566688:
    FUN_2c674668(local_1bc,puVar6,piVar7);
  }
  *(undefined1 *)((int)local_1bc + (int)local_2b8) = 0;
  local_1b8 = local_2b8;
  FUN_2c561d78(&local_e8,&local_1a4);
  local_2b0 = (int *)0x0;
  local_2b8 = (int *)0x0;
  local_2b4 = (int *)0x0;
  if (*DAT_2c566254 == 0) {
    FUN_2c4723c4();
    *DAT_2c5666fc = 1;
  }
  piVar8 = (int *)FUN_2c47245c(0,0xbc);
  piVar7 = local_e0;
  puVar12 = local_e4;
  puVar6 = DAT_2c566264;
  piVar11 = piVar8 + 0x2f;
  piVar9 = piVar8 + 3;
  *piVar8 = (int)DAT_2c566264;
  piVar8[1] = (int)piVar9;
  local_2b8 = piVar8;
  local_2b0 = piVar11;
  if (((undefined1 *)((int)local_e4 + (int)local_e0) != (undefined1 *)0x0) &&
     (local_e4 == (undefined4 *)0x0)) goto LAB_2c5666e6;
  local_2c4 = local_e0;
  if (local_e0 < (int *)0x10) {
    if (local_e0 == (int *)0x1) {
      *(undefined1 *)(piVar8 + 3) = *(undefined1 *)local_e4;
    }
    else if (local_e0 != (int *)0x0) goto LAB_2c5665d0;
  }
  else {
    piVar9 = (int *)FUN_2c560bac(&local_2c4,0);
    piVar8[1] = (int)piVar9;
    piVar8[3] = (int)local_2c4;
LAB_2c5665d0:
    FUN_2c674668(piVar9,puVar12,piVar7);
    piVar9 = (int *)piVar8[1];
  }
  piVar8[2] = (int)local_2c4;
  *(undefined1 *)((int)piVar9 + (int)local_2c4) = 0;
  piVar7 = piVar8 + 9;
  piVar8[7] = (int)piVar7;
  if ((local_cc + (int)piStack_c8 != (undefined1 *)0x0) && (local_cc == (undefined1 *)0x0))
  goto LAB_2c5666e6;
  local_2c4 = piStack_c8;
  if (piStack_c8 < (int *)0x10) {
    if (piStack_c8 == (int *)0x1) {
      *(undefined1 *)(piVar8 + 9) = *local_cc;
    }
    else if (piStack_c8 != (int *)0x0) goto LAB_2c5665b4;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&local_2c4,0);
    piVar8[7] = (int)piVar7;
    piVar8[9] = (int)local_2c4;
LAB_2c5665b4:
    FUN_2c674668(piVar7,local_cc,piStack_c8);
    piVar7 = (int *)piVar8[7];
  }
  piVar8[8] = (int)local_2c4;
  *(undefined1 *)((int)piVar7 + (int)local_2c4) = 0;
  piVar7 = piVar8 + 0xf;
  piVar8[0xd] = (int)piVar7;
  if (((undefined1 *)((int)local_b4 + (int)piStack_b0) != (undefined1 *)0x0) &&
     (local_b4 == (int *)0x0)) goto LAB_2c5666e6;
  local_2c4 = piStack_b0;
  if (piStack_b0 < (int *)0x10) {
    if (piStack_b0 == (int *)0x1) {
      *(char *)(piVar8 + 0xf) = (char)*local_b4;
    }
    else if (piStack_b0 != (int *)0x0) goto LAB_2c566624;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&local_2c4,0);
    piVar8[0xd] = (int)piVar7;
    piVar8[0xf] = (int)local_2c4;
LAB_2c566624:
    FUN_2c674668(piVar7,local_b4,piStack_b0);
    piVar7 = (int *)piVar8[0xd];
  }
  piVar8[0xe] = (int)local_2c4;
  *(undefined1 *)((int)piVar7 + (int)local_2c4) = 0;
  piVar7 = piVar8 + 0x15;
  piVar8[0x13] = (int)piVar7;
  if ((local_9c + (int)piStack_98 != (undefined1 *)0x0) && (local_9c == (undefined1 *)0x0))
  goto LAB_2c5666e6;
  local_2c4 = piStack_98;
  if (piStack_98 < (int *)0x10) {
    if (piStack_98 == (int *)0x1) {
      *(undefined1 *)(piVar8 + 0x15) = *local_9c;
    }
    else if (piStack_98 != (int *)0x0) goto LAB_2c566608;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&local_2c4,0);
    piVar8[0x13] = (int)piVar7;
    piVar8[0x15] = (int)local_2c4;
LAB_2c566608:
    FUN_2c674668(piVar7,local_9c,piStack_98);
    piVar7 = (int *)piVar8[0x13];
  }
  piVar8[0x14] = (int)local_2c4;
  *(undefined1 *)((int)piVar7 + (int)local_2c4) = 0;
  piVar7 = piVar8 + 0x1b;
  piVar8[0x19] = (int)piVar7;
  if ((local_84 + (int)piStack_80 != (undefined1 *)0x0) && (local_84 == (undefined1 *)0x0))
  goto LAB_2c5666e6;
  local_2c4 = piStack_80;
  if (piStack_80 < (int *)0x10) {
    if (piStack_80 == (int *)0x1) {
      *(undefined1 *)(piVar8 + 0x1b) = *local_84;
    }
    else if (piStack_80 != (int *)0x0) goto LAB_2c5665ec;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&local_2c4,0);
    piVar8[0x19] = (int)piVar7;
    piVar8[0x1b] = (int)local_2c4;
LAB_2c5665ec:
    FUN_2c674668(piVar7,local_84,piStack_80);
    piVar7 = (int *)piVar8[0x19];
  }
  piVar8[0x1a] = (int)local_2c4;
  *(undefined1 *)((int)piVar7 + (int)local_2c4) = 0;
  piVar7 = piVar8 + 0x21;
  piVar8[0x1f] = (int)piVar7;
  if ((local_6c + (int)piStack_68 != (undefined1 *)0x0) && (local_6c == (undefined1 *)0x0))
  goto LAB_2c5666e6;
  local_2c4 = piStack_68;
  if (piStack_68 < (int *)0x10) {
    if (piStack_68 == (int *)0x1) {
      *(undefined1 *)(piVar8 + 0x21) = *local_6c;
    }
    else if (piStack_68 != (int *)0x0) goto LAB_2c566642;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&local_2c4,0);
    piVar8[0x1f] = (int)piVar7;
    piVar8[0x21] = (int)local_2c4;
LAB_2c566642:
    FUN_2c674668(piVar7,local_6c,piStack_68);
    piVar7 = (int *)piVar8[0x1f];
  }
  piVar8[0x20] = (int)local_2c4;
  *(undefined1 *)((int)piVar7 + (int)local_2c4) = 0;
  piVar7 = piVar8 + 0x27;
  piVar8[0x25] = (int)piVar7;
  if ((local_54 + (int)piStack_50 != (undefined1 *)0x0) && (local_54 == (undefined1 *)0x0)) {
LAB_2c5666e6:
                    /* WARNING: Subroutine does not return */
    FUN_2c658674(DAT_2c566700);
  }
  local_2c4 = piStack_50;
  if (piStack_50 < (int *)0x10) {
    if (piStack_50 == (int *)0x1) {
      *(undefined1 *)(piVar8 + 0x27) = *local_54;
      goto LAB_2c5663ca;
    }
    if (piStack_50 == (int *)0x0) goto LAB_2c5663ca;
  }
  else {
    piVar7 = (int *)FUN_2c560bac(&local_2c4,0);
    piVar8[0x25] = (int)piVar7;
    piVar8[0x27] = (int)local_2c4;
  }
  FUN_2c674668(piVar7,local_54,piStack_50);
  piVar7 = (int *)piVar8[0x25];
LAB_2c5663ca:
  piVar8[0x26] = (int)local_2c4;
  *(undefined1 *)((int)piVar7 + (int)local_2c4) = 0;
  piVar8[0x2b] = local_3c;
  FUN_2c550910(piVar8 + 0x2c,auStack_38);
  local_2b4 = piVar11;
  FUN_2c550314(param_1,&local_1bc,&local_2b8);
  piVar9 = local_2b4;
  piVar8 = local_2b4;
  for (piVar7 = local_2b8; piVar7 != piVar9; piVar7 = piVar7 + 0x2f) {
    (**(code **)(*piVar7 + 4))(piVar7);
    piVar8 = local_2b8;
  }
  if (piVar8 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar8);
  }
  (*(code *)local_e8[1])(&local_e8);
  piVar7 = piStack_2e4;
  piVar8 = local_f4;
  piVar9 = local_f0;
  if (local_1bc != &local_1b4) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  for (; local_1a4 = puVar6, piStack_2e4 = piVar7, piVar8 != local_f0; piVar8 = piVar8 + 0x16) {
    (**(code **)(*piVar8 + 4))(piVar8);
    puVar6 = local_1a4;
    piVar7 = piStack_2e4;
    piVar9 = local_f4;
  }
  if (piVar9 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar9);
  }
  if (local_110 != auStack_108) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_128 != auStack_120) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_140 != auStack_138) {
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0);
  }
  if (local_158 == auStack_150) {
    if (local_170 != auStack_168) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    if (local_188 != auStack_180) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    piVar8 = piVar7;
    piVar9 = local_2e8;
    if (local_1a0 != auStack_198) {
                    /* WARNING: Subroutine does not return */
      FUN_2c472680(0);
    }
    for (; piVar9 != piVar7; piVar9 = piVar9 + 0x16) {
      (**(code **)(*piVar9 + 4))(piVar9);
      piVar8 = local_2e8;
    }
    if (piVar8 == (int *)0x0) {
      if (*DAT_2c5666f8 != local_2c) {
                    /* WARNING: Subroutine does not return */
        stack_chk_fail();
      }
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_2c472680(0,piVar8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c472680(0);
}

