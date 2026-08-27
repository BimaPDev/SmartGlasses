/* FUN_2c6438b4 @ 0x2c6438b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c6438b4(void)

{
  int iVar1;
  int iVar2;
  
  FUN_2c6741e8(_LAB_2c6439a0,_LAB_2c64399c);
  iVar2 = _LAB_2c6439a4;
  func_0x2c674388(0xc,0);
  FUN_2c6741e8(_LAB_2c6439a0,_LAB_2c6439a8);
  func_0x2c674388(0xd,_LAB_2c6439ac);
  func_0x2c672f84(*(undefined4 *)(iVar2 + 0x14));
  if (*(int *)(iVar2 + 0x18) != *(int *)(iVar2 + 0x14)) {
    FUN_2c6741e8(_LAB_2c6439a0,_LAB_2c6439b0);
    func_0x2c672f84(*(undefined4 *)(iVar2 + 0x18));
  }
  FUN_2c6741e8(_LAB_2c6439a0,_LAB_2c6439b4);
  func_0x2c674388(0xd,_LAB_2c6439b8,0xb);
  for (iVar1 = *(int *)(iVar2 + 0x24); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    func_0x2c672f84(iVar1);
  }
  FUN_2c6741e8(_LAB_2c6439a0,_LAB_2c6439bc);
  func_0x2c674388(0xd,_LAB_2c6439c0,0xb);
  for (iVar1 = *(int *)(iVar2 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    func_0x2c672f84(iVar1);
  }
  func_0x2c674388(0xe,0);
  func_0x2c674388(0xf,0);
  FUN_2c6741e8(_LAB_2c6439a0,_LAB_2c6439c4);
  for (iVar1 = *(int *)(iVar2 + 0x30); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    func_0x2c672f84(iVar1);
  }
  FUN_2c6741e8(_LAB_2c6439a0,_LAB_2c6439c8);
  for (iVar2 = *(int *)(iVar2 + 0x34); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
    func_0x2c672f84(iVar2);
  }
  func_0x2c673884();
  FUN_2c6741e8(_LAB_2c6439d0,_LAB_2c6439cc);
  func_0x2c67372c();
                    /* WARNING: Could not recover jumptable at 0x2c6741f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_2c6741f4)(_LAB_2c6439d0,_LAB_2c6439cc);
  return;
}

