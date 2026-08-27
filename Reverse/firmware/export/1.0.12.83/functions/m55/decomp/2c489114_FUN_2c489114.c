/* FUN_2c489114 @ 0x2c489114 */

void FUN_2c489114(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = DAT_2c4891a0;
  if (param_1 < 4) {
    if (*DAT_2c4891a0 == 0) {
      iVar3 = FUN_2c647174(1,0);
      *piVar1 = iVar3;
    }
    FUN_2c674268(param_2,0,0x20);
    *(undefined1 *)((int)param_2 + 3) = 1;
    *(char *)((int)param_2 + 1) = (char)param_1;
    puVar2 = DAT_2c4891a4;
    FUN_2c49737c(0x27,param_2,0x20);
    FUN_2c6471b4(*piVar1,5000);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *param_2 = *puVar2;
    param_2[1] = uVar4;
    param_2[2] = uVar5;
    param_2[3] = uVar6;
    uVar4 = puVar2[5];
    uVar5 = puVar2[6];
    uVar6 = puVar2[7];
    param_2[4] = puVar2[4];
    param_2[5] = uVar4;
    param_2[6] = uVar5;
    param_2[7] = uVar6;
    return;
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x213,DAT_2c4891b0,DAT_2c4891ac,DAT_2c4891a8,param_1);
}

