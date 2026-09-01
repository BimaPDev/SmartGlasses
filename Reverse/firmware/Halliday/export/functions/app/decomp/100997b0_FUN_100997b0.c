/* FUN_100997b0 @ 0x100997b0 */

int FUN_100997b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar3 = *(int *)(param_1 + 0x38);
  if (*(int *)(param_1 + 0x38) == 0) {
    iStack_18 = param_1;
    uStack_14 = param_2;
    uStack_10 = param_3;
    uStack_c = param_4;
    uVar1 = FUN_1012c296();
    iVar2 = FUN_100927e8(uVar1,&iStack_18,0x2022,0);
    iVar3 = DAT_100997d8;
    if (iVar2 == 0) {
      iVar3 = DAT_100997dc;
    }
  }
  return iVar3;
}

