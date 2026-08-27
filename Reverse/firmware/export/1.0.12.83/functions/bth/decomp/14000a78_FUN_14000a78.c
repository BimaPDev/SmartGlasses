/* FUN_14000a78 @ 0x14000a78 */

int FUN_14000a78(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  param_1 = param_1 & 0x3ffffff;
  if (*(uint *)(DAT_14000b60 + 4) <= param_1) {
    return 0xb;
  }
  if (*(uint *)(DAT_14000b60 + 4) - param_1 < param_3) {
    return 0xc;
  }
  uVar5 = *(uint *)(DAT_14000b60 + 8);
  iVar3 = FUN_14002240(0,param_4);
  if (iVar3 == 0) {
    if (param_3 == 0) {
      FUN_140022ac(0,param_4,0);
      iVar3 = 0;
    }
    else {
      do {
        uVar6 = uVar5;
        if (param_3 <= uVar5) {
          uVar6 = param_3;
        }
        uVar4 = uVar5 - (param_1 & uVar5 - 1);
        if (uVar6 <= uVar4) {
          uVar4 = uVar6;
        }
        iVar3 = FUN_140028c8(0,param_1,param_2,uVar4,param_4);
        param_3 = param_3 - uVar4;
        param_1 = param_1 + uVar4;
        param_2 = param_2 + uVar4;
      } while ((param_3 != 0) && (iVar3 == 0));
      FUN_140022ac(0,param_4);
      if (iVar3 == 1) {
        *DAT_14000b50 = 4;
        goto LAB_14000b26;
      }
    }
    *DAT_14000b50 = 0;
    return iVar3;
  }
  FUN_140022ac(0,param_4,iVar3);
  *DAT_14000b50 = 3;
LAB_14000b26:
  piVar1 = DAT_14000b58;
  *DAT_14000b54 = param_1;
  puVar2 = DAT_14000b5c;
  *piVar1 = param_2;
  *puVar2 = param_3;
  return 1;
}

