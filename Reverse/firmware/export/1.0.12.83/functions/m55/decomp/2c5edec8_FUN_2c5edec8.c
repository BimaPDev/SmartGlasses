/* FUN_2c5edec8 @ 0x2c5edec8 */

void FUN_2c5edec8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 uVar3;
  
  puVar1 = DAT_2c5edef0;
  FUN_2c644044(*DAT_2c5edef0,0xffffffff);
  uVar2 = extraout_r1;
  uVar3 = extraout_r2;
  if (*(int *)(DAT_2c5edef4 + 0x3a8) != 0) {
    FUN_2c5eef94(*(int *)(DAT_2c5edef4 + 0x3a8),param_1);
    uVar2 = extraout_r1_00;
    uVar3 = extraout_r2_00;
  }
  FUN_2c644080(*puVar1,uVar2,uVar3,param_4);
  return;
}

