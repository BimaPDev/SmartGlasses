/* FUN_2c665454 @ 0x2c665454 */

uint FUN_2c665454(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  
  uVar1 = FUN_2c664ee6();
  if (uVar1 == 0) {
    uVar1 = param_4[2];
    iVar6 = *(int *)(param_1 + 0xc);
    iVar5 = param_1 + iVar6 * 8;
    if ((uVar1 & 0x10) != 0) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar3 = *(uint *)(iVar5 + 0xc);
      iStack_40 = 0;
      uStack_3c = uStack_3c & 0xffffff00;
      iStack_34 = 0;
      if ((uVar1 & 1) != 0 || (uVar3 & 2) != 0) {
        if (param_3 == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)uVar3 >> 8;
          if ((uVar3 & 1) != 0) {
            iVar4 = *(int *)(*param_3 + iVar4);
          }
          iVar4 = iVar4 + (int)param_3;
        }
        uStack_38 = uVar1;
        uVar2 = (**(code **)(**(int **)(iVar5 + 8) + 0x18))
                          (*(int **)(iVar5 + 8),param_2,iVar4,&iStack_40);
        if (uVar2 != 0) {
          if ((iStack_34 == 8) && ((uVar3 & 1) != 0)) {
            iStack_34 = *(int *)(iVar5 + 8);
          }
          if ((3 < (byte)uStack_3c) && ((uVar3 & 2) == 0)) {
            uStack_3c = uStack_3c & 0xfffffffd;
          }
          if (param_4[3] == 0) {
            *param_4 = iStack_40;
            param_4[1] = uStack_3c;
            param_4[2] = uStack_38;
            param_4[3] = iStack_34;
            uVar3 = (uint)*(byte *)(param_4 + 1);
            if (uVar3 < 4) {
              return uVar2;
            }
            if ((int)(uVar3 << 0x1e) < 0) {
              uVar3 = *(uint *)(param_1 + 8) & 1;
            }
            else {
              if (-1 < (int)(uVar3 << 0x1f)) {
                return uVar2;
              }
              uVar3 = *(uint *)(param_1 + 8) & 2;
            }
            if (uVar3 == 0) {
              return uVar2;
            }
          }
          else {
            if (*param_4 != iStack_40) {
              *param_4 = 0;
LAB_2c66555a:
              *(undefined1 *)(param_4 + 1) = 2;
              return uVar2;
            }
            if ((*param_4 == 0) &&
               (((iStack_34 == 8 || (param_4[3] == 8)) || (iVar4 = FUN_2c6650f4(), iVar4 == 0))))
            goto LAB_2c66555a;
            *(byte *)(param_4 + 1) = *(byte *)(param_4 + 1) | (byte)uStack_3c;
          }
        }
      }
      iVar5 = iVar5 + -8;
    }
    uVar1 = (uint)((char)param_4[1] != '\0');
  }
  return uVar1;
}

