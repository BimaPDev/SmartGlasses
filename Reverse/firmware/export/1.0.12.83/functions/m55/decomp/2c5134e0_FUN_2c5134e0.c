/* FUN_2c5134e0 @ 0x2c5134e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5134e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = *(int *)(param_1 + 4) + 0x18;
  uStack_10 = param_4;
  func_0x2c5169c4(iVar2);
  func_0x2c5169fc(iVar2);
  FUN_2c516a34(iVar2);
  func_0x2c516a6c(iVar2);
  func_0x2c516aa4(iVar2);
  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 4) == '\0') {
    func_0x2c516af8(iVar2,2);
    func_0x2c516af8(iVar2,1);
    cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 4);
  }
  else {
    func_0x2c516bec(iVar2);
    func_0x2c516ac0(iVar2);
    cVar1 = *(char *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 4);
  }
  if (cVar1 == '\v') {
    uStack_18 = registry_lookup(_LAB_2c513560);
  }
  else {
    if (cVar1 != '\x12') {
      return;
    }
    uStack_18 = registry_lookup(_LAB_2c513564);
  }
  iVar2 = *DAT_2c5e40ac;
  uStack_1c = 0;
  uStack_10 = 1;
  uStack_14 = 0;
  FUN_2c5e4008(&uStack_1c);
  if (*DAT_2c5e40ac != iVar2) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

