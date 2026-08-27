/* FUN_2c4bb636 @ 0x2c4bb636 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4bb636(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  bool in_ZR;
  bool in_CY;
  
  iVar1 = _LAB_2c4bb65c;
  if (!in_CY || in_ZR) {
    *(undefined4 *)(_LAB_2c4bb658 + param_1 * 4) = param_2;
    uVar3 = _DAT_2c4bb664;
    iVar2 = _LAB_2c4bb660;
    *(undefined4 *)(iVar1 + param_1 * 4) = param_3;
    *(undefined4 *)(iVar2 + param_1 * 4) = uVar3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(_LAB_2c4bb668,param_1);
}

