/* FUN_10083700 @ 0x10083700 */

undefined4 FUN_10083700(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 8;
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == -1) {
    FUN_100a5b78(DAT_10083740 | (DAT_1008373c - DAT_10083738) * 0x20 & 0xff00U,DAT_10083748,
                 DAT_10083744);
    uVar1 = 0xffffffff;
  }
  else {
    FUN_100836b8(iVar2,*(undefined4 *)(param_1 + 0x2c),1);
    uVar1 = 0;
  }
  return uVar1;
}

