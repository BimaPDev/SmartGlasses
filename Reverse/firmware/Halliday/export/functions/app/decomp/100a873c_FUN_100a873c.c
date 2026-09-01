/* FUN_100a873c @ 0x100a873c */

undefined4 FUN_100a873c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_10117c88(DAT_100a87e0,0x263,DAT_100a87dc,DAT_100a87d8);
  }
  FUN_100a8710(param_1,0);
  if (-1 < (int)((uint)*(byte *)(param_1 + 9) << 0x1e)) {
    iVar1 = FUN_1012d608(*(undefined4 *)(param_1 + 0x18));
    if ((int)(uint)*(ushort *)(param_1 + 0x10) <= iVar1) {
      FUN_10114a38();
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(1,*(undefined4 *)(param_1 + 0x2c));
      }
      *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
      FUN_10064624(*(undefined4 *)(param_1 + 0x24));
      FUN_100a0654(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),
                   *(undefined2 *)(param_1 + 0x10));
      *(uint *)(param_1 + 0x60) = (uint)*(ushort *)(param_1 + 0x10) / (uint)*(byte *)(param_1 + 7);
      *(undefined4 *)(param_1 + 100) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      if ((*(int *)(param_1 + 0x58) != 0) && ((*(byte *)(param_1 + 9) & 0x60) == 0x20)) {
        FUN_1012f50e(*(int *)(param_1 + 0x58),param_1 + 0x14);
      }
      if ((int)((uint)*(byte *)(param_1 + 5) << 0x1c) < 0) {
        FUN_100643d4();
      }
      else {
        FUN_10064404(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x14),
                     *(undefined2 *)(param_1 + 0x10));
      }
      FUN_101150e0();
    }
  }
  return 0;
}

