/* FUN_2c518d04 @ 0x2c518d04 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c518d04(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = _LAB_2c518d48;
  if ((*(byte *)(param_2 + 0x5c) & 7) - 1 < 2) {
    FUN_2c62bea8(*(undefined4 *)(param_2 + 0x58));
    *(undefined4 *)(param_2 + 0x58) = 0;
    iVar5 = _LAB_2c518d48;
    *(byte *)(param_2 + 0x5c) = *(byte *)(param_2 + 0x5c) & 0xf8 | 3;
  }
  piVar2 = (int *)FUN_2c62ca10(DAT_2c62e8e0);
  uVar1 = DAT_2c62e8e0;
  if (piVar2 != (int *)0x0) {
    uVar6 = 0;
    do {
      piVar3 = (int *)FUN_2c62ca20(uVar1,piVar2);
      if (((*piVar2 == param_2) || (param_2 == 0)) && (iVar5 == 0 || piVar2[1] == iVar5)) {
        uVar6 = 1;
        FUN_2c62c998(uVar1,piVar2);
        if ((code *)piVar2[4] != (code *)0x0) {
          (*(code *)piVar2[4])(piVar2);
        }
        FUN_2c62bea8(piVar2);
        *DAT_2c62e8e4 = 1;
        iVar4 = FUN_2c62ca10(uVar1);
        if (iVar4 == 0) {
          FUN_2c62be40(*DAT_2c62e8e8);
        }
        else {
          FUN_2c62be4c(*DAT_2c62e8e8);
        }
      }
      piVar2 = piVar3;
    } while (piVar3 != (int *)0x0);
    return uVar6;
  }
  return 0;
}

