/* FUN_10122d32 @ 0x10122d32 */

undefined4 FUN_10122d32(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = param_1[0xc] + 0x20;
  if (param_1[0xe] == 0) {
    return 4;
  }
  pcVar4 = (char *)*param_1;
  if (*pcVar4 == '\x04') {
    uVar3 = 0x10000000;
  }
  else {
    uVar3 = 0x200000;
  }
  if (uVar3 <= uVar6) {
    return 4;
  }
  if ((uVar6 & 0x1ff) == 0) {
    param_1[0xe] = param_1[0xe] + 1;
    if (param_1[0xd] == 0) {
      if ((uint)*(ushort *)(pcVar4 + 8) <= uVar6 >> 5) {
LAB_10122d72:
        param_1[0xe] = 0;
        return 4;
      }
    }
    else if ((*(ushort *)(pcVar4 + 10) - 1 & uVar6 >> 9) == 0) {
      uVar3 = FUN_1012270e();
      if (uVar3 < 2) {
        return 2;
      }
      if (uVar3 == 0xffffffff) {
        return 1;
      }
      if (*(uint *)(pcVar4 + 0x34) <= uVar3) {
        if (param_2 == 0) goto LAB_10122d72;
        uVar3 = FUN_10122b90(param_1,param_1[0xd]);
        if (uVar3 == 0) {
          return 7;
        }
        if (uVar3 == 1) {
          return 2;
        }
        if (uVar3 == 0xffffffff) {
          return 1;
        }
        *(byte *)((int)param_1 + 7) = *(byte *)((int)param_1 + 7) | 4;
        iVar1 = FUN_10122656(pcVar4);
        if (iVar1 != 0) {
          return 1;
        }
        FUN_101222e4(pcVar4 + 0x50,0,0x200);
        uVar2 = FUN_101222f0(pcVar4,uVar3);
        *(undefined4 *)(pcVar4 + 0x4c) = uVar2;
        for (uVar5 = 0; uVar5 < *(ushort *)(pcVar4 + 10); uVar5 = uVar5 + 1) {
          pcVar4[3] = '\x01';
          iVar1 = FUN_1012260a(pcVar4);
          if (iVar1 != 0) {
            return 1;
          }
          *(int *)(pcVar4 + 0x4c) = *(int *)(pcVar4 + 0x4c) + 1;
        }
        *(uint *)(pcVar4 + 0x4c) = *(int *)(pcVar4 + 0x4c) - uVar5;
      }
      param_1[0xd] = uVar3;
      uVar2 = FUN_101222f0(pcVar4,uVar3);
      param_1[0xe] = uVar2;
    }
  }
  param_1[0xc] = uVar6;
  param_1[0xf] = pcVar4 + (uVar6 & 0x1ff) + 0x50;
  return 0;
}

