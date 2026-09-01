/* FUN_100739c8 @ 0x100739c8 */

undefined4
FUN_100739c8(int param_1,undefined4 param_2,uint param_3,int param_4,int param_5,uint param_6)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = 0x20;
  while( true ) {
    if ((int)param_6 < 1) {
      return 0;
    }
    if ((int)param_6 < 0x20) {
      uVar3 = param_6;
    }
    pcVar2 = *(code **)(*(int *)(param_1 + 8) + 4);
    iVar1 = (*pcVar2)(param_1,pcVar2,param_3,param_4,param_5);
    if (iVar1 < 0) break;
    bVar4 = CARRY4(param_3,uVar3);
    param_3 = param_3 + uVar3;
    param_4 = param_4 + ((int)uVar3 >> 0x1f) + (uint)bVar4;
    param_5 = param_5 + uVar3;
    param_6 = param_6 - uVar3;
  }
  FUN_100a5b78((DAT_10073a44 - DAT_10073a40) * 0x20 & 0xff00U | 0x10c0014,DAT_10073a4c,DAT_10073a48,
               iVar1,param_3,param_4,param_5,param_6);
  return 0xfffffffb;
}

