/* FUN_1000bd1c @ 0x1000bd1c */

void FUN_1000bd1c(int param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *DAT_1000bd64;
  iVar3 = (**(code **)(param_1 + 0x10))
                    (param_2 + 1,5,200,*(code **)(param_1 + 0x10),param_1,iVar5,param_3);
  if ((iVar3 == 5) &&
     (bVar1 = *(byte *)(param_2 + 5), uVar4 = FUN_1005393c(0,param_2,5), bVar1 == uVar4))
  goto LAB_1000bd5a;
  uVar2 = 10;
  while( true ) {
    if (*DAT_1000bd64 == iVar5) break;
    FUN_1013cdc0(uVar2);
LAB_1000bd5a:
    uVar2 = 0;
  }
  return;
}

