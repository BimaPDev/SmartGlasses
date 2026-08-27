/* FUN_2c5ef5e8 @ 0x2c5ef5e8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_2c5ef5e8(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = _LAB_2c5ef614;
  uVar3 = _LAB_2c5ef610;
  puVar1 = _LAB_2c5ef60c;
  *(undefined1 *)(_LAB_2c5ef60c + 3) = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar3 = FUN_2c62bdd8(uVar2,uVar3,puVar1);
  puVar1[4] = uVar3;
  FUN_2c62be40();
  return puVar1;
}

