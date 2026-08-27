/* FUN_2c4f6430 @ 0x2c4f6430 */

undefined4 FUN_2c4f6430(uint param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = DAT_2c4f6168;
  puVar2 = DAT_2c4f613c;
  uVar6 = (uint)(DAT_2c4f6484 - (int)DAT_2c4f6480) >> 5;
  if (uVar6 != 0) {
    puVar4 = DAT_2c4f6480;
    do {
      if (*puVar4 == param_1) {
        if (*(int *)(puVar4 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4f6494,DAT_2c4f6490,param_1,*(int *)(puVar4 + 8));
        }
        sVar1 = *(short *)(DAT_2c4f6168 + 0x40);
        *DAT_2c4f613c = (short)param_1;
        puVar2[1] = sVar1;
        *(short *)(iVar3 + 0x40) = sVar1 + 1;
        if (param_3 < 0x401) {
          uVar6 = (uint)(DAT_2c4f6140 - DAT_2c4f6144) >> 5;
          if (uVar6 != 0) {
            iVar5 = 0;
            do {
              if (*(ushort *)(DAT_2c4f6144 + iVar5 * 2) == param_1) {
                FUN_2c674668(DAT_2c4f6148,param_2,param_3);
                iVar5 = FUN_2c4baa00(0,DAT_2c4f613c,param_3 + 4);
                if (iVar5 == 0) {
                  FUN_2c6471b4(*(undefined4 *)(iVar3 + 4),0xffffffff);
                  if (*(code **)(puVar4 + 0xe) != (code *)0x0) {
                    (**(code **)(puVar4 + 0xe))(param_1,param_2,param_3);
                  }
                  return 0;
                }
                    /* WARNING: Subroutine does not return */
                TRACE(4,0x105,DAT_2c4f6150,DAT_2c4f6158,DAT_2c4f6154,DAT_2c4f614c);
              }
              iVar5 = iVar5 + 0x10;
            } while (uVar6 * 0x10 - iVar5 != 0);
          }
                    /* WARNING: Subroutine does not return */
          FUN_2c673ca8(DAT_2c4f6160,DAT_2c4f615c,param_1);
        }
                    /* WARNING: Subroutine does not return */
        FUN_2c673ca8(DAT_2c4f6164,param_3,0x400);
      }
      puVar4 = puVar4 + 0x10;
    } while (puVar4 != DAT_2c4f6480 + uVar6 * 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_2c673ca8(DAT_2c4f648c,DAT_2c4f6488,param_1);
}

