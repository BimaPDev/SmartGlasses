/* FUN_2c66fc0c @ 0x2c66fc0c */

uint FUN_2c66fc0c(undefined4 param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  uint local_14;
  
  piVar6 = param_2;
  local_14 = param_4;
  if ((0 < param_2[1]) || (iVar1 = FUN_2c66b23c(), iVar1 == 0)) {
    iVar1 = FUN_2c669488();
    if (iVar1 == 1) {
      pbVar5 = (byte *)*param_2;
      *param_2 = (int)(pbVar5 + 1);
      uVar4 = (uint)*pbVar5;
      iVar1 = param_2[1];
LAB_2c66fc70:
      param_2[1] = iVar1 + -1;
      return uVar4;
    }
    do {
      iVar2 = FUN_2c669598(param_1,&local_14,*param_2,param_2[1],param_2 + 0x17,piVar6,param_3);
      if (iVar2 == -1) break;
      if (iVar2 != -2) {
        iVar1 = param_2[1];
        if (iVar2 != 0) {
          *param_2 = *param_2 + iVar2;
          param_2[1] = iVar1 - iVar2;
          return local_14;
        }
        *param_2 = *param_2 + 1;
        uVar4 = 0;
        goto LAB_2c66fc70;
      }
      iVar1 = FUN_2c66b23c(param_1,param_2);
    } while (iVar1 == 0);
    *(ushort *)(param_2 + 3) = *(ushort *)(param_2 + 3) | 0x40;
    puVar3 = (undefined4 *)FUN_2c6685e0();
    *puVar3 = 0x8a;
  }
  return 0xffffffff;
}

