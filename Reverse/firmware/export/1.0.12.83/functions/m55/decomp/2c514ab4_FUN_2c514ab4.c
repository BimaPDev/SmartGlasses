/* FUN_2c514ab4 @ 0x2c514ab4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c514ab4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  iVar5 = *(int *)(param_1 + 4);
  iVar4 = iVar5 + 0x18;
  uVar7 = *(undefined4 *)(iVar5 + 0xc);
  if (*(char *)(*(int *)(iVar5 + 0x14) + 4) == '\0') {
    func_0x2c516b58(iVar4,2);
    func_0x2c516b58(iVar4,1);
    pcVar6 = *(char **)(*(int *)(param_1 + 4) + 0x10);
    if (*pcVar6 == '\x01') goto LAB_2c514ba4;
LAB_2c514ae6:
    if (pcVar6[2] == '\x01') {
      func_0x2c516a88(iVar4);
      func_0x2c516324(iVar5 + 0x34,_LAB_2c514be4);
    }
    else {
      func_0x2c516aa4();
    }
  }
  else {
    func_0x2c516adc(iVar4);
    pcVar6 = *(char **)(*(int *)(param_1 + 4) + 0x10);
    if (*pcVar6 != '\x01') goto LAB_2c514ae6;
LAB_2c514ba4:
    func_0x2c516a88(iVar4);
    func_0x2c516324(iVar5 + 0x34,_LAB_2c514be0);
  }
  FUN_2c5169a8(iVar4);
  iVar2 = FUN_2c510a30(*(undefined4 *)(iVar5 + 0x1c));
  if (iVar2 == 0) {
    iVar2 = func_0x2c51773c(iVar5 + 0x1dc);
    if (iVar2 != 0) {
      FUN_2c514738(*(undefined4 *)(param_1 + 4));
      func_0x2c516a18(iVar4);
    }
  }
  else {
    FUN_2c516a34(iVar4);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    func_0x2c516a6c(iVar4);
  }
  else {
    FUN_2c516a50();
  }
  func_0x2c5169e0(iVar4);
  uVar3 = FUN_2c511f90();
  if (pcVar6[1] != '\x02') {
    uVar7 = FUN_2c5115bc(uVar7);
    iVar4 = FUN_2c512360(uVar3,uVar7);
    if (iVar4 != 0) {
      uVar3 = *(undefined4 *)(iVar5 + 0x20);
      uVar7 = FUN_2c5e2e8c(_LAB_2c514bd8);
      func_0x2c626d14(uVar3,uVar7);
      cVar1 = pcVar6[4];
      goto joined_r0x2c514b84;
    }
  }
  uVar3 = *(undefined4 *)(iVar5 + 0x20);
  uVar7 = FUN_2c5e2e8c(_LAB_2c514bd4);
  func_0x2c626d14(uVar3,uVar7);
  cVar1 = pcVar6[4];
joined_r0x2c514b84:
  if (cVar1 == '\v') {
    registry_lookup(_LAB_2c514bdc);
  }
  else {
    if (cVar1 != '\x12') {
      return;
    }
    registry_lookup(_LAB_2c514be8);
  }
  iVar4 = *DAT_2c5e40ac;
  uStack_1c = 0;
  FUN_2c5e4008(&uStack_1c);
  if (*DAT_2c5e40ac != iVar4) {
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return;
}

