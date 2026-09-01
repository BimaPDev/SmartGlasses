/* FUN_100ae7e8 @ 0x100ae7e8 */

undefined4 FUN_100ae7e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  local_20 = 4;
  uStack_1c = 0x10;
  uStack_18 = param_3;
  uStack_14 = param_4;
  iVar1 = FUN_100ae7a4(&local_20);
  if (iVar1 == 0) {
    FUN_1011ea48(DAT_100ae810,0,0x30);
    uVar2 = DAT_100ae810;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

