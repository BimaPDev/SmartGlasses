/* FUN_2c015e74 @ 0x2c015e74 */

void FUN_2c015e74(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = param_2 & 0x3ffffff;
  if ((uVar6 < 0xe50000) && (0x10000 < param_3 + uVar6)) {
    if (((DAT_2c015f30 & param_2) == 0) ||
       (((0x72ffff < uVar6 || (0x730000 < param_3 + uVar6)) || (0x72ffff < uVar6)))) {
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(DAT_2c015f38,DAT_2c015f34,uVar6,param_3,0x10000,0x720000);
    }
    iVar1 = FUN_2c006918(param_1,0);
    if (iVar1 == 0) {
      uVar6 = uVar6 + 0x720000;
    }
  }
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_2c00dfac(DAT_2c015f50,DAT_2c015f44,param_1);
  }
  if (*DAT_2c015f3c != 0) {
    iVar3 = 0x7c;
    uVar2 = 0;
    iVar1 = 0;
    piVar5 = DAT_2c015f40;
    do {
      if ((((uint)piVar5[2] <= uVar6) || (param_3 + uVar6 <= (uint)piVar5[1])) &&
         (uVar4 = piVar5[2] - piVar5[1], uVar2 < uVar4)) {
        iVar3 = *piVar5;
        uVar2 = uVar4;
      }
      iVar1 = iVar1 + 1;
      piVar5 = piVar5 + 3;
    } while (*DAT_2c015f3c != iVar1);
    if (iVar3 != 0x7c) {
      iVar1 = FUN_2c00647c(0);
      if (iVar1 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_2c00dfac(DAT_2c015f48,DAT_2c015f44,iVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c00dfac(DAT_2c015f4c,DAT_2c015f44,uVar6,param_3 + uVar6);
}

