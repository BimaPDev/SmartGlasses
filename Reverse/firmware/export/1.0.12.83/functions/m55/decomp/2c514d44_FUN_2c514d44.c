/* FUN_2c514d44 @ 0x2c514d44 */

/* WARNING: Possible PIC construction at 0x2c514d7a: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c514d7e) */
/* WARNING: Removing unreachable block (ram,0x2c516b30) */
/* WARNING: Removing unreachable block (ram,0x2c516b08) */
/* WARNING: Removing unreachable block (ram,0x2c606b46) */

void FUN_2c514d44(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  iVar4 = iVar3 + 0x18;
  func_0x2c5169c4(iVar4);
  func_0x2c5169fc(iVar4);
  FUN_2c516a34(iVar4);
  func_0x2c516a6c(iVar4);
  func_0x2c516aa4(iVar4);
  if (*(char *)(*(int *)(*(int *)(param_1 + 4) + 0x14) + 4) != '\0') {
    func_0x2c516bec(iVar4);
    iVar4 = *(int *)(iVar3 + 0x28);
    iVar3 = FUN_2c606b94(iVar4,1);
    if (iVar3 == 0) {
      return;
    }
    iVar2 = *DAT_2c606b68;
    iVar3 = FUN_2c607214();
    *(uint *)(iVar4 + 0x1c) = *(uint *)(iVar4 + 0x1c) & 0xfffffffe;
    FUN_2c607df0(iVar4);
    iVar1 = FUN_2c607214(iVar4);
    if (iVar1 != 0) {
      FUN_2c6041d4(iVar4);
      FUN_2c607248();
      FUN_2c607248(iVar4);
    }
    iVar1 = FUN_2c607214(iVar4);
    if (iVar1 == iVar3) {
      if (*DAT_2c606b68 == iVar2) {
        return;
      }
    }
    else {
      FUN_2c6041d4(iVar4);
      if (*DAT_2c606b68 == iVar2) {
        FUN_2c607248();
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  FUN_2c514bec();
  uVar5 = *(undefined4 *)(iVar3 + 0x104);
  iVar3 = FUN_2c606b94(uVar5,1);
  if (iVar3 != 0) {
    FUN_2c606abc(uVar5,1);
    return;
  }
  return;
}

