/* FUN_1010d108 @ 0x1010d108 */

int FUN_1010d108(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fVar14;
  uint local_48;
  uint local_3c;
  undefined1 auStack_34 [4];
  uint local_30;
  uint auStack_2c [2];
  
  bVar11 = *(char *)((int)param_1 + 0xb2) != '\0';
  if (bVar11) {
    local_3c = 0;
  }
  else {
    local_3c = 0x10000000;
  }
  *(bool *)((int)param_1 + 0xb3) = !bVar11;
  iVar1 = FUN_1010cba0(param_1);
  iVar4 = DAT_1010d3f0;
  if (iVar1 == 0) {
    if (param_2 == (uint *)0x0) {
      iVar7 = **(int **)(DAT_1010d3f0 + 0x720);
      iVar8 = (*(int **)(DAT_1010d3f0 + 0x720))[1];
      uVar2 = 0;
      uVar6 = 0;
    }
    else {
      uVar6 = *param_2;
      uVar2 = param_2[1];
      iVar7 = uVar6 + param_2[2];
      iVar8 = uVar2 + param_2[3];
    }
    iVar10 = *param_1;
    iVar9 = param_1[1];
    if ((*(int *)(DAT_1010d3f0 + 0x730) == 0) || (*(char *)((int)param_1 + 0xb1) != '\0')) {
      uVar3 = 0;
      uVar5 = uVar3;
    }
    else {
      if (*(int *)(DAT_1010d3f0 + 0x744) <= iVar10) {
        iVar10 = *(int *)(DAT_1010d3f0 + 0x744);
      }
      if (*(int *)(DAT_1010d3f0 + 0x748) <= iVar9) {
        iVar9 = *(int *)(DAT_1010d3f0 + 0x748);
      }
      uVar3 = *(uint *)(DAT_1010d3f0 + 0x73c) & ~((int)*(uint *)(DAT_1010d3f0 + 0x73c) >> 0x1f);
      uVar5 = *(uint *)(DAT_1010d3f0 + 0x740) & ~((int)*(uint *)(DAT_1010d3f0 + 0x740) >> 0x1f);
    }
    if ((int)uVar6 < (int)uVar3) {
      uVar6 = uVar3;
    }
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
    if ((int)uVar6 < iVar10) {
      if ((int)uVar5 < (int)uVar2) {
        uVar5 = uVar2;
      }
      if (iVar9 <= iVar8) {
        iVar8 = iVar9;
      }
      if ((int)uVar5 < iVar8) {
        if (*(short *)((int)param_1 + 0xe) == 0x40b) {
          fVar14 = (float)VectorSignedToFloat(param_3 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
          fVar12 = (float)VectorSignedToFloat((param_3 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
          fVar13 = (float)VectorSignedToFloat((param_3 & 0xffffff) >> 0x10,
                                              (byte)(in_fpscr >> 0x16) & 3);
          fVar12 = fVar14 * DAT_1010d3f4 + fVar12 * DAT_1010d3f8 + fVar13 * DAT_1010d3fc;
          param_3 = (uint)(0.0 < fVar12) * (int)fVar12;
          param_3 = param_3 | param_3 * 0x1000000;
        }
        if ((char)param_1[3] == '\x01') {
          local_48 = 0x20000000;
          uVar2 = 0x40;
        }
        else {
          uVar2 = 0;
          local_48 = 0;
        }
        iVar1 = FUN_1013b1e8(DAT_1010d3f0,0xa34,0);
        if (((iVar1 == 0) && (iVar1 = FUN_1013b1e8(iVar4,0xa02,param_3), iVar1 == 0)) &&
           (iVar1 = FUN_1013b1e8(iVar4,0xa39,0), iVar1 == 0)) {
          if (((param_2 == (uint *)0x0) && (uVar6 == 0 && uVar5 == 0)) &&
             ((iVar10 == *param_1 &&
              (*(int *)(iVar4 + 0x794) == 0 &&
               (*(int *)(iVar4 + 0x730) == 0 && *(uint *)(iVar4 + 0x734) == 0))))) {
            if ((((char)param_1[0x2b] == '\0') &&
                (FUN_1010b7e8(*(undefined2 *)((int)param_1 + 0xe),&local_30,auStack_2c,auStack_34),
                local_30 / auStack_2c[0] == 3)) && ((param_1[2] * iVar8) % 0x30 != 0)) {
              return 1;
            }
            iVar1 = FUN_1013b1e8(DAT_1010d3f0,0xa00,
                                 local_48 | *(uint *)(iVar4 + 0x734) | local_3c | uVar2 | 4);
            if (iVar1 != 0) {
              return iVar1;
            }
            iVar1 = FUN_1013b026(DAT_1010d3f0);
            if (iVar1 == 0) {
              return 3;
            }
            iVar1 = param_1[2];
            if (*(uint *)(iVar4 + 0x6d8) <=
                *(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc) + 0x10U) {
              iVar7 = FUN_1010b660(DAT_1010d3f0);
              if (iVar7 != 0) {
                return iVar7;
              }
              iVar7 = FUN_1010b62c(DAT_1010d3f0,0);
              if (iVar7 != 0) {
                return iVar7;
              }
            }
            *(undefined4 *)
             (*(int *)(iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b4) * 4) +
             *(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc)) = DAT_1010d400;
            *(undefined4 *)
             (*(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc) +
              *(int *)(iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b4) * 4) + 4) = 0;
            *(int *)(*(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc) +
                     *(int *)(iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b4) * 4) + 8) = iVar1 * iVar8;
            *(undefined4 *)
             (*(int *)(iVar4 + *(int *)(iVar4 + 0x6e4) * 4 + 0x6dc) +
              *(int *)(iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b4) * 4) + 0xc) = 0;
            iVar4 = iVar4 + (*(int *)(iVar4 + 0x6e4) + 0x1b6) * 4;
            *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 0x10;
          }
          else {
            iVar4 = FUN_1013b1e8(DAT_1010d3f0,0xa00,
                                 local_48 | *(uint *)(iVar4 + 0x734) | local_3c | uVar2 | 1);
            if (iVar4 != 0) {
              return iVar4;
            }
            iVar4 = FUN_1010b738(uVar6,uVar5,iVar10 - uVar6,iVar8 - uVar5);
            if (iVar4 != 0) {
              return iVar4;
            }
          }
          iVar1 = FUN_1013b1e8(DAT_1010d3f0,0xa1b,0x11);
        }
      }
    }
  }
  return iVar1;
}

