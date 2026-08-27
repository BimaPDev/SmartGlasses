/* FUN_2c6651ea @ 0x2c6651ea */

int FUN_2c6651ea(int param_1,int param_2,uint param_3,undefined4 param_4,int *param_5,
                undefined4 param_6,int *param_7,int *param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined1 uVar11;
  int iVar12;
  int iStack_54;
  uint uStack_4c;
  int iStack_40;
  int iStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  
  if (param_8[2] << 0x1b < 0) {
    param_8[2] = *(int *)(param_1 + 8);
  }
  if ((param_5 == param_7) && (iVar3 = FUN_2c6650f4(param_1,param_6), iVar3 != 0)) {
    *(char *)((int)param_8 + 5) = (char)param_3;
  }
  else {
    iVar3 = FUN_2c6650f4(param_1,param_4);
    if (iVar3 == 0) {
      iVar3 = 0;
      if (param_2 < 0) {
        uStack_4c = 0;
      }
      else {
        uStack_4c = (int)param_7 - param_2;
      }
      bVar1 = false;
      iStack_40 = 2;
      bVar2 = true;
      do {
        iVar12 = *(int *)(param_1 + 0xc);
        iStack_54 = param_1 + iVar12 * 8;
        for (; iVar12 != 0; iVar12 = iVar12 + -1) {
          uStack_2c = param_8[2];
          iStack_34 = 0;
          uStack_30 = 0;
          iVar6 = *(int *)(iStack_54 + 0xc);
          iVar4 = iVar6 >> 8;
          uVar5 = param_3;
          if (iVar6 << 0x1f < 0) {
            iVar4 = *(int *)(*param_5 + iVar4);
            uVar5 = param_3 | 1;
          }
          if ((uStack_4c == 0) || (uStack_4c < (uint)(iVar4 + (int)param_5) != bVar2)) {
            if (-1 < iVar6 << 0x1e) {
              if ((param_2 == -2) && ((uStack_2c & 3) == 0)) goto LAB_2c665346;
              uVar5 = uVar5 & 0xfd;
            }
            iVar4 = (**(code **)(**(int **)(iStack_54 + 8) + 0x1c))
                              (*(int **)(iStack_54 + 8),param_2,uVar5,param_4,iVar4 + (int)param_5,
                               param_6,param_7,&iStack_34);
            uVar5 = (uint)uStack_30._2_1_;
            bVar9 = *(byte *)((int)param_8 + 5) | uStack_30._1_1_;
            uVar7 = (uint)bVar9;
            *(byte *)((int)param_8 + 5) = bVar9;
            if ((uVar5 == 6) || (uVar5 == 2)) {
              *param_8 = iStack_34;
              *(byte *)(param_8 + 1) = (byte)uStack_30;
              *(byte *)((int)param_8 + 6) = uStack_30._2_1_;
              return iVar4;
            }
            iVar6 = *param_8;
            if (iVar3 == 0) {
              if (iVar6 != 0) goto LAB_2c665358;
              *param_8 = iStack_34;
              *(byte *)(param_8 + 1) = (byte)uStack_30;
              iVar3 = iVar4;
              if (((iStack_34 != 0) && (uVar7 != 0)) && (-1 < *(int *)(param_1 + 8) << 0x1f)) {
                return iVar4;
              }
            }
            else if (iVar6 == 0) {
              if (iStack_34 == 0) goto LAB_2c665340;
LAB_2c665370:
              bVar9 = *(byte *)((int)param_8 + 6);
              uVar10 = (uint)bVar9;
              if ((uVar7 < 4) || (((int)(uVar7 << 0x1f) < 0 && (param_8[2] << 0x1e < 0)))) {
                if (uVar10 == 0) {
                  if ((3 < uVar5) &&
                     ((-1 < (int)(uVar5 << 0x1f) || (-1 < *(int *)(param_1 + 8) << 0x1e)))) {
                    uVar10 = 1;
                    goto LAB_2c6653de;
                  }
                  uVar10 = func_0x2c6651c0(param_4,param_2,iVar6,param_6,param_7);
                }
                if (uVar5 == 0) {
                  if ((uVar10 < 4) ||
                     (((int)(uVar10 << 0x1f) < 0 && (*(int *)(param_1 + 8) << 0x1e < 0)))) {
                    uVar5 = func_0x2c6651c0(param_4,param_2,iStack_34,param_6,param_7);
                  }
                  else {
                    uVar5 = 1;
                  }
                }
              }
              else {
                if (uVar10 == 0) {
                  bVar9 = 1;
                }
                bVar8 = uStack_30._2_1_;
                if (uVar5 == 0) {
                  bVar8 = 1;
                }
                uVar10 = (uint)bVar9;
                uVar5 = (uint)bVar8;
              }
LAB_2c6653de:
              uVar11 = (undefined1)(uVar5 ^ uVar10);
              if (((uVar5 ^ uVar10) & 0xff) < 4) {
                *param_8 = 0;
                if (3 < (uVar5 & uVar10 & 0xff)) {
                  *(undefined1 *)((int)param_8 + 6) = 2;
                  return 1;
                }
                iVar3 = 1;
                *(undefined1 *)((int)param_8 + 6) = 1;
              }
              else {
                if (3 < uVar5) {
                  iVar3 = 0;
                  *param_8 = iStack_34;
                  uVar11 = (undefined1)uStack_30;
                  uVar10 = uVar5;
                }
                *(char *)((int)param_8 + 6) = (char)uVar10;
                if (3 < uVar5) {
                  *(undefined1 *)(param_8 + 1) = uVar11;
                }
                if (((int)(uVar10 << 0x1e) < 0) || ((uVar10 & 1) == 0)) {
                  return 0;
                }
              }
            }
            else {
LAB_2c665358:
              if (iStack_34 == iVar6) {
                *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) | (byte)uStack_30;
              }
              else if ((iStack_34 != 0) || (iVar4 != 0)) goto LAB_2c665370;
            }
LAB_2c665340:
            if (*(char *)((int)param_8 + 5) == '\x04') {
              return iVar3;
            }
          }
          else {
            bVar1 = true;
          }
LAB_2c665346:
          iStack_54 = iStack_54 + -8;
        }
        if (!bVar1) {
          return iVar3;
        }
        if (iStack_40 == 1) {
          return iVar3;
        }
        iStack_40 = 1;
        bVar2 = false;
      } while( true );
    }
    *param_8 = (int)param_5;
    *(char *)(param_8 + 1) = (char)param_3;
    if (param_2 < 0) {
      if (param_2 == -2) {
        *(undefined1 *)((int)param_8 + 6) = 1;
      }
    }
    else {
      if (param_7 == (int *)(param_2 + (int)param_5)) {
        uVar11 = 6;
      }
      else {
        uVar11 = 1;
      }
      *(undefined1 *)((int)param_8 + 6) = uVar11;
    }
  }
  return 0;
}

