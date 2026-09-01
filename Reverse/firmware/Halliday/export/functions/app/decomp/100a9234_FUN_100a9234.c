/* FUN_100a9234 @ 0x100a9234 */

void FUN_100a9234(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_24 [2];
  undefined2 local_22;
  int local_1c;
  
  iVar1 = FUN_100a7d8c();
  if (iVar1 != param_2) {
    FUN_100a5b78((DAT_100a928c - DAT_100a9288) * 0x20 & 0xff00U | 0x940032,DAT_100a9294,DAT_100a9290
                 ,iVar1,param_2);
    FUN_1011ea48(auStack_24,0,0x14);
    iVar1 = FUN_1009e224();
    local_22 = 0x281c;
    if (iVar1 != 0) {
      local_1c = param_2;
      FUN_1009ece8(iVar1,auStack_24);
    }
  }
  return;
}

