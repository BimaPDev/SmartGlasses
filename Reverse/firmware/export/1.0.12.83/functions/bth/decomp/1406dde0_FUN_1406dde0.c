/* FUN_1406dde0 @ 0x1406dde0 */

void FUN_1406dde0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = DAT_1406defc;
  if (param_1 == 2) {
    FUN_140e5658(DAT_1406defc,0,0x34);
    uVar3 = DAT_1406df00;
    iVar2 = DAT_1406defc;
    *(undefined1 *)(iVar1 + 0x31) = 10;
    FUN_14072a3c(iVar2,uVar3);
    FUN_14072a3c(DAT_1406df08,DAT_1406df04);
    return;
  }
  if (param_1 != 3) {
    if (param_1 != 1) {
      return;
    }
    FUN_140746c8(1,DAT_1406df0c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1402a64c(0x44,DAT_1406df14,0x180,DAT_1406df10,0xc0,0x90);
}

