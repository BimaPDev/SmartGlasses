/* FUN_1011d5fa @ 0x1011d5fa */

undefined4 FUN_1011d5fa(int param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    if (param_3 == 0) {
      return 1;
    }
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1 + 0x50);
      if (iVar1 != 0 || *(int *)(param_1 + 0x54) != 0) {
        iVar5 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x50) = iVar1 + -1;
        *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + -1 + (uint)(iVar1 != 0);
        if (iVar5 != 0) {
          uVar4 = 0x10 - iVar5;
          iVar1 = iVar5 + 0x30 + param_1;
          if (param_3 < uVar4) {
            FUN_1011c59a(iVar1,param_3,param_2,param_3);
            *(uint *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + param_3;
            return 1;
          }
          FUN_1011c59a(iVar1,uVar4,param_2,uVar4);
          *(undefined4 *)(param_1 + 0x44) = 0;
          param_3 = (param_3 - 0x10) + iVar5;
          param_2 = param_2 + uVar4;
          pbVar3 = (byte *)(param_1 + -1);
          do {
            pbVar2 = pbVar3 + 1;
            *pbVar2 = *pbVar2 ^ pbVar3[0x31];
            pbVar3 = pbVar2;
          } while (pbVar2 != (byte *)(param_1 + 0xf));
          FUN_10063738(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
        }
        for (; 0x10 < param_3; param_3 = param_3 - 0x10) {
          pbVar3 = (byte *)(param_1 + -1);
          pbVar2 = (byte *)(param_2 + -1);
          do {
            pbVar3 = pbVar3 + 1;
            pbVar2 = pbVar2 + 1;
            *pbVar3 = *pbVar3 ^ *pbVar2;
          } while (pbVar3 != (byte *)(param_1 + 0xf));
          FUN_10063738(param_1,param_1,*(undefined4 *)(param_1 + 0x48));
          param_2 = param_2 + 0x10;
        }
        if (param_3 == 0) {
          return 1;
        }
        FUN_1011c59a(param_1 + 0x30,param_3,param_2,param_3);
        *(uint *)(param_1 + 0x44) = param_3;
        return 1;
      }
    }
  }
  return 0;
}

