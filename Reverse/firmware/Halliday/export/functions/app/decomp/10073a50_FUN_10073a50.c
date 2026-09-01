/* FUN_10073a50 @ 0x10073a50 */

undefined4
FUN_10073a50(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = 0x100;
  while( true ) {
    if ((int)param_6 < 1) {
      return 0;
    }
    if ((int)param_6 < 0x100) {
      uVar2 = param_6;
    }
    iVar1 = (*(code *)**(undefined4 **)(param_1 + 8))
                      (param_1,(code *)**(undefined4 **)(param_1 + 8),param_3,param_4,param_5);
    if (iVar1 < 0) break;
    bVar3 = CARRY4(param_3,uVar2);
    param_3 = param_3 + uVar2;
    param_4 = param_4 + ((int)uVar2 >> 0x1f) + (uint)bVar3;
    param_5 = param_5 + uVar2;
    param_6 = param_6 - uVar2;
  }
  FUN_100a5b78(DAT_10073ad0 | (DAT_10073acc - DAT_10073ac8) * 0x20 & 0xff00U,DAT_10073ad8,
               DAT_10073ad4,iVar1,param_3,param_4,param_5,param_6);
  return 0xfffffffb;
}

