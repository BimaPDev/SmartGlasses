/* FUN_100ed7c8 @ 0x100ed7c8 */

int FUN_100ed7c8(uint param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  
  iVar1 = DAT_100ed87c;
  if (param_1 < 3) {
    pcVar2 = *(code **)(param_1 * 0x24 + DAT_100ed87c + 0x10);
    if (pcVar2 == (code *)0x0) {
      iVar3 = FUN_100ed61c(param_1,param_3,param_4);
      if ((iVar3 != 0) && (param_2 != 0)) {
        FUN_1011ea40(iVar3,param_2,param_3);
      }
      FUN_100ed77c(param_1,param_2);
    }
    else {
      iVar3 = (*pcVar2)(param_2,param_3,DAT_100ed87c,pcVar2,param_1,param_2,param_3);
    }
    if (iVar3 == 0) {
      FUN_100a5b78((DAT_100ed870 - DAT_100ed86c) * 0x20 & 0xff00U | 0xf80013,DAT_100ed878,
                   DAT_100ed880,*(undefined4 *)(iVar1 + param_1 * 0x24),param_3,param_4);
    }
  }
  else {
    FUN_100a5b78((DAT_100ed870 - DAT_100ed86c) * 0x20 & 0xff00U | 0xdd0013,DAT_100ed878,DAT_100ed874
                 ,param_1,param_3,param_4);
    iVar3 = 0;
  }
  return iVar3;
}

