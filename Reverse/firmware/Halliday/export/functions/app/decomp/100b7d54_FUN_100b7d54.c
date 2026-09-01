/* FUN_100b7d54 @ 0x100b7d54 */

undefined4 FUN_100b7d54(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar4 = param_2;
  iVar1 = FUN_101311a2(*(undefined4 *)(param_1 + 0x14));
  uVar2 = (DAT_100b7dac - DAT_100b7da8) * 0x20 & 0xff00;
  FUN_100a5b78(DAT_100b7db0 | uVar2,DAT_100b7db8,DAT_100b7db4,*(undefined4 *)(param_2 + 4),iVar3,
               iVar4,param_3);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != *(int *)(param_2 + 4)) {
      FUN_100a5b78(DAT_100b7dbc | uVar2,DAT_100b7db8,DAT_100b7dc0,*(int *)(iVar1 + 4),
                   *(int *)(param_2 + 4),iVar4,param_3);
      return 0xfffffff0;
    }
  }
  FUN_100b87b8(*(undefined4 *)(param_1 + 0x14),param_2);
  return 0;
}

