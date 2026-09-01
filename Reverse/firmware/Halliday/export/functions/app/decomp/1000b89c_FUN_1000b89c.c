/* FUN_1000b89c @ 0x1000b89c */

void FUN_1000b89c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = *DAT_1000b8f0;
  iVar3 = 0;
  uVar4 = param_2;
  uVar5 = param_3;
  FUN_1000bdec();
  do {
    FUN_1000bbb4(param_1,param_2,param_3,1,param_4,uVar4,uVar5);
    iVar1 = FUN_1000bdb4(param_1);
    if ((iVar1 == 0) || (iVar1 != 0xd)) break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < (int)(uint)*(byte *)(param_1 + 7));
  if (*DAT_1000b8f0 != iVar2) {
    FUN_1013cdc0();
  }
  return;
}

