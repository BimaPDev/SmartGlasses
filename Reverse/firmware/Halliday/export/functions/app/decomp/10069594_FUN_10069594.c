/* FUN_10069594 @ 0x10069594 */

void FUN_10069594(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  undefined1 auStack_64 [64];
  undefined1 local_24;
  
  uVar1 = DAT_1006965c;
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_10069628:
    if (((DAT_10069654[10] == 0) && (*DAT_10069654 != 0)) && ((char)DAT_10069654[0xd] == '\0')) {
      FUN_1006952c(param_1,param_2);
    }
    return;
  }
  uVar3 = 0;
  uVar5 = ((int)PTR_DAT_10069648 - (int)PTR_DAT_1006964c) * 0x20 & 0xff00U | DAT_10069658;
  pbVar6 = (byte *)(param_1 + -1);
  iVar4 = param_2;
LAB_100695c6:
  pbVar6 = pbVar6 + 1;
  iVar2 = FUN_10119cb8(*pbVar6 >> 4,auStack_64 + uVar3);
  if ((-1 < iVar2) && (iVar2 = FUN_10119cb8(*pbVar6 & 0xf,auStack_64 + uVar3 + 1), -1 < iVar2)) {
    uVar3 = uVar3 + 2 & 0xff;
    iVar4 = iVar4 + -1;
    if (uVar3 < 0x40) goto code_r0x100695fc;
    if (uVar3 == 0x40) goto LAB_10069600;
    local_24 = 0;
    goto LAB_1006960a;
  }
  goto LAB_10069628;
code_r0x100695fc:
  if (iVar4 == 0) {
LAB_10069600:
    auStack_64[uVar3] = 0;
LAB_1006960a:
    FUN_100a5b78(uVar5,PTR_s_coredump_logging_backend_buffer__10069650,uVar1,auStack_64);
    if (iVar4 == 0) goto LAB_10069628;
    uVar3 = 0;
  }
  goto LAB_100695c6;
}

