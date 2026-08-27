/* FUN_14095d38 @ 0x14095d38 */

undefined4 FUN_14095d38(byte param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 2) {
    uVar1 = *(undefined4 *)(DAT_140863ec + (uint)param_1 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

