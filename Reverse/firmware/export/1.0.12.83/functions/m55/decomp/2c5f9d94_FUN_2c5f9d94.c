/* FUN_2c5f9d94 @ 0x2c5f9d94 */

undefined4 FUN_2c5f9d94(int param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *(ushort *)(param_1 + 0x34);
  if (param_2 != uVar1) {
    uVar2 = (undefined2)param_2;
    *(undefined2 *)(param_1 + 0x34) = uVar2;
    iVar3 = FUN_2c5f9c60(*(undefined4 *)(param_1 + 0xc),param_1);
    *(ushort *)(param_1 + 0x34) = uVar1 & 0xff;
    uVar4 = 0;
    if (iVar3 != 0) {
      if (((char)uVar1 == '\v') || ((char)uVar1 == '\b')) {
        uVar4 = 1;
        *(undefined2 *)(param_1 + 0x34) = uVar2;
      }
      else {
        FUN_2c5f9b48(param_1);
        uVar4 = 1;
        *(undefined2 *)(param_1 + 0x34) = uVar2;
      }
    }
    return uVar4;
  }
  return 1;
}

