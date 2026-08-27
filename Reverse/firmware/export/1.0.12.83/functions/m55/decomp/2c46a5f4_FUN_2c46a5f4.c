/* FUN_2c46a5f4 @ 0x2c46a5f4 */

int FUN_2c46a5f4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_2c6685b4(1,0x30);
  if (iVar1 != 0) {
    iVar2 = FUN_2c6685b4(param_1,0x10);
    *(int *)(iVar1 + 0x28) = iVar2;
    if (iVar2 == 0) {
      FUN_2c669588(iVar1);
      iVar1 = 0;
    }
    else {
      uVar3 = FUN_2c46a45c();
      *(undefined4 *)(iVar1 + 4) = uVar3;
      *(undefined4 *)(iVar1 + 8) = param_1;
      iVar2 = *(int *)(iVar1 + 0xc);
      if (-1 < *(int *)(iVar1 + 0xc)) {
        do {
          iVar4 = iVar2 + -1;
          FUN_2c46a5bc(iVar1,iVar2);
          iVar2 = iVar4;
        } while (iVar4 != -1);
      }
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined1 *)(iVar1 + 0x1c) = 0;
    }
  }
  return iVar1;
}

