/* FUN_2c5149f8 @ 0x2c5149f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c5149f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar6 = *(int *)(param_1 + 4);
  iVar4 = iVar6 + 0x18;
  uStack_18 = param_4;
  if (*(char *)(*(int *)(iVar6 + 0x14) + 4) == '\0') {
    func_0x2c516b58(iVar4,2);
    func_0x2c516b58(iVar4,1);
  }
  else {
    func_0x2c516adc(iVar4);
  }
  iVar7 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar7 + 2) == '\x01') {
    func_0x2c516a88(iVar4);
    func_0x2c516324(iVar6 + 0x34,_LAB_2c514aa8);
  }
  else {
    func_0x2c516aa4();
  }
  FUN_2c5169a8(iVar4);
  iVar2 = FUN_2c510a30(*(undefined4 *)(iVar6 + 0x1c));
  if (iVar2 == 0) {
    FUN_2c514738(*(undefined4 *)(param_1 + 4));
    func_0x2c516a18(iVar4);
  }
  else {
    FUN_2c516a34(iVar4);
  }
  func_0x2c516a6c(iVar4);
  func_0x2c5169e0(iVar4);
  uVar5 = *(undefined4 *)(iVar6 + 0x20);
  uVar3 = FUN_2c5e2e8c(_LAB_2c514aa4);
  func_0x2c626d14(uVar5,uVar3);
  cVar1 = *(char *)(iVar7 + 4);
  if (cVar1 == '\v') {
    uStack_18 = registry_lookup(_LAB_2c514aac);
  }
  else {
    if (cVar1 != '\x12') {
      return;
    }
    uStack_18 = registry_lookup(_LAB_2c514ab0);
  }
  iVar4 = *DAT_2c5e40ac;
  uStack_1c = 0;
  FUN_2c5e4008(&uStack_1c);
  if (*DAT_2c5e40ac == iVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail();
}

