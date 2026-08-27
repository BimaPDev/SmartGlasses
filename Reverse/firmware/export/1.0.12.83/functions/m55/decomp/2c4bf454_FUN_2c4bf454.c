/* FUN_2c4bf454 @ 0x2c4bf454 */

undefined4 FUN_2c4bf454(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = FUN_2c6740f8(DAT_2c4bf484);
  uVar2 = DAT_2c4bf48c;
  iVar1 = DAT_2c4bf488;
  if (iVar3 == 0) {
    *(undefined4 *)(DAT_2c4bf488 + 0x1c8) = 0;
    *(undefined4 *)(iVar1 + 0x1f8) = 0x41;
    *(undefined4 *)(iVar1 + 0xf4) = param_1;
    *(undefined4 *)(iVar1 + 0x180) = uVar2;
    *(undefined4 *)(iVar1 + 0x224) = 0;
    return 0;
  }
  return 0xffffffff;
}

