/* FUN_140bd978 @ 0x140bd978 */

void FUN_140bd978(undefined1 *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 local_18 [4];
  int local_14;
  
  uVar6 = 1;
  local_14 = *DAT_140bd9f4;
  uVar5 = 5;
  puVar1 = param_1;
  do {
    uVar4 = uVar6 & 0xff;
    puVar3 = local_18;
    do {
      uVar2 = uVar4 & 3;
      uVar4 = uVar4 + 1 & 0xff;
      *puVar3 = param_1[uVar2 * 4 + uVar6];
      puVar3 = puVar3 + 1;
    } while (uVar4 != uVar5);
    uVar6 = uVar6 + 1;
    puVar1[1] = local_18[0];
    puVar1[5] = local_18[1];
    puVar1[9] = local_18[2];
    puVar1[0xd] = local_18[3];
    uVar5 = uVar4 + 1 & 0xff;
    puVar1 = puVar1 + 1;
  } while (uVar6 != 4);
  if (*DAT_140bd9f4 == local_14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

