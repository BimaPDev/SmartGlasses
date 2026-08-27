/* FUN_1409dd84 @ 0x1409dd84 */

undefined4 FUN_1409dd84(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 8);
  if ((iVar3 == *(int *)(param_2 + 8)) &&
     (uVar2 = (uint)*(byte *)(param_1 + 0x10), *(byte *)(param_2 + 0x10) == uVar2)) {
    uVar1 = DAT_1409de04;
    if ((iVar3 != 1) && (uVar1 = DAT_1409dde4, iVar3 == 2)) {
      uVar1 = DAT_1409dde8;
    }
    uVar4 = DAT_1409ddf0;
    if (uVar2 < 6) {
      uVar4 = *(undefined4 *)(DAT_1409ddec + uVar2 * 4);
    }
    FUN_1402a6e8(4,0xdb,DAT_1409ddfc,DAT_1409ddf8,DAT_1409ddf4,uVar1,param_4,uVar4);
    thunk_FUN_140b4ef4(*DAT_1409de00,param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

