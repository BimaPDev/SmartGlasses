/* FUN_100ed6b8 @ 0x100ed6b8 */

int FUN_100ed6b8(uint param_1,uint param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = DAT_100ed778;
  if (param_3 != 0) {
    if (param_1 < 3) {
      pcVar3 = *(code **)(DAT_100ed778 + param_1 * 0x24 + 0xc);
      if (pcVar3 != (code *)0x0) {
        if ((param_2 - 1 & param_2) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_10117c88(DAT_100ed770,0xc5,DAT_100ed76c,DAT_100ed768);
        }
        iVar2 = (*pcVar3)(param_2,param_3,param_2 - 1,pcVar3,param_1,param_2,param_3,param_4);
        if (iVar2 == 0) {
          FUN_100a5b78((DAT_100ed75c - DAT_100ed758) * 0x20 & 0xff00U | 0xd30014,DAT_100ed764,
                       DAT_100ed774,*(undefined4 *)(iVar1 + param_1 * 0x24),param_2,param_3,param_4)
          ;
          return 0;
        }
        return iVar2;
      }
    }
    FUN_100a5b78((DAT_100ed75c - DAT_100ed758) * 0x20 & 0xff00U | 0xc00014,DAT_100ed764,DAT_100ed760
                 ,param_1,param_2,param_3,param_4);
  }
  return 0;
}

