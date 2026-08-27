/* FUN_2c47ab40 @ 0x2c47ab40 */

undefined4 FUN_2c47ab40(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_2c47ab8c;
  puVar2 = (undefined4 *)FUN_2c6442f0(*DAT_2c47ab8c,0);
  if (puVar2 != (undefined4 *)0x0) {
    uVar3 = *puVar1;
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
    uVar3 = FUN_2c6442fc(uVar3);
    return uVar3;
  }
  FUN_2c6741e8(0x713,DAT_2c47ab94,DAT_2c47ab90,*param_1,param_1[1]);
  return 0xffffffff;
}

