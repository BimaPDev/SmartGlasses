/* FUN_100ff238 @ 0x100ff238 */

int FUN_100ff238(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(param_1 + 0x204))(param_1,DAT_100ff2c4,param_2,0);
  if (iVar1 == 0) {
    iVar2 = FUN_100fb104(param_2,DAT_100ff2c8);
    iVar1 = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x10a) = 0;
      *(undefined4 *)(param_1 + 0x10e) = 0;
      *(undefined4 *)(param_1 + 0x112) = 0;
      *(undefined4 *)(param_1 + 0x116) = 0;
      *(undefined4 *)(param_1 + 0x11a) = 0;
      *(undefined4 *)(param_1 + 0x11e) = 0;
      *(undefined2 *)(param_1 + 0x122) = 0;
      if ((0xffff < *(int *)(param_1 + 0x104)) &&
         (iVar1 = FUN_100fb104(param_2,DAT_100ff2cc,param_1 + 0x104), iVar1 == 0)) {
        if (*(ushort *)(param_1 + 0x118) < 0x40) {
          *(undefined2 *)(param_1 + 0x118) = 0x40;
        }
        iVar1 = iVar2;
        if (0xfffb < *(ushort *)(param_1 + 0x114)) {
          iVar1 = 0;
          *(undefined2 *)(param_1 + 0x114) = 0xfffb;
        }
      }
    }
  }
  return iVar1;
}

