/* FUN_2c48ed34 @ 0x2c48ed34 */

undefined4 FUN_2c48ed34(uint param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 < 3) && (-1 < param_2)) {
    iVar3 = *(int *)(DAT_2c48edb0 + param_1 * 4);
    iVar1 = *(int *)(DAT_2c48edb4 + param_1 * 4);
    iVar2 = 0;
    if (0 < iVar3) {
      if (iVar3 < iVar1) {
        iVar2 = (iVar3 * 0xf + (iVar1 >> 1)) / iVar1;
      }
      else {
        iVar2 = 0xf;
      }
    }
    iVar4 = iVar3;
    if ((iVar2 < param_2) && (iVar4 = iVar1, param_2 < 0xf)) {
      iVar4 = iVar3 + ((iVar1 - iVar3) * (param_2 - iVar2) + (0xf - iVar2 >> 1)) / (0xf - iVar2);
    }
    *param_3 = iVar4;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x57,DAT_2c48edc4,DAT_2c48edc0,DAT_2c48edbc,DAT_2c48edb8,param_1,param_2);
}

