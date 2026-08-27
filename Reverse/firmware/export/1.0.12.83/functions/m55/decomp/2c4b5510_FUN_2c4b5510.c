/* FUN_2c4b5510 @ 0x2c4b5510 */

void FUN_2c4b5510(int param_1,byte param_2)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  
  pbVar3 = DAT_2c4b554c;
  bVar1 = *DAT_2c4b554c;
  *DAT_2c4b554c = bVar1 & ~param_2;
  if (param_1 == 0) {
    if ((bVar1 & ~param_2) != 0) {
      return;
    }
    FUN_2c4b8258();
    uVar2 = *(undefined2 *)(pbVar3 + 2);
    FUN_2c674268(pbVar3,0,0x98);
    *(undefined2 *)(pbVar3 + 2) = uVar2;
  }
  else if (param_1 == 2) {
    FUN_2c4b82bc();
    FUN_2c4b6c48();
    return;
  }
  FUN_2c4b6c48();
  return;
}

