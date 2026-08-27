/* FUN_2c635e1c @ 0x2c635e1c */

void FUN_2c635e1c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x30);
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      if ((((int)((uint)*(byte *)(param_1 + 0x36) << 0x1f) < 0) && ((param_2 & 0x80) != 0)) &&
         (uVar2 != 0)) {
        uVar2 = 0;
        do {
          *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar2 * 2) =
               *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar2 * 2) & 0xff7f;
          uVar3 = *(ushort *)(param_1 + 0x30);
          if ((uVar2 != 0xffff) && (uVar2 < uVar3)) {
            FUN_2c6352cc(param_1);
            uVar3 = *(ushort *)(param_1 + 0x30);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar3);
      }
      uVar1 = *(ushort *)(*(int *)(param_1 + 0x2c) + (uint)uVar4 * 2) | param_2;
      *(short *)(*(int *)(param_1 + 0x2c) + (uint)uVar4 * 2) = (short)uVar1;
      if ((uVar4 != 0xffff) && (uVar4 < *(ushort *)(param_1 + 0x30))) {
        FUN_2c6352cc(param_1,uVar4,uVar1,*(ushort *)(param_1 + 0x30),param_4);
      }
      if ((param_2 & 0x200) != 0) {
        FUN_2c600bac(param_1);
      }
      uVar4 = uVar4 + 1;
      uVar2 = *(ushort *)(param_1 + 0x30);
    } while (uVar4 < uVar2);
  }
  return;
}

