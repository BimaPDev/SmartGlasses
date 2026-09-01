/* FUN_10116468 @ 0x10116468 */

int * FUN_10116468(uint param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_r4;
  undefined8 uVar5;
  
  iVar2 = FUN_1013c70e();
  iVar3 = DAT_1011649c;
  if ((iVar2 == 0) && (iVar3 = *(int *)(*(int *)(DAT_10116498 + 8) + 0xb0), iVar3 == 0)) {
    return (int *)0x0;
  }
  if (param_2 < 0xfffffffc) {
    uVar5 = FUN_101132fc(iVar3,param_1 | 4,param_2 + 4,4,0,0,unaff_r4);
    piVar1 = (int *)uVar5;
    if (piVar1 != (int *)0x0) {
      piVar4 = piVar1 + 1;
      *piVar1 = iVar3;
      if (param_1 == 0) {
        return piVar4;
      }
      if (((uint)piVar4 & param_1 - 1) == 0) {
        return piVar4;
      }
      FUN_10119dc2(DAT_101163e4,DAT_101163e0,DAT_101163dc,0x25,uVar5);
      FUN_10119dc2(DAT_101163e8,piVar4,param_1);
      FUN_1011a1f0(DAT_101163dc,0x25,extraout_r2,param_1 - 1);
      return piVar4;
    }
  }
  return (int *)0x0;
}

