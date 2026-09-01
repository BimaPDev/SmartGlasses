/* FUN_100a9ab8 @ 0x100a9ab8 */

void FUN_100a9ab8(undefined1 param_1)

{
  int iVar1;
  
  FUN_1011dbf4(DAT_100a9b00,0xffffffff);
  iVar1 = *DAT_100a9b04;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) == 0) {
      FUN_100a9394(iVar1);
      FUN_100a98c4(iVar1);
    }
    else {
      FUN_100a9314();
      (**(code **)(iVar1 + 8))(*(undefined4 *)(iVar1 + 0xc));
      FUN_1011dbf4(DAT_100a9b00,0xffffffff);
    }
  }
  *DAT_100a9b08 = param_1;
  FUN_100a9314();
  return;
}

