/* FUN_2c603a04 @ 0x2c603a04 */

void FUN_2c603a04(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  short sVar12;
  
  uVar10 = param_3 & 0xff0000;
  if (param_2 == 0) {
    sVar12 = -1;
  }
  else {
    sVar12 = -(ushort)(*(char *)(param_2 + 7) != '\0');
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x22);
  if ((*(ushort *)(param_1 + 0x22) & 0x1f8) != 0) {
    bVar1 = false;
    iVar11 = (param_3 & 0xffff) - 0xffff;
    uVar9 = 0;
    if (iVar11 != 0) {
      iVar11 = 1;
    }
    do {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar8 = uVar9 * 8;
      piVar6 = (int *)(iVar2 + uVar9 * 8);
      if (((((piVar6[1] & 0xffffU) == (param_3 & 0xffff)) || (iVar11 == 0)) &&
          (((piVar6[1] & 0xff0000U) == uVar10 || (uVar10 == 0xf0000)))) &&
         ((param_2 == 0 || (*piVar6 == param_2)))) {
        uVar4 = (uint)*(byte *)((int)piVar6 + 7);
        if ((int)(uVar4 << 0x1e) < 0) {
          FUN_2c6032d4(param_1,uVar10,0xffff,0);
          iVar2 = *(int *)(param_1 + 0xc);
          piVar6 = (int *)(iVar2 + iVar8);
          uVar4 = (uint)*(byte *)((int)piVar6 + 7);
        }
        if ((uVar4 & 3) != 0) {
          FUN_2c62ae04(*piVar6);
          FUN_2c62bea8(*(undefined4 *)(*(int *)(param_1 + 0xc) + iVar8));
          *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar8) = 0;
          iVar2 = *(int *)(param_1 + 0xc);
        }
        uVar5 = (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3;
        uVar4 = uVar9;
        if (uVar9 < uVar5 - 1) {
          while( true ) {
            iVar8 = iVar8 + 8;
            puVar7 = (undefined4 *)(iVar2 + iVar8);
            puVar7[-1] = puVar7[1];
            puVar7[-2] = *puVar7;
            uVar5 = (*(ushort *)(param_1 + 0x22) & 0x1ff) >> 3;
            if (uVar5 - 1 <= uVar4 + 1) break;
            iVar2 = *(int *)(param_1 + 0xc);
            uVar4 = uVar4 + 1;
          }
          iVar2 = *(int *)(param_1 + 0xc);
        }
        uVar4 = uVar5 + 0x3f & 0x3f;
        *(ushort *)(param_1 + 0x22) = *(ushort *)(param_1 + 0x22) & 0xfe07 | (ushort)(uVar4 << 3);
        uVar3 = FUN_2c62bebc(iVar2,uVar4 << 3);
        bVar1 = true;
        uVar4 = (uint)*(ushort *)(param_1 + 0x22);
        *(undefined4 *)(param_1 + 0xc) = uVar3;
      }
      else {
        uVar9 = uVar9 + 1;
      }
    } while (uVar9 < (uVar4 & 0x1ff) >> 3);
    if (((sVar12 != 0) && (bVar1)) && (*DAT_2c603b40 != '\0')) {
      FUN_2c603540(param_1,uVar10,0xffff,param_4);
      return;
    }
  }
  return;
}

