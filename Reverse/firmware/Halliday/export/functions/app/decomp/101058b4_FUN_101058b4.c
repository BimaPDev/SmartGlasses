/* FUN_101058b4 @ 0x101058b4 */

void FUN_101058b4(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar2 = (**(code **)(param_1 + 0x254))();
  uVar7 = *param_2;
  if (uVar7 == 0) {
    iVar4 = *(int *)(param_1 + 0x1c);
  }
  else {
    uVar6 = 1;
    iVar5 = *(int *)(param_1 + 0x1c);
    do {
      if (iVar5 < 2) {
        if (*(char *)(param_1 + 0x235) != '\0') {
          *(undefined4 *)(param_1 + 0xc) = 0x81;
        }
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        return;
      }
      iVar4 = iVar5 + -2;
      *(int *)(param_1 + 0x1c) = iVar4;
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x18) + (iVar5 + -1) * 4);
      if (uVar1 < *(ushort *)(param_1 + 0x2c)) {
        uVar3 = *(uint *)(*(int *)(param_1 + 0x18) + iVar4 * 4);
        uVar8 = (uVar3 & 0xff) >> 4;
        if (*(char *)(param_1 + 0x174) == 'q') {
          uVar8 = uVar8 + 0x10;
        }
        else if (*(char *)(param_1 + 0x174) == 'r') {
          uVar8 = uVar8 + 0x20;
        }
        if (iVar2 == *(ushort *)(param_1 + 0x150) + uVar8) {
          uVar3 = uVar3 & 0xf;
          iVar4 = uVar3 - 8;
          if (-1 < iVar4) {
            iVar4 = uVar3 - 7;
          }
          (**(code **)(param_1 + 0x24c))
                    (param_1,param_1 + 0x24,uVar1,iVar4 << (6 - *(ushort *)(param_1 + 0x152) & 0xff)
                    );
          iVar4 = *(int *)(param_1 + 0x1c);
        }
      }
      else if (*(char *)(param_1 + 0x235) != '\0') {
        *(undefined4 *)(param_1 + 0xc) = 0x86;
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar4;
    } while (uVar6 <= uVar7);
  }
  *(int *)(param_1 + 0x20) = iVar4;
  return;
}

