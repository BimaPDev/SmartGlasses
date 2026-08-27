/* FUN_2c4b5e28 @ 0x2c4b5e28 */

undefined4 FUN_2c4b5e28(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  byte *pbVar3;
  byte bVar4;
  
  pbVar3 = DAT_2c4b5e6c;
  if (param_1 == 0) {
    if ((DAT_2c4b5e6c[0xc] == 0) && (DAT_2c4b5e6c[0x28] == 0)) {
      bVar1 = *DAT_2c4b5e6c;
      bVar4 = bVar1 & 0xfe;
      *DAT_2c4b5e6c = bVar4;
      if ((bVar1 & 0xfe) == 0) {
        FUN_2c4b8258();
        uVar2 = *(undefined2 *)(pbVar3 + 2);
        FUN_2c674268(pbVar3,bVar4,0x98);
        *(undefined2 *)(pbVar3 + 2) = uVar2;
        FUN_2c4b6c48();
      }
    }
    return 0;
  }
  FUN_2c4b5510(param_1,1);
  return 0;
}

