/* FUN_2c531520 @ 0x2c531520 */

void FUN_2c531520(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    bVar1 = FUN_2c66c4ec(param_2);
    *(byte *)(param_1 + 0x1c) = bVar1;
    uVar2 = FUN_2c47245c(0,bVar1 + 1);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    iVar3 = FUN_2c66c4ec(param_2);
    FUN_2c674268(uVar2,0,iVar3 + 1);
    FUN_2c6435c4(*(undefined4 *)(param_1 + 0x18),param_2);
    return;
  }
  return;
}

