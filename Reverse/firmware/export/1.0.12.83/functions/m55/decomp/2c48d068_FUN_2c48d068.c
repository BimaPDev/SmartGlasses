/* FUN_2c48d068 @ 0x2c48d068 */

uint FUN_2c48d068(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  
  puVar1 = DAT_2c48d0a0;
  FUN_2c644044(*DAT_2c48d0a0,0xffffffff,param_3,param_4,param_4);
  uVar3 = *DAT_2c48d0a4;
  if (uVar3 < 0x100000) {
    uVar2 = *puVar1;
    *DAT_2c48d0a4 = uVar3 + 1;
    FUN_2c644080(uVar2);
    return uVar3;
  }
  uVar2 = *puVar1;
  *DAT_2c48d0a4 = 1;
  FUN_2c644080(uVar2);
  return 0;
}

