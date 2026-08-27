/* FUN_2c514ca4 @ 0x2c514ca4 */

/* WARNING: Possible PIC construction at 0x2c514cf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x2c514cf4) */
/* WARNING: Removing unreachable block (ram,0x2c516b08) */
/* WARNING: Removing unreachable block (ram,0x2c516b30) */

void FUN_2c514ca4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_2c514bec(*(undefined4 *)(param_1 + 4));
  iVar3 = *(int *)(param_1 + 4);
  iVar1 = iVar3 + 0x18;
  func_0x2c5169c4(iVar1);
  func_0x2c5169fc(iVar1);
  FUN_2c516a34(iVar1);
  func_0x2c516aa4(iVar1);
  func_0x2c516768(iVar3 + 0x104);
  func_0x2c516768(iVar3 + 0xa4);
  if (*(char *)(param_1 + 8) != '\0') {
    func_0x2c516b58(iVar1,2);
    func_0x2c516b58(iVar1,1);
    func_0x2c516bb8(iVar1);
    FUN_2c516a50(iVar1);
    return;
  }
  func_0x2c516bc0(iVar1);
  func_0x2c516a6c(iVar1);
  uVar2 = *(undefined4 *)(iVar3 + 0x104);
  iVar1 = FUN_2c606b94(uVar2,1);
  if (iVar1 != 0) {
    FUN_2c606abc(uVar2,1);
    return;
  }
  return;
}

