/* FUN_10018fa0 @ 0x10018fa0 */

int FUN_10018fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *DAT_10018ff0;
  uVar1 = FUN_1012e06e(0x2b,3,param_3,0,param_1);
  uVar2 = FUN_1012e0a2(0x2b,3);
  iVar3 = FUN_100a166c(uVar1,uVar2);
  if ((iVar3 != 0) && (iVar4 = FUN_100a03c0(iVar3,3), iVar4 != 0)) {
    FUN_100a0b00(iVar3);
    iVar3 = 0;
  }
  if (*DAT_10018ff0 != iVar5) {
    FUN_1013cdc0();
  }
  return iVar3;
}

