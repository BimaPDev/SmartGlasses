/* FUN_2c5e91b8 @ 0x2c5e91b8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_2c5e91b8(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_2c62c45c(0x44);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c62c82c(3,_LAB_2c5e9280,0x41,_LAB_2c5e927c,_LAB_2c5e9284);
  }
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_2 + 4);
  cVar1 = *(char *)(param_2 + 0x28);
  *(char *)(iVar2 + 0x28) = cVar1;
  if (cVar1 == '\0') {
    uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 8));
    *(undefined4 *)(iVar2 + 8) = uVar3;
    uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0xc));
    *(undefined4 *)(iVar2 + 0xc) = uVar3;
    uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x10));
    *(undefined4 *)(iVar2 + 0x10) = uVar3;
  }
  else {
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  }
  uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x14));
  *(undefined4 *)(iVar2 + 0x14) = uVar3;
  uVar3 = func_0x2c5e949c(*(undefined4 *)(param_2 + 0x18));
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined1 *)(iVar2 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  *(undefined1 *)(iVar2 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  iVar2 = FUN_2c5e7fe4(iVar2);
  if (iVar2 != 0) {
    func_0x2c5e6abc(4);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c62c82c(3,_LAB_2c5e9280,0x56,_LAB_2c5e927c,_LAB_2c5e9278);
}

