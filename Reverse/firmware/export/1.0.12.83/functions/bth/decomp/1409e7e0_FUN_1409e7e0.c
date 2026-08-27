/* FUN_1409e7e0 @ 0x1409e7e0 */

undefined4 FUN_1409e7e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_140e53b8(*DAT_1409e844);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      uVar2 = param_2[5];
      uVar3 = param_2[6];
      puVar1[4] = param_2[4];
      puVar1[5] = uVar2;
      puVar1[6] = uVar3;
      uVar2 = FUN_140b4e20(param_1);
      return uVar2;
    }
    FUN_1402a6e8(4,0x3f,DAT_1409e850,DAT_1409e84c,DAT_1409e848);
  }
  return 0;
}

