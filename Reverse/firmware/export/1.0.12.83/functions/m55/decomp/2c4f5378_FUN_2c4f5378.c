/* FUN_2c4f5378 @ 0x2c4f5378 */

void FUN_2c4f5378(uint param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  short *psVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = DAT_2c4f535c;
  psVar2 = DAT_2c4f5358;
  uVar6 = (uint)(DAT_2c4f53c8 - (int)DAT_2c4f53c4) >> 5;
  if (uVar6 != 0) {
    puVar4 = DAT_2c4f53c4;
    do {
      if (*puVar4 == param_1) {
        if (*(int *)(puVar4 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4f53d8,DAT_2c4f53d4,*(int *)(puVar4 + 8),param_1);
        }
        if (*DAT_2c4f5354 != '\0') {
          sVar1 = *DAT_2c4f5358;
          *DAT_2c4f535c = (short)param_1;
          puVar3[1] = sVar1;
          *psVar2 = sVar1 + 1;
          if (0x400 < param_3) {
                    /* WARNING: Subroutine does not return */
            FUN_2c673ca8(DAT_2c4f5374,param_3,0x400);
          }
          FUN_2c674668(puVar3 + 2,param_2,param_3);
          FUN_2c4bd76c(0,puVar3,param_3 + 4);
          uVar6 = (uint)(DAT_2c4f5360 - DAT_2c4f5364) >> 5;
          if (uVar6 != 0) {
            iVar5 = 0;
            do {
              if (*(ushort *)(DAT_2c4f5364 + iVar5 * 2) == param_1) {
                FUN_2c6441b4(*DAT_2c4f5368,0xffffffff);
                if (*(code **)(puVar4 + 0xe) == (code *)0x0) {
                  return;
                }
                    /* WARNING: Could not recover jumptable at 0x2c4f5336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(puVar4 + 0xe))(param_1,param_2,param_3);
                return;
              }
              iVar5 = iVar5 + 0x10;
            } while (uVar6 * 0x10 - iVar5 != 0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4f5370,DAT_2c4f536c,param_1);
        }
        return;
      }
      puVar4 = puVar4 + 0x10;
    } while (puVar4 != DAT_2c4f53c4 + uVar6 * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4f53d0,DAT_2c4f53cc,param_1);
}

