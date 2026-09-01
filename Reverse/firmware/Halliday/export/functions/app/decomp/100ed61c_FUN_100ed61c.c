/* FUN_100ed61c @ 0x100ed61c */

int FUN_100ed61c(uint param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_100ed6b4;
  if (param_2 != 0) {
    if (param_1 < 3) {
      pcVar3 = *(code **)(DAT_100ed6b4 + param_1 * 0x24 + 8);
      if (pcVar3 != (code *)0x0) {
        uVar4 = param_3;
        iVar2 = (*pcVar3)(param_2);
        if (iVar2 == 0) {
          FUN_100a5b78((DAT_100ed6a4 - DAT_100ed6a0) * 0x20 & 0xff00U | 0xb00013,DAT_100ed6ac,
                       DAT_100ed6b0,*(undefined4 *)(iVar1 + param_1 * 0x24),param_2,param_3,uVar4);
          return 0;
        }
        return iVar2;
      }
    }
    FUN_100a5b78((DAT_100ed6a4 - DAT_100ed6a0) * 0x20 & 0xff00U | 0x9e0013,DAT_100ed6ac,DAT_100ed6a8
                 ,param_1,param_2,param_3,param_3);
  }
  return 0;
}

