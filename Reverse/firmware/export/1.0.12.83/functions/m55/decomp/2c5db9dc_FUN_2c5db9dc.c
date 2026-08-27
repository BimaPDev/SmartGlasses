/* FUN_2c5db9dc @ 0x2c5db9dc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5db9dc(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;
  undefined4 auStack_38 [2];
  uint uStack_30;
  uint uStack_2c;
  
  FUN_2c5da928();
  uVar2 = _LAB_2c5dbbe0;
  uVar1 = _LAB_2c5dbbdc;
  uVar4 = _LAB_2c5dbbd8;
  iVar7 = *param_2;
  iVar10 = _LAB_2c5dbbbc * (param_2[1] - iVar7 >> 3);
  if (0 < param_2[1] - iVar7) {
    iVar9 = 0;
    do {
      uVar11 = *(undefined4 *)(iVar7 + iVar9 * 0x18);
      iVar7 = FUN_2c66b624(uVar11,uVar4);
      if (iVar7 == 0) {
        uVar11 = FUN_2c5db5e4(param_1,1,iVar9);
        FUN_2c5db1c0(param_1,uVar11);
      }
      else {
        iVar7 = FUN_2c66b624(uVar11,uVar1);
        if (iVar7 == 0) {
          uVar11 = 2;
LAB_2c5dbb64:
          uVar11 = FUN_2c5db5e4(param_1,uVar11,iVar9);
          FUN_2c5db1c0(param_1,uVar11);
        }
        else {
          iVar7 = FUN_2c66b624(uVar11,uVar2);
          if (iVar7 == 0) {
            uVar11 = FUN_2c5db5e4(param_1,3,iVar9);
            FUN_2c5db1c0(param_1,uVar11);
          }
          else {
            iVar7 = FUN_2c66b624(uVar11,_LAB_2c5dbbc0);
            if (iVar7 == 0) {
              uVar11 = FUN_2c5db5e4(param_1,4,iVar9);
              FUN_2c5db1c0(param_1,uVar11);
            }
            else {
              iVar7 = FUN_2c66b624(uVar11,_LAB_2c5dbbc4);
              if (iVar7 == 0) {
                uVar11 = FUN_2c5db5e4(param_1,6,iVar9);
                FUN_2c5db1c0(param_1,uVar11);
              }
              else {
                iVar7 = FUN_2c66b624(uVar11,_LAB_2c5dbbc8);
                if (iVar7 == 0) {
                  uVar11 = 5;
                  goto LAB_2c5dbb64;
                }
              }
            }
          }
        }
      }
      if (iVar10 <= iVar9 + 1) break;
      iVar9 = iVar9 + 1;
      iVar7 = *param_2;
    } while( true );
  }
  uVar4 = FUN_2c5db5e4(param_1,0x7fffffff);
  FUN_2c5db1c0(param_1,uVar4);
  FUN_2c5daa20(param_1,0x7fffffff,0);
  FUN_2c5da6a8(param_1,*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2);
  FUN_2c5da60c(param_1);
  FUN_2c5da66c(param_1);
  iVar7 = *(int *)(param_1 + 0x10);
  uVar5 = (*(int *)(param_1 + 0x14) - iVar7 >> 2) - 1;
  uVar6 = uVar5 & 0xff;
  *(char *)(param_1 + 0x24) = (char)uVar5;
  if (*(int *)(param_1 + 0x14) != iVar7) {
    uVar5 = 1;
    do {
      iVar10 = uVar5 * 4 + -4;
      iVar7 = FUN_2c5d8bdc(*(undefined4 *)(iVar7 + iVar10));
      if (iVar7 != 0x7fffffff) {
        uVar3 = FUN_2c5d8bdc(*(undefined4 *)(*(int *)(param_1 + 0x10) + iVar10));
        *(undefined1 *)(param_1 + 0x24 + uVar5) = uVar3;
      }
      iVar7 = *(int *)(param_1 + 0x10);
      bVar12 = uVar5 < (uint)(*(int *)(param_1 + 0x14) - iVar7 >> 2);
      uVar5 = uVar5 + 1;
    } while (bVar12);
    uVar6 = (uint)*(byte *)(param_1 + 0x24);
  }
  pbVar8 = (byte *)(param_1 + 0x24);
  uStack_2c = 0;
  uStack_30 = 0;
  while( true ) {
    uVar5 = uVar6 | (int)auStack_38 * 0x10;
    uStack_30 = uStack_30 | uVar6;
    uStack_2c = uStack_2c | uVar5;
    if (uVar5 == 0) break;
    pbVar8 = pbVar8 + 1;
    uVar6 = (uint)*pbVar8;
  }
  auStack_38[0] = _LAB_2c5dbbcc;
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(4,_LAB_2c5dbbd4,0x1b8,_LAB_2c5dbbd0);
}

