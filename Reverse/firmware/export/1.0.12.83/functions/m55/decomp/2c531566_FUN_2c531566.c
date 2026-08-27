/* FUN_2c531566 @ 0x2c531566 */

void FUN_2c531566(undefined1 *param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 != 0) {
    uVar4 = FUN_2c66c4ec(param_2);
    if (0x13 < uVar4) {
      uVar4 = 0x14;
    }
    *param_1 = (char)uVar4;
    FUN_2c66c568(param_1 + 1,param_2);
  }
  if (param_1 != (undefined1 *)0x0) {
    if (param_3 != 0) {
      bVar1 = FUN_2c66c4ec(param_3);
      param_1[0x1c] = bVar1;
      uVar2 = FUN_2c47245c(0,bVar1 + 1);
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      iVar3 = FUN_2c66c4ec(param_3);
      FUN_2c674268(uVar2,0,iVar3 + 1);
      FUN_2c6435c4(*(undefined4 *)(param_1 + 0x18),param_3);
      return;
    }
    return;
  }
  return;
}

