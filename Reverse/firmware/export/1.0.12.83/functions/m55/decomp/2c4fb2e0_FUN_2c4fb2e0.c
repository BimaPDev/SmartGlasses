/* FUN_2c4fb2e0 @ 0x2c4fb2e0 */

uint FUN_2c4fb2e0(uint param_1,undefined4 *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  if (4 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_2c673ca8(DAT_2c4fb398,DAT_2c4fb388);
  }
  iVar4 = param_1 * 0x6c + DAT_2c4fb380;
  if (*(char *)(DAT_2c4fb380 + param_1 * 0x6c) != '\0') {
    if (*(char *)(iVar4 + 2) != '\0') {
      return 0;
    }
    iVar6 = *(int *)(iVar4 + 0x5c);
    if (iVar6 != 0) {
      uVar5 = *(int *)(iVar4 + 0x30) * *(int *)(iVar4 + 0x3c) * param_2[2];
      uVar2 = FUN_2c4c34c8(iVar6);
      puVar1 = DAT_2c4fb384;
      if (uVar5 <= uVar2) {
        FUN_2c4c3424(iVar6,*param_2,uVar5);
        *DAT_2c4fb384 = 0;
        return uVar5;
      }
      *DAT_2c4fb384 = *DAT_2c4fb384 + 1;
      FUN_2c48d298(3);
      uVar2 = *puVar1;
      if ((uVar2 - 1 & uVar2) == 0) {
        uVar3 = FUN_2c674198();
                    /* WARNING: Subroutine does not return */
        TRACE(4,0x493,DAT_2c4fb394,DAT_2c4fb390,DAT_2c4fb38c,DAT_2c4fb388,uVar2,uVar3);
      }
    }
  }
  return 0;
}

