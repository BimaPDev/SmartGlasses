/* FUN_100dfd90 @ 0x100dfd90 */

undefined4 FUN_100dfd90(byte *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  
  puVar1 = DAT_100dfdc4;
  if ((*param_1 - 1 < 0x1e) && (*(int *)(param_1 + 4) != 0)) {
    for (pbVar3 = (byte *)*DAT_100dfdc4; pbVar3 != (byte *)0x0; pbVar3 = *(byte **)(pbVar3 + 8)) {
      if ((uint)*pbVar3 == (uint)*param_1) {
        return 0xffffff90;
      }
    }
    *(byte **)(param_1 + 8) = (byte *)*DAT_100dfdc4;
    *puVar1 = param_1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffea;
  }
  return uVar2;
}

